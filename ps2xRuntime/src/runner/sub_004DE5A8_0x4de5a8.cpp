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

// Function: sub_004DE5A8
// Address: 0x4de5a8 - 0x4de628
void sub_004DE5A8_0x4de5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DE5A8_0x4de5a8");
#endif

    switch (ctx->pc) {
        case 0x4de5a8u: goto label_4de5a8;
        case 0x4de5acu: goto label_4de5ac;
        case 0x4de5b0u: goto label_4de5b0;
        case 0x4de5b4u: goto label_4de5b4;
        case 0x4de5b8u: goto label_4de5b8;
        case 0x4de5bcu: goto label_4de5bc;
        case 0x4de5c0u: goto label_4de5c0;
        case 0x4de5c4u: goto label_4de5c4;
        case 0x4de5c8u: goto label_4de5c8;
        case 0x4de5ccu: goto label_4de5cc;
        case 0x4de5d0u: goto label_4de5d0;
        case 0x4de5d4u: goto label_4de5d4;
        case 0x4de5d8u: goto label_4de5d8;
        case 0x4de5dcu: goto label_4de5dc;
        case 0x4de5e0u: goto label_4de5e0;
        case 0x4de5e4u: goto label_4de5e4;
        case 0x4de5e8u: goto label_4de5e8;
        case 0x4de5ecu: goto label_4de5ec;
        case 0x4de5f0u: goto label_4de5f0;
        case 0x4de5f4u: goto label_4de5f4;
        case 0x4de5f8u: goto label_4de5f8;
        case 0x4de5fcu: goto label_4de5fc;
        case 0x4de600u: goto label_4de600;
        case 0x4de604u: goto label_4de604;
        case 0x4de608u: goto label_4de608;
        case 0x4de60cu: goto label_4de60c;
        case 0x4de610u: goto label_4de610;
        case 0x4de614u: goto label_4de614;
        case 0x4de618u: goto label_4de618;
        case 0x4de61cu: goto label_4de61c;
        case 0x4de620u: goto label_4de620;
        case 0x4de624u: goto label_4de624;
        default: break;
    }

    ctx->pc = 0x4de5a8u;

label_4de5a8:
    // 0x4de5a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4de5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4de5ac:
    // 0x4de5ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4de5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4de5b0:
    // 0x4de5b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4de5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4de5b4:
    // 0x4de5b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4de5b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4de5b8:
    // 0x4de5b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4de5b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4de5bc:
    // 0x4de5bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4de5bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4de5c0:
    // 0x4de5c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4de5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4de5c4:
    // 0x4de5c4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_4de5c8:
    if (ctx->pc == 0x4DE5C8u) {
        ctx->pc = 0x4DE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE5C4u;
        // 0x4de5c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE5CCu;
        goto label_4de5cc;
    }
    ctx->pc = 0x4DE5C4u;
    {
        const bool branch_taken_0x4de5c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DE5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE5C4u;
        // 0x4de5c8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4de5c4) {
            ctx->pc = 0x4DE60Cu;
            goto label_4de60c;
        }
    }
    ctx->pc = 0x4DE5CCu;
label_4de5cc:
    // 0x4de5cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4de5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4de5d0:
    // 0x4de5d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4de5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4de5d4:
    // 0x4de5d4: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x4de5d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_4de5d8:
    // 0x4de5d8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x4de5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_4de5dc:
    // 0x4de5dc: 0x60f809  jalr        $v1
label_4de5e0:
    if (ctx->pc == 0x4DE5E0u) {
        ctx->pc = 0x4DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE5DCu;
        // 0x4de5e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE5E4u;
        goto label_4de5e4;
    }
    ctx->pc = 0x4DE5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE5E4u);
        ctx->pc = 0x4DE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE5DCu;
        // 0x4de5e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE5DCu, 0x4DE5E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE5E4u;
label_4de5e4:
    // 0x4de5e4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4de5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4de5e8:
    // 0x4de5e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4de5e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4de5ec:
    // 0x4de5ec: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4de5ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4de5f0:
    // 0x4de5f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4de5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4de5f4:
    // 0x4de5f4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4de5f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4de5f8:
    // 0x4de5f8: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4de5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4de5fc:
    // 0x4de5fc: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4de5fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4de600:
    // 0x4de600: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4de600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4de604:
    // 0x4de604: 0x60f809  jalr        $v1
label_4de608:
    if (ctx->pc == 0x4DE608u) {
        ctx->pc = 0x4DE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE604u;
        // 0x4de608: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE60Cu;
        goto label_4de60c;
    }
    ctx->pc = 0x4DE604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4DE60Cu);
        ctx->pc = 0x4DE608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE604u;
        // 0x4de608: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE604u, 0x4DE60Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DE60Cu;
label_4de60c:
    // 0x4de60c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4de60cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4de610:
    // 0x4de610: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4de610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4de614:
    // 0x4de614: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4de614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4de618:
    // 0x4de618: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4de618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4de61c:
    // 0x4de61c: 0x3e00008  jr          $ra
label_4de620:
    if (ctx->pc == 0x4DE620u) {
        ctx->pc = 0x4DE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE61Cu;
        // 0x4de620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DE624u;
        goto label_4de624;
    }
    ctx->pc = 0x4DE61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DE620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DE61Cu;
        // 0x4de620: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DE61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DE624u;
label_4de624:
    // 0x4de624: 0x0  nop
    ctx->pc = 0x4de624u;
    // NOP
    ctx->pc = 0x4de628u;
}
