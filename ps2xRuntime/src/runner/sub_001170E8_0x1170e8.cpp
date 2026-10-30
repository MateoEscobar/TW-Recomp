#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001170E8
// Address: 0x1170e8 - 0x117190
void sub_001170E8_0x1170e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001170E8_0x1170e8");
#endif

    switch (ctx->pc) {
        case 0x117114u: goto label_117114;
        case 0x117140u: goto label_117140;
        case 0x117158u: goto label_117158;
        case 0x117174u: goto label_117174;
        default: break;
    }

    ctx->pc = 0x1170e8u;

    // 0x1170e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1170e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1170ec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1170ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1170f0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1170f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1170f4: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x1170f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x1170f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1170f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1170fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1170fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117100: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x117100u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117104: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x117104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x117108: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x117108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11710c: 0xc045b52  jal         func_116D48
    ctx->pc = 0x11710Cu;
    SET_GPR_U32(ctx, 31, 0x117114u);
    ctx->pc = 0x117110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11710Cu;
    // 0x117110: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116D48u, 0x11710Cu, 0x117114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117114u;
label_117114:
    // 0x117114: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x117114u;
    {
        const bool branch_taken_0x117114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117114) {
            ctx->pc = 0x117118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117114u;
            // 0x117118: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117178u;
            goto label_117178;
        }
    }
    ctx->pc = 0x11711Cu;
    // 0x11711c: 0x3a020002  xori        $v0, $s0, 0x2
    ctx->pc = 0x11711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)2);
    // 0x117120: 0x3a230052  xori        $v1, $s1, 0x52
    ctx->pc = 0x117120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)82);
    // 0x117124: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x117124u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x117128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x117128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11712c: 0x3800a  movz        $s0, $zero, $v1
    ctx->pc = 0x11712cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x117130: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117134: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x117134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117138: 0xc045bb0  jal         func_116EC0
    ctx->pc = 0x117138u;
    SET_GPR_U32(ctx, 31, 0x117140u);
    ctx->pc = 0x11713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117138u;
    // 0x11713c: 0x24130052  addiu       $s3, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EC0u, 0x117138u, 0x117140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117140u;
label_117140:
    // 0x117140: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x117140u;
    {
        const bool branch_taken_0x117140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x117140) {
            ctx->pc = 0x117144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117140u;
            // 0x117144: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117178u;
            goto label_117178;
        }
    }
    ctx->pc = 0x117148u;
    // 0x117148: 0x12330005  beq         $s1, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x117148u;
    {
        const bool branch_taken_0x117148 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x11714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117148u;
        // 0x11714c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117148) {
            ctx->pc = 0x117160u;
            goto label_117160;
        }
    }
    ctx->pc = 0x117150u;
    // 0x117150: 0xc045bfa  jal         func_116FE8
    ctx->pc = 0x117150u;
    SET_GPR_U32(ctx, 31, 0x117158u);
    ctx->pc = 0x117154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117150u;
    // 0x117154: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116FE8u, 0x117150u, 0x117158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117158u;
label_117158:
    // 0x117158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x117158u;
    {
        const bool branch_taken_0x117158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117158u;
        // 0x11715c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117158) {
            ctx->pc = 0x117178u;
            goto label_117178;
        }
    }
    ctx->pc = 0x117160u;
label_117160:
    // 0x117160: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x117160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x117164: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x117164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x117168: 0x248491e0  addiu       $a0, $a0, -0x6E20
    ctx->pc = 0x117168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    // 0x11716c: 0xc050fda  jal         func_143F68
    ctx->pc = 0x11716Cu;
    SET_GPR_U32(ctx, 31, 0x117174u);
    ctx->pc = 0x117170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11716Cu;
    // 0x117170: 0x24a582a0  addiu       $a1, $a1, -0x7D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x11716Cu, 0x117174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117174u;
label_117174:
    // 0x117174: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x117174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_117178:
    // 0x117178: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x117178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11717c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11717cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x117180: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x117180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x117184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x117188: 0x3e00008  jr          $ra
    ctx->pc = 0x117188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117188u;
        // 0x11718c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117190u;
}
