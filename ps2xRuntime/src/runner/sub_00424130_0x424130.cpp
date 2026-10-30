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

// Function: sub_00424130
// Address: 0x424130 - 0x4241d8
void sub_00424130_0x424130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424130_0x424130");
#endif

    switch (ctx->pc) {
        case 0x424168u: goto label_424168;
        case 0x424170u: goto label_424170;
        case 0x424198u: goto label_424198;
        default: break;
    }

    ctx->pc = 0x424130u;

    // 0x424130: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x424130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x424134: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x424134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x424138: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x424138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x42413c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42413cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424140: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x424140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x424144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x424144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424148: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x424148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x42414c: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x42414cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x424150: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x424150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x424154: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x424154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x424158: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x424158u;
    {
        const bool branch_taken_0x424158 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x42415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424158u;
        // 0x42415c: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424158) {
            ctx->pc = 0x4241B0u;
            goto label_4241b0;
        }
    }
    ctx->pc = 0x424160u;
    // 0x424160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x424160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424164: 0x0  nop
    ctx->pc = 0x424164u;
    // NOP
label_424168:
    // 0x424168: 0xc108f3c  jal         func_423CF0
    ctx->pc = 0x424168u;
    SET_GPR_U32(ctx, 31, 0x424170u);
    ctx->pc = 0x42416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424168u;
    // 0x42416c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x423CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x423CF0u, 0x424168u, 0x424170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424170u;
label_424170:
    // 0x424170: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x424170u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424174: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x424174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x424178: 0x54520009  bnel        $v0, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x424178u;
    {
        const bool branch_taken_0x424178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x424178) {
            ctx->pc = 0x42417Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424178u;
            // 0x42417c: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4241A0u;
            goto label_4241a0;
        }
    }
    ctx->pc = 0x424180u;
    // 0x424180: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x424180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x424184: 0x54530006  bnel        $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x424184u;
    {
        const bool branch_taken_0x424184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x424184) {
            ctx->pc = 0x424188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424184u;
            // 0x424188: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4241A0u;
            goto label_4241a0;
        }
    }
    ctx->pc = 0x42418Cu;
    // 0x42418c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42418cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x424190: 0xc109026  jal         func_424098
    ctx->pc = 0x424190u;
    SET_GPR_U32(ctx, 31, 0x424198u);
    ctx->pc = 0x424194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x424190u;
    // 0x424194: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x424098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x424098u, 0x424190u, 0x424198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x424198u;
label_424198:
    // 0x424198: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x424198u;
    {
        const bool branch_taken_0x424198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424198u;
        // 0x42419c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424198) {
            ctx->pc = 0x4241B8u;
            goto label_4241b8;
        }
    }
    ctx->pc = 0x4241A0u;
label_4241a0:
    // 0x4241a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x4241a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x4241a4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x4241a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x4241a8: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x4241A8u;
    {
        const bool branch_taken_0x4241a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4241ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241A8u;
        // 0x4241ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4241a8) {
            ctx->pc = 0x424168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424168;
        }
    }
    ctx->pc = 0x4241B0u;
label_4241b0:
    // 0x4241b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4241b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4241b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4241b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4241b8:
    // 0x4241b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4241b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4241bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4241bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4241c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4241c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4241c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4241c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4241c8: 0x3e00008  jr          $ra
    ctx->pc = 0x4241C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4241CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4241C8u;
        // 0x4241cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4241C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4241D0u;
    // 0x4241d0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x4241d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4241d4: 0x0  nop
    ctx->pc = 0x4241d4u;
    // NOP
    ctx->pc = 0x4241d8u;
}
