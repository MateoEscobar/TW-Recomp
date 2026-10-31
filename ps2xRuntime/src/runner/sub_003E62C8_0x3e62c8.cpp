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

// Function: sub_003E62C8
// Address: 0x3e62c8 - 0x3e6358
void sub_003E62C8_0x3e62c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E62C8_0x3e62c8");
#endif

    switch (ctx->pc) {
        case 0x3e62ecu: goto label_3e62ec;
        case 0x3e6328u: goto label_3e6328;
        case 0x3e6338u: goto label_3e6338;
        default: break;
    }

    ctx->pc = 0x3e62c8u;

    // 0x3e62c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e62c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e62cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e62ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e62d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e62d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e62d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e62d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62d8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3e62d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62dc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e62dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e62e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e62e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e62e4: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E62E4u;
    SET_GPR_U32(ctx, 31, 0x3E62ECu);
    ctx->pc = 0x3E62E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E62E4u;
    // 0x3e62e8: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E62E4u, 0x3E62ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E62ECu;
label_3e62ec:
    // 0x3e62ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3e62ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62f0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E62F0u;
    {
        const bool branch_taken_0x3e62f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E62F0u;
        // 0x3e62f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e62f0) {
            ctx->pc = 0x3E6310u;
            goto label_3e6310;
        }
    }
    ctx->pc = 0x3E62F8u;
    // 0x3e62f8: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3e62f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3e62fc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e62fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3e6300: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x3e6300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
    // 0x3e6304: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3e6304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3e6308: 0xae2300b4  sw          $v1, 0xB4($s1)
    ctx->pc = 0x3e6308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x3e630c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e630cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3e6310:
    // 0x3e6310: 0x1482000c  bne         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3E6310u;
    {
        const bool branch_taken_0x3e6310 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6310u;
        // 0x3e6314: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6310) {
            ctx->pc = 0x3E6344u;
            goto label_3e6344;
        }
    }
    ctx->pc = 0x3E6318u;
    // 0x3e6318: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x3e6318u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x3e631c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6320: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E6320u;
    SET_GPR_U32(ctx, 31, 0x3E6328u);
    ctx->pc = 0x3E6324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6320u;
    // 0x3e6324: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E6320u, 0x3E6328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6328u;
label_3e6328:
    // 0x3e6328: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e6328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e632c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e632cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6330: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E6330u;
    SET_GPR_U32(ctx, 31, 0x3E6338u);
    ctx->pc = 0x3E6334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6330u;
    // 0x3e6334: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E6330u, 0x3E6338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6338u;
label_3e6338:
    // 0x3e6338: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3e6338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3e633c: 0xae2200b4  sw          $v0, 0xB4($s1)
    ctx->pc = 0x3e633cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 2));
    // 0x3e6340: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e6340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3e6344:
    // 0x3e6344: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e6344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6348: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e6348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e634c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e634cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6350: 0x3e00008  jr          $ra
    ctx->pc = 0x3E6350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6350u;
        // 0x3e6354: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E6350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6358u;
}
