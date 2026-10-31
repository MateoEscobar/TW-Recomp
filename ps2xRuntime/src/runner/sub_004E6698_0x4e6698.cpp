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

// Function: sub_004E6698
// Address: 0x4e6698 - 0x4e6718
void sub_004E6698_0x4e6698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E6698_0x4e6698");
#endif

    switch (ctx->pc) {
        case 0x4e6698u: goto label_4e6698;
        case 0x4e669cu: goto label_4e669c;
        case 0x4e66a0u: goto label_4e66a0;
        case 0x4e66a4u: goto label_4e66a4;
        case 0x4e66a8u: goto label_4e66a8;
        case 0x4e66acu: goto label_4e66ac;
        case 0x4e66b0u: goto label_4e66b0;
        case 0x4e66b4u: goto label_4e66b4;
        case 0x4e66b8u: goto label_4e66b8;
        case 0x4e66bcu: goto label_4e66bc;
        case 0x4e66c0u: goto label_4e66c0;
        case 0x4e66c4u: goto label_4e66c4;
        case 0x4e66c8u: goto label_4e66c8;
        case 0x4e66ccu: goto label_4e66cc;
        case 0x4e66d0u: goto label_4e66d0;
        case 0x4e66d4u: goto label_4e66d4;
        case 0x4e66d8u: goto label_4e66d8;
        case 0x4e66dcu: goto label_4e66dc;
        case 0x4e66e0u: goto label_4e66e0;
        case 0x4e66e4u: goto label_4e66e4;
        case 0x4e66e8u: goto label_4e66e8;
        case 0x4e66ecu: goto label_4e66ec;
        case 0x4e66f0u: goto label_4e66f0;
        case 0x4e66f4u: goto label_4e66f4;
        case 0x4e66f8u: goto label_4e66f8;
        case 0x4e66fcu: goto label_4e66fc;
        case 0x4e6700u: goto label_4e6700;
        case 0x4e6704u: goto label_4e6704;
        case 0x4e6708u: goto label_4e6708;
        case 0x4e670cu: goto label_4e670c;
        case 0x4e6710u: goto label_4e6710;
        case 0x4e6714u: goto label_4e6714;
        default: break;
    }

    ctx->pc = 0x4e6698u;

label_4e6698:
    // 0x4e6698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4e6698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4e669c:
    // 0x4e669c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4e669cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4e66a0:
    // 0x4e66a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e66a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e66a4:
    // 0x4e66a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e66a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e66a8:
    // 0x4e66a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4e66a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4e66ac:
    // 0x4e66ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4e66acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4e66b0:
    // 0x4e66b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4e66b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4e66b4:
    // 0x4e66b4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4e66b8:
    if (ctx->pc == 0x4E66B8u) {
        ctx->pc = 0x4E66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66B4u;
        // 0x4e66b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E66BCu;
        goto label_4e66bc;
    }
    ctx->pc = 0x4E66B4u;
    {
        const bool branch_taken_0x4e66b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E66B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66B4u;
        // 0x4e66b8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e66b4) {
            ctx->pc = 0x4E66FCu;
            goto label_4e66fc;
        }
    }
    ctx->pc = 0x4E66BCu;
label_4e66bc:
    // 0x4e66bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4e66bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4e66c0:
    // 0x4e66c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4e66c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e66c4:
    // 0x4e66c4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x4e66c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_4e66c8:
    // 0x4e66c8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x4e66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_4e66cc:
    // 0x4e66cc: 0x60f809  jalr        $v1
label_4e66d0:
    if (ctx->pc == 0x4E66D0u) {
        ctx->pc = 0x4E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66CCu;
        // 0x4e66d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E66D4u;
        goto label_4e66d4;
    }
    ctx->pc = 0x4E66CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E66D4u);
        ctx->pc = 0x4E66D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66CCu;
        // 0x4e66d0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E66CCu, 0x4E66D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E66D4u;
label_4e66d4:
    // 0x4e66d4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4e66d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4e66d8:
    // 0x4e66d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4e66d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e66dc:
    // 0x4e66dc: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4e66dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4e66e0:
    // 0x4e66e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4e66e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e66e4:
    // 0x4e66e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4e66e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4e66e8:
    // 0x4e66e8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4e66e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4e66ec:
    // 0x4e66ec: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4e66ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4e66f0:
    // 0x4e66f0: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4e66f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4e66f4:
    // 0x4e66f4: 0x60f809  jalr        $v1
label_4e66f8:
    if (ctx->pc == 0x4E66F8u) {
        ctx->pc = 0x4E66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66F4u;
        // 0x4e66f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E66FCu;
        goto label_4e66fc;
    }
    ctx->pc = 0x4E66F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4E66FCu);
        ctx->pc = 0x4E66F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E66F4u;
        // 0x4e66f8: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E66F4u, 0x4E66FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4E66FCu;
label_4e66fc:
    // 0x4e66fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4e66fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e6700:
    // 0x4e6700: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e6700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e6704:
    // 0x4e6704: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4e6704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e6708:
    // 0x4e6708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4e6708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4e670c:
    // 0x4e670c: 0x3e00008  jr          $ra
label_4e6710:
    if (ctx->pc == 0x4E6710u) {
        ctx->pc = 0x4E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E670Cu;
        // 0x4e6710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4E6714u;
        goto label_4e6714;
    }
    ctx->pc = 0x4E670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E6710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4E670Cu;
        // 0x4e6710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4E670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4E6714u;
label_4e6714:
    // 0x4e6714: 0x0  nop
    ctx->pc = 0x4e6714u;
    // NOP
    ctx->pc = 0x4e6718u;
}
