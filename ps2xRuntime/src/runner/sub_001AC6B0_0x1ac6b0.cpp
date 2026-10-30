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

// Function: sub_001AC6B0
// Address: 0x1ac6b0 - 0x1ac740
void sub_001AC6B0_0x1ac6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AC6B0_0x1ac6b0");
#endif

    switch (ctx->pc) {
        case 0x1ac6b0u: goto label_1ac6b0;
        case 0x1ac6b4u: goto label_1ac6b4;
        case 0x1ac6b8u: goto label_1ac6b8;
        case 0x1ac6bcu: goto label_1ac6bc;
        case 0x1ac6c0u: goto label_1ac6c0;
        case 0x1ac6c4u: goto label_1ac6c4;
        case 0x1ac6c8u: goto label_1ac6c8;
        case 0x1ac6ccu: goto label_1ac6cc;
        case 0x1ac6d0u: goto label_1ac6d0;
        case 0x1ac6d4u: goto label_1ac6d4;
        case 0x1ac6d8u: goto label_1ac6d8;
        case 0x1ac6dcu: goto label_1ac6dc;
        case 0x1ac6e0u: goto label_1ac6e0;
        case 0x1ac6e4u: goto label_1ac6e4;
        case 0x1ac6e8u: goto label_1ac6e8;
        case 0x1ac6ecu: goto label_1ac6ec;
        case 0x1ac6f0u: goto label_1ac6f0;
        case 0x1ac6f4u: goto label_1ac6f4;
        case 0x1ac6f8u: goto label_1ac6f8;
        case 0x1ac6fcu: goto label_1ac6fc;
        case 0x1ac700u: goto label_1ac700;
        case 0x1ac704u: goto label_1ac704;
        case 0x1ac708u: goto label_1ac708;
        case 0x1ac70cu: goto label_1ac70c;
        case 0x1ac710u: goto label_1ac710;
        case 0x1ac714u: goto label_1ac714;
        case 0x1ac718u: goto label_1ac718;
        case 0x1ac71cu: goto label_1ac71c;
        case 0x1ac720u: goto label_1ac720;
        case 0x1ac724u: goto label_1ac724;
        case 0x1ac728u: goto label_1ac728;
        case 0x1ac72cu: goto label_1ac72c;
        case 0x1ac730u: goto label_1ac730;
        case 0x1ac734u: goto label_1ac734;
        case 0x1ac738u: goto label_1ac738;
        case 0x1ac73cu: goto label_1ac73c;
        default: break;
    }

    ctx->pc = 0x1ac6b0u;

label_1ac6b0:
    // 0x1ac6b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ac6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ac6b4:
    // 0x1ac6b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ac6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1ac6b8:
    // 0x1ac6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ac6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ac6bc:
    // 0x1ac6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ac6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ac6c0:
    // 0x1ac6c0: 0xc051800  jal         func_146000
label_1ac6c4:
    if (ctx->pc == 0x1AC6C4u) {
        ctx->pc = 0x1AC6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6C0u;
        // 0x1ac6c4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6C8u;
        goto label_1ac6c8;
    }
    ctx->pc = 0x1AC6C0u;
    SET_GPR_U32(ctx, 31, 0x1AC6C8u);
    ctx->pc = 0x1AC6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AC6C0u;
    // 0x1ac6c4: 0x8e040060  lw          $a0, 0x60($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x146000u, 0x1AC6C0u, 0x1AC6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AC6C8u;
label_1ac6c8:
    // 0x1ac6c8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1ac6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_1ac6cc:
    // 0x1ac6cc: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x1ac6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1ac6d0:
    // 0x1ac6d0: 0x8e0500c0  lw          $a1, 0xC0($s0)
    ctx->pc = 0x1ac6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_1ac6d4:
    // 0x1ac6d4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1ac6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1ac6d8:
    // 0x1ac6d8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1ac6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ac6dc:
    // 0x1ac6dc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1ac6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1ac6e0:
    // 0x1ac6e0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1ac6e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1ac6e4:
    // 0x1ac6e4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ac6e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1ac6e8:
    // 0x1ac6e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1ac6ec:
    if (ctx->pc == 0x1AC6ECu) {
        ctx->pc = 0x1AC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6E8u;
        // 0x1ac6ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC6F0u;
        goto label_1ac6f0;
    }
    ctx->pc = 0x1AC6E8u;
    {
        const bool branch_taken_0x1ac6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AC6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC6E8u;
        // 0x1ac6ec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ac6e8) {
            ctx->pc = 0x1AC70Cu;
            goto label_1ac70c;
        }
    }
    ctx->pc = 0x1AC6F0u;
label_1ac6f0:
    // 0x1ac6f0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ac6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ac6f4:
    // 0x1ac6f4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ac6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1ac6f8:
    // 0x1ac6f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac6fc:
    // 0x1ac6fc: 0x84640098  lh          $a0, 0x98($v1)
    ctx->pc = 0x1ac6fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 152)));
label_1ac700:
    // 0x1ac700: 0x8c62009c  lw          $v0, 0x9C($v1)
    ctx->pc = 0x1ac700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
label_1ac704:
    // 0x1ac704: 0x40f809  jalr        $v0
label_1ac708:
    if (ctx->pc == 0x1AC708u) {
        ctx->pc = 0x1AC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC704u;
        // 0x1ac708: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC70Cu;
        goto label_1ac70c;
    }
    ctx->pc = 0x1AC704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC70Cu);
        ctx->pc = 0x1AC708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC704u;
        // 0x1ac708: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC704u, 0x1AC70Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC70Cu;
label_1ac70c:
    // 0x1ac70c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1ac70cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1ac710:
    // 0x1ac710: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1ac710u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1ac714:
    // 0x1ac714: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1ac714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ac718:
    // 0x1ac718: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1ac718u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1ac71c:
    // 0x1ac71c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1ac71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1ac720:
    // 0x1ac720: 0x40f809  jalr        $v0
label_1ac724:
    if (ctx->pc == 0x1AC724u) {
        ctx->pc = 0x1AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC720u;
        // 0x1ac724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC728u;
        goto label_1ac728;
    }
    ctx->pc = 0x1AC720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AC728u);
        ctx->pc = 0x1AC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC720u;
        // 0x1ac724: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC720u, 0x1AC728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AC728u;
label_1ac728:
    // 0x1ac728: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1ac728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1ac72c:
    // 0x1ac72c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ac72cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ac730:
    // 0x1ac730: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ac730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ac734:
    // 0x1ac734: 0x3e00008  jr          $ra
label_1ac738:
    if (ctx->pc == 0x1AC738u) {
        ctx->pc = 0x1AC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC734u;
        // 0x1ac738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AC73Cu;
        goto label_1ac73c;
    }
    ctx->pc = 0x1AC734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AC738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AC734u;
        // 0x1ac738: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AC734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AC73Cu;
label_1ac73c:
    // 0x1ac73c: 0x0  nop
    ctx->pc = 0x1ac73cu;
    // NOP
    ctx->pc = 0x1ac740u;
}
