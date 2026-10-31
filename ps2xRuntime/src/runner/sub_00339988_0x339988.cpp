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

// Function: sub_00339988
// Address: 0x339988 - 0x339a20
void sub_00339988_0x339988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00339988_0x339988");
#endif

    switch (ctx->pc) {
        case 0x339988u: goto label_339988;
        case 0x33998cu: goto label_33998c;
        case 0x339990u: goto label_339990;
        case 0x339994u: goto label_339994;
        case 0x339998u: goto label_339998;
        case 0x33999cu: goto label_33999c;
        case 0x3399a0u: goto label_3399a0;
        case 0x3399a4u: goto label_3399a4;
        case 0x3399a8u: goto label_3399a8;
        case 0x3399acu: goto label_3399ac;
        case 0x3399b0u: goto label_3399b0;
        case 0x3399b4u: goto label_3399b4;
        case 0x3399b8u: goto label_3399b8;
        case 0x3399bcu: goto label_3399bc;
        case 0x3399c0u: goto label_3399c0;
        case 0x3399c4u: goto label_3399c4;
        case 0x3399c8u: goto label_3399c8;
        case 0x3399ccu: goto label_3399cc;
        case 0x3399d0u: goto label_3399d0;
        case 0x3399d4u: goto label_3399d4;
        case 0x3399d8u: goto label_3399d8;
        case 0x3399dcu: goto label_3399dc;
        case 0x3399e0u: goto label_3399e0;
        case 0x3399e4u: goto label_3399e4;
        case 0x3399e8u: goto label_3399e8;
        case 0x3399ecu: goto label_3399ec;
        case 0x3399f0u: goto label_3399f0;
        case 0x3399f4u: goto label_3399f4;
        case 0x3399f8u: goto label_3399f8;
        case 0x3399fcu: goto label_3399fc;
        case 0x339a00u: goto label_339a00;
        case 0x339a04u: goto label_339a04;
        case 0x339a08u: goto label_339a08;
        case 0x339a0cu: goto label_339a0c;
        case 0x339a10u: goto label_339a10;
        case 0x339a14u: goto label_339a14;
        case 0x339a18u: goto label_339a18;
        case 0x339a1cu: goto label_339a1c;
        default: break;
    }

    ctx->pc = 0x339988u;

label_339988:
    // 0x339988: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x339988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_33998c:
    // 0x33998c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x33998cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_339990:
    // 0x339990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x339990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_339994:
    // 0x339994: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x339994u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_339998:
    // 0x339998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x339998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33999c:
    // 0x33999c: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x33999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_3399a0:
    // 0x3399a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3399a4:
    if (ctx->pc == 0x3399A4u) {
        ctx->pc = 0x3399A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399A0u;
        // 0x3399a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399A8u;
        goto label_3399a8;
    }
    ctx->pc = 0x3399A0u;
    {
        const bool branch_taken_0x3399a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399A0u;
        // 0x3399a4: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399a0) {
            ctx->pc = 0x339A08u;
            goto label_339a08;
        }
    }
    ctx->pc = 0x3399A8u;
label_3399a8:
    // 0x3399a8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x3399a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_3399ac:
    // 0x3399ac: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3399acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
label_3399b0:
    // 0x3399b0: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x3399b0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_3399b4:
    // 0x3399b4: 0x3c080057  lui         $t0, 0x57
    ctx->pc = 0x3399b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)87 << 16));
label_3399b8:
    // 0x3399b8: 0x24a56cc8  addiu       $a1, $a1, 0x6CC8
    ctx->pc = 0x3399b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27848));
label_3399bc:
    // 0x3399bc: 0x25086d30  addiu       $t0, $t0, 0x6D30
    ctx->pc = 0x3399bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 27952));
label_3399c0:
    // 0x3399c0: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x3399c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_3399c4:
    // 0x3399c4: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x3399c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3399c8:
    // 0x3399c8: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3399c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3399cc:
    // 0x3399cc: 0x240901e5  addiu       $t1, $zero, 0x1E5
    ctx->pc = 0x3399ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 485));
label_3399d0:
    // 0x3399d0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x3399d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_3399d4:
    // 0x3399d4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3399d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3399d8:
    // 0x3399d8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x3399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_3399dc:
    // 0x3399dc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3399dcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3399e0:
    // 0x3399e0: 0x40f809  jalr        $v0
label_3399e4:
    if (ctx->pc == 0x3399E4u) {
        ctx->pc = 0x3399E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E0u;
        // 0x3399e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399E8u;
        goto label_3399e8;
    }
    ctx->pc = 0x3399E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3399E8u);
        ctx->pc = 0x3399E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E0u;
        // 0x3399e4: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3399E0u, 0x3399E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3399E8u;
label_3399e8:
    // 0x3399e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3399ec:
    if (ctx->pc == 0x3399ECu) {
        ctx->pc = 0x3399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E8u;
        // 0x3399ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399F0u;
        goto label_3399f0;
    }
    ctx->pc = 0x3399E8u;
    {
        const bool branch_taken_0x3399e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399E8u;
        // 0x3399ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399e8) {
            ctx->pc = 0x339A04u;
            goto label_339a04;
        }
    }
    ctx->pc = 0x3399F0u;
label_3399f0:
    // 0x3399f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3399f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3399f4:
    // 0x3399f4: 0xc0ce9bc  jal         func_33A6F0
label_3399f8:
    if (ctx->pc == 0x3399F8u) {
        ctx->pc = 0x3399F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399F4u;
        // 0x3399f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3399FCu;
        goto label_3399fc;
    }
    ctx->pc = 0x3399F4u;
    SET_GPR_U32(ctx, 31, 0x3399FCu);
    ctx->pc = 0x3399F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3399F4u;
    // 0x3399f8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33A6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A6F0u, 0x3399F4u, 0x3399FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3399FCu;
label_3399fc:
    // 0x3399fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_339a00:
    if (ctx->pc == 0x339A00u) {
        ctx->pc = 0x339A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399FCu;
        // 0x339a00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A04u;
        goto label_339a04;
    }
    ctx->pc = 0x3399FCu;
    {
        const bool branch_taken_0x3399fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399FCu;
        // 0x339a00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399fc) {
            ctx->pc = 0x339A08u;
            goto label_339a08;
        }
    }
    ctx->pc = 0x339A04u;
label_339a04:
    // 0x339a04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x339a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_339a08:
    // 0x339a08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x339a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_339a0c:
    // 0x339a0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x339a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_339a10:
    // 0x339a10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x339a10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_339a14:
    // 0x339a14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x339a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_339a18:
    // 0x339a18: 0x3e00008  jr          $ra
label_339a1c:
    if (ctx->pc == 0x339A1Cu) {
        ctx->pc = 0x339A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A18u;
        // 0x339a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x339A20u;
        goto label_fallthrough_0x339a18;
    }
    ctx->pc = 0x339A18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x339A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A18u;
        // 0x339a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x339A18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x339a18:
    ctx->pc = 0x339A20u;
}
