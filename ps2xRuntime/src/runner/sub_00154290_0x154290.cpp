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

// Function: sub_00154290
// Address: 0x154290 - 0x154320
void sub_00154290_0x154290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154290_0x154290");
#endif

    switch (ctx->pc) {
        case 0x154290u: goto label_154290;
        case 0x154294u: goto label_154294;
        case 0x154298u: goto label_154298;
        case 0x15429cu: goto label_15429c;
        case 0x1542a0u: goto label_1542a0;
        case 0x1542a4u: goto label_1542a4;
        case 0x1542a8u: goto label_1542a8;
        case 0x1542acu: goto label_1542ac;
        case 0x1542b0u: goto label_1542b0;
        case 0x1542b4u: goto label_1542b4;
        case 0x1542b8u: goto label_1542b8;
        case 0x1542bcu: goto label_1542bc;
        case 0x1542c0u: goto label_1542c0;
        case 0x1542c4u: goto label_1542c4;
        case 0x1542c8u: goto label_1542c8;
        case 0x1542ccu: goto label_1542cc;
        case 0x1542d0u: goto label_1542d0;
        case 0x1542d4u: goto label_1542d4;
        case 0x1542d8u: goto label_1542d8;
        case 0x1542dcu: goto label_1542dc;
        case 0x1542e0u: goto label_1542e0;
        case 0x1542e4u: goto label_1542e4;
        case 0x1542e8u: goto label_1542e8;
        case 0x1542ecu: goto label_1542ec;
        case 0x1542f0u: goto label_1542f0;
        case 0x1542f4u: goto label_1542f4;
        case 0x1542f8u: goto label_1542f8;
        case 0x1542fcu: goto label_1542fc;
        case 0x154300u: goto label_154300;
        case 0x154304u: goto label_154304;
        case 0x154308u: goto label_154308;
        case 0x15430cu: goto label_15430c;
        case 0x154310u: goto label_154310;
        case 0x154314u: goto label_154314;
        case 0x154318u: goto label_154318;
        case 0x15431cu: goto label_15431c;
        default: break;
    }

    ctx->pc = 0x154290u;

label_154290:
    // 0x154290: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_154294:
    // 0x154294: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x154294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_154298:
    // 0x154298: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x154298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_15429c:
    // 0x15429c: 0x24428220  addiu       $v0, $v0, -0x7DE0
    ctx->pc = 0x15429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935072));
label_1542a0:
    // 0x1542a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1542a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1542a4:
    // 0x1542a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1542a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1542a8:
    // 0x1542a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1542a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1542ac:
    // 0x1542ac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1542acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1542b0:
    // 0x1542b0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1542b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1542b4:
    // 0x1542b4: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1542b8:
    if (ctx->pc == 0x1542B8u) {
        ctx->pc = 0x1542B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542B4u;
        // 0x1542b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542BCu;
        goto label_1542bc;
    }
    ctx->pc = 0x1542B4u;
    {
        const bool branch_taken_0x1542b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542B4u;
        // 0x1542b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542b4) {
            ctx->pc = 0x1542ECu;
            goto label_1542ec;
        }
    }
    ctx->pc = 0x1542BCu;
label_1542bc:
    // 0x1542bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1542bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1542c0:
    // 0x1542c0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1542c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1542c4:
    // 0x1542c4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x1542c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1542c8:
    // 0x1542c8: 0x24c6dc10  addiu       $a2, $a2, -0x23F0
    ctx->pc = 0x1542c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958096));
label_1542cc:
    // 0x1542cc: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1542ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1542d0:
    // 0x1542d0: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1542d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1542d4:
    // 0x1542d4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1542d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1542d8:
    // 0x1542d8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1542d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1542dc:
    // 0x1542dc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1542dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1542e0:
    // 0x1542e0: 0x60f809  jalr        $v1
label_1542e4:
    if (ctx->pc == 0x1542E4u) {
        ctx->pc = 0x1542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E0u;
        // 0x1542e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1542E8u;
        goto label_1542e8;
    }
    ctx->pc = 0x1542E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1542E8u);
        ctx->pc = 0x1542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542E0u;
        // 0x1542e4: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1542E0u, 0x1542E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1542E8u;
label_1542e8:
    // 0x1542e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1542e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1542ec:
    // 0x1542ec: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x1542ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
label_1542f0:
    // 0x1542f0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1542f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_1542f4:
    // 0x1542f4: 0x24424298  addiu       $v0, $v0, 0x4298
    ctx->pc = 0x1542f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17048));
label_1542f8:
    // 0x1542f8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1542fc:
    if (ctx->pc == 0x1542FCu) {
        ctx->pc = 0x1542FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542F8u;
        // 0x1542fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154300u;
        goto label_154300;
    }
    ctx->pc = 0x1542F8u;
    {
        const bool branch_taken_0x1542f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1542FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1542F8u;
        // 0x1542fc: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1542f8) {
            ctx->pc = 0x154308u;
            goto label_154308;
        }
    }
    ctx->pc = 0x154300u;
label_154300:
    // 0x154300: 0xc10b208  jal         func_42C820
label_154304:
    if (ctx->pc == 0x154304u) {
        ctx->pc = 0x154304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154300u;
        // 0x154304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154308u;
        goto label_154308;
    }
    ctx->pc = 0x154300u;
    SET_GPR_U32(ctx, 31, 0x154308u);
    ctx->pc = 0x154304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154300u;
    // 0x154304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x154300u, 0x154308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154308u;
label_154308:
    // 0x154308: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x154308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_15430c:
    // 0x15430c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15430cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_154310:
    // 0x154310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x154310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_154314:
    // 0x154314: 0x3e00008  jr          $ra
label_154318:
    if (ctx->pc == 0x154318u) {
        ctx->pc = 0x154318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154314u;
        // 0x154318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15431Cu;
        goto label_15431c;
    }
    ctx->pc = 0x154314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154314u;
        // 0x154318: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15431Cu;
label_15431c:
    // 0x15431c: 0x0  nop
    ctx->pc = 0x15431cu;
    // NOP
    ctx->pc = 0x154320u;
}
