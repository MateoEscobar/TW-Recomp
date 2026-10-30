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

// Function: sub_004E9680
// Address: 0x4e9680 - 0x4e9700
void sub_004E9680_0x4e9680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E9680_0x4e9680");
#endif

    switch (ctx->pc) {
        case 0x4e9680u: goto label_4e9680;
        case 0x4e9684u: goto label_4e9684;
        case 0x4e9688u: goto label_4e9688;
        case 0x4e968cu: goto label_4e968c;
        case 0x4e9690u: goto label_4e9690;
        case 0x4e9694u: goto label_4e9694;
        case 0x4e9698u: goto label_4e9698;
        case 0x4e969cu: goto label_4e969c;
        case 0x4e96a0u: goto label_4e96a0;
        case 0x4e96a4u: goto label_4e96a4;
        case 0x4e96a8u: goto label_4e96a8;
        case 0x4e96acu: goto label_4e96ac;
        case 0x4e96b0u: goto label_4e96b0;
        case 0x4e96b4u: goto label_4e96b4;
        case 0x4e96b8u: goto label_4e96b8;
        case 0x4e96bcu: goto label_4e96bc;
        case 0x4e96c0u: goto label_4e96c0;
        case 0x4e96c4u: goto label_4e96c4;
        case 0x4e96c8u: goto label_4e96c8;
        case 0x4e96ccu: goto label_4e96cc;
        case 0x4e96d0u: goto label_4e96d0;
        case 0x4e96d4u: goto label_4e96d4;
        case 0x4e96d8u: goto label_4e96d8;
        case 0x4e96dcu: goto label_4e96dc;
        case 0x4e96e0u: goto label_4e96e0;
        case 0x4e96e4u: goto label_4e96e4;
        case 0x4e96e8u: goto label_4e96e8;
        case 0x4e96ecu: goto label_4e96ec;
        case 0x4e96f0u: goto label_4e96f0;
        case 0x4e96f4u: goto label_4e96f4;
        case 0x4e96f8u: goto label_4e96f8;
        case 0x4e96fcu: goto label_4e96fc;
        default: break;
    }

    ctx->pc = 0x4e9680u;

label_4e9680:
    // 0x4e9680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e9680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e9684:
    // 0x4e9684: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e9684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e9688:
    // 0x4e9688: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e9688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e968c:
    // 0x4e968c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e968cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e9690:
    // 0x4e9690: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e9690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e9694:
    // 0x4e9694: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e9694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e9698:
    // 0x4e9698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e9698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e969c:
    // 0x4e969c: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e96a0:
    if (ctx->pc == 0x4E96A0u) {
        ctx->pc = 0x4E96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E969Cu;
        // 0x4e96a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E96A4u;
        goto label_4e96a4;
    }
    ctx->pc = 0x4E969Cu;
    {
        const bool branch_taken_0x4e969c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E969Cu;
        // 0x4e96a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e969c) {
            ctx->pc = 0x4E96E4u;
            goto label_4e96e4;
        }
    }
    ctx->pc = 0x4E96A4u;
label_4e96a4:
    // 0x4e96a4: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x4e96a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4e96a8:
    // 0x4e96a8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e96a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e96ac:
    // 0x4e96ac: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4e96acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4e96b0:
    // 0x4e96b0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4e96b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4e96b4:
    // 0x4e96b4: 0x60f809  jalr        $v1
label_4e96b8:
    if (ctx->pc == 0x4E96B8u) {
        ctx->pc = 0x4E96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96B4u;
        // 0x4e96b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E96BCu;
        goto label_4e96bc;
    }
    ctx->pc = 0x4E96B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E96BCu);
        ctx->pc = 0x4E96B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96B4u;
        // 0x4e96b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E96B4u, 0x4E96BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E96BCu;
label_4e96bc:
    // 0x4e96bc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e96c0:
    // 0x4e96c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e96c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e96c4:
    // 0x4e96c4: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e96c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e96c8:
    // 0x4e96c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e96c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e96cc:
    // 0x4e96cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e96ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e96d0:
    // 0x4e96d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e96d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e96d4:
    // 0x4e96d4: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e96d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e96d8:
    // 0x4e96d8: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e96d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e96dc:
    // 0x4e96dc: 0x60f809  jalr        $v1
label_4e96e0:
    if (ctx->pc == 0x4E96E0u) {
        ctx->pc = 0x4E96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96DCu;
        // 0x4e96e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E96E4u;
        goto label_4e96e4;
    }
    ctx->pc = 0x4E96DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E96E4u);
        ctx->pc = 0x4E96E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96DCu;
        // 0x4e96e0: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E96DCu, 0x4E96E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E96E4u;
label_4e96e4:
    // 0x4e96e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e96e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e96e8:
    // 0x4e96e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e96e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e96ec:
    // 0x4e96ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e96ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e96f0:
    // 0x4e96f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e96f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e96f4:
    // 0x4e96f4: 0x3e00008  jr          $ra
label_4e96f8:
    if (ctx->pc == 0x4E96F8u) {
        ctx->pc = 0x4E96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96F4u;
        // 0x4e96f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E96FCu;
        goto label_4e96fc;
    }
    ctx->pc = 0x4E96F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E96F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E96F4u;
        // 0x4e96f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E96F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E96FCu;
label_4e96fc:
    // 0x4e96fc: 0x0  nop
    ctx->pc = 0x4e96fcu;
    // NOP
    ctx->pc = 0x4e9700u;
}
