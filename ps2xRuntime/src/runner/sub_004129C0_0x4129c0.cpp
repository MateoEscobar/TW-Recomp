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

// Function: sub_004129C0
// Address: 0x4129c0 - 0x412a18
void sub_004129C0_0x4129c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004129C0_0x4129c0");
#endif

    switch (ctx->pc) {
        case 0x4129c0u: goto label_4129c0;
        case 0x4129c4u: goto label_4129c4;
        case 0x4129c8u: goto label_4129c8;
        case 0x4129ccu: goto label_4129cc;
        case 0x4129d0u: goto label_4129d0;
        case 0x4129d4u: goto label_4129d4;
        case 0x4129d8u: goto label_4129d8;
        case 0x4129dcu: goto label_4129dc;
        case 0x4129e0u: goto label_4129e0;
        case 0x4129e4u: goto label_4129e4;
        case 0x4129e8u: goto label_4129e8;
        case 0x4129ecu: goto label_4129ec;
        case 0x4129f0u: goto label_4129f0;
        case 0x4129f4u: goto label_4129f4;
        case 0x4129f8u: goto label_4129f8;
        case 0x4129fcu: goto label_4129fc;
        case 0x412a00u: goto label_412a00;
        case 0x412a04u: goto label_412a04;
        case 0x412a08u: goto label_412a08;
        case 0x412a0cu: goto label_412a0c;
        case 0x412a10u: goto label_412a10;
        case 0x412a14u: goto label_412a14;
        default: break;
    }

    ctx->pc = 0x4129c0u;

label_4129c0:
    // 0x4129c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4129c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4129c4:
    // 0x4129c4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4129c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4129c8:
    // 0x4129c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4129c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4129cc:
    // 0x4129cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4129ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4129d0:
    // 0x4129d0: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_4129d4:
    if (ctx->pc == 0x4129D4u) {
        ctx->pc = 0x4129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129D0u;
        // 0x4129d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4129D8u;
        goto label_4129d8;
    }
    ctx->pc = 0x4129D0u;
    {
        const bool branch_taken_0x4129d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4129D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129D0u;
        // 0x4129d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4129d0) {
            ctx->pc = 0x412A04u;
            goto label_412a04;
        }
    }
    ctx->pc = 0x4129D8u;
label_4129d8:
    // 0x4129d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4129d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4129dc:
    // 0x4129dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4129dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4129e0:
    // 0x4129e0: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x4129e0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_4129e4:
    // 0x4129e4: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x4129e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_4129e8:
    // 0x4129e8: 0x60f809  jalr        $v1
label_4129ec:
    if (ctx->pc == 0x4129ECu) {
        ctx->pc = 0x4129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129E8u;
        // 0x4129ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4129F0u;
        goto label_4129f0;
    }
    ctx->pc = 0x4129E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4129F0u);
        ctx->pc = 0x4129ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129E8u;
        // 0x4129ec: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4129E8u, 0x4129F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4129F0u;
label_4129f0:
    // 0x4129f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4129f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4129f4:
    // 0x4129f4: 0xc104a86  jal         func_412A18
label_4129f8:
    if (ctx->pc == 0x4129F8u) {
        ctx->pc = 0x4129F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129F4u;
        // 0x4129f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4129FCu;
        goto label_4129fc;
    }
    ctx->pc = 0x4129F4u;
    SET_GPR_U32(ctx, 31, 0x4129FCu);
    ctx->pc = 0x4129F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4129F4u;
    // 0x4129f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x4129F4u, 0x4129FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4129FCu;
label_4129fc:
    // 0x4129fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_412a00:
    if (ctx->pc == 0x412A00u) {
        ctx->pc = 0x412A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129FCu;
        // 0x412a00: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A04u;
        goto label_412a04;
    }
    ctx->pc = 0x4129FCu;
    {
        const bool branch_taken_0x4129fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x412A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4129FCu;
        // 0x412a00: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4129fc) {
            ctx->pc = 0x412A0Cu;
            goto label_412a0c;
        }
    }
    ctx->pc = 0x412A04u;
label_412a04:
    // 0x412a04: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x412a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_412a08:
    // 0x412a08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x412a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_412a0c:
    // 0x412a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x412a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_412a10:
    // 0x412a10: 0x3e00008  jr          $ra
label_412a14:
    if (ctx->pc == 0x412A14u) {
        ctx->pc = 0x412A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A10u;
        // 0x412a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x412A18u;
        goto label_fallthrough_0x412a10;
    }
    ctx->pc = 0x412A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x412A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412A10u;
        // 0x412a14: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x412A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x412a10:
    ctx->pc = 0x412A18u;
}
