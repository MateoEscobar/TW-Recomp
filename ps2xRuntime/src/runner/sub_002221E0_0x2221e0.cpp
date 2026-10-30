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

// Function: sub_002221E0
// Address: 0x2221e0 - 0x222288
void sub_002221E0_0x2221e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002221E0_0x2221e0");
#endif

    switch (ctx->pc) {
        case 0x222204u: goto label_222204;
        case 0x222228u: goto label_222228;
        case 0x222238u: goto label_222238;
        case 0x222248u: goto label_222248;
        case 0x222260u: goto label_222260;
        default: break;
    }

    ctx->pc = 0x2221e0u;

    // 0x2221e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2221e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2221e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2221e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2221e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2221e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2221ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2221ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221f0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2221f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2221f4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2221f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2221f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2221f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2221fc: 0xc087502  jal         func_21D408
    ctx->pc = 0x2221FCu;
    SET_GPR_U32(ctx, 31, 0x222204u);
    ctx->pc = 0x222200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2221FCu;
    // 0x222200: 0x30d2ffff  andi        $s2, $a2, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2221FCu, 0x222204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222204u;
label_222204:
    // 0x222204: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x222204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x222208: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x222208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x22220c: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x22220cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x222210: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x222210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222214: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x222214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x222218: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x222218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22221c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x22221cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x222220: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x222220u;
    SET_GPR_U32(ctx, 31, 0x222228u);
    ctx->pc = 0x222224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222220u;
    // 0x222224: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x222220u, 0x222228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222228u;
label_222228:
    // 0x222228: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x222228u;
    {
        const bool branch_taken_0x222228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222228u;
        // 0x22222c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222228) {
            ctx->pc = 0x222240u;
            goto label_222240;
        }
    }
    ctx->pc = 0x222230u;
    // 0x222230: 0xc105062  jal         func_414188
    ctx->pc = 0x222230u;
    SET_GPR_U32(ctx, 31, 0x222238u);
    ctx->pc = 0x222234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222230u;
    // 0x222234: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x414188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x414188u, 0x222230u, 0x222238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222238u;
label_222238:
    // 0x222238: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x222238u;
    {
        const bool branch_taken_0x222238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222238u;
        // 0x22223c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222238) {
            ctx->pc = 0x222270u;
            goto label_222270;
        }
    }
    ctx->pc = 0x222240u;
label_222240:
    // 0x222240: 0xc091e56  jal         func_247958
    ctx->pc = 0x222240u;
    SET_GPR_U32(ctx, 31, 0x222248u);
    ctx->pc = 0x222244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222240u;
    // 0x222244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247958u, 0x222240u, 0x222248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222248u;
label_222248:
    // 0x222248: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x222248u;
    {
        const bool branch_taken_0x222248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222248u;
        // 0x22224c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222248) {
            ctx->pc = 0x22226Cu;
            goto label_22226c;
        }
    }
    ctx->pc = 0x222250u;
    // 0x222250: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x222250u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222254: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x222254u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222258: 0xc093efe  jal         func_24FBF8
    ctx->pc = 0x222258u;
    SET_GPR_U32(ctx, 31, 0x222260u);
    ctx->pc = 0x22225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x222258u;
    // 0x22225c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24FBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24FBF8u, 0x222258u, 0x222260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x222260u;
label_222260:
    // 0x222260: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x222260u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x222264: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x222264u;
    {
        const bool branch_taken_0x222264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x222268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222264u;
        // 0x222268: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x222264) {
            ctx->pc = 0x222270u;
            goto label_222270;
        }
    }
    ctx->pc = 0x22226Cu;
label_22226c:
    // 0x22226c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22226cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_222270:
    // 0x222270: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x222270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x222274: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x222274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x222278: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x222278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22227c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22227cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x222280: 0x3e00008  jr          $ra
    ctx->pc = 0x222280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x222284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x222280u;
        // 0x222284: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x222280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x222288u;
}
