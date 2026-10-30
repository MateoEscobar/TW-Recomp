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

// Function: sub_0042FC20
// Address: 0x42fc20 - 0x42fcd0
void sub_0042FC20_0x42fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042FC20_0x42fc20");
#endif

    switch (ctx->pc) {
        case 0x42fc20u: goto label_42fc20;
        case 0x42fc24u: goto label_42fc24;
        case 0x42fc28u: goto label_42fc28;
        case 0x42fc2cu: goto label_42fc2c;
        case 0x42fc30u: goto label_42fc30;
        case 0x42fc34u: goto label_42fc34;
        case 0x42fc38u: goto label_42fc38;
        case 0x42fc3cu: goto label_42fc3c;
        case 0x42fc40u: goto label_42fc40;
        case 0x42fc44u: goto label_42fc44;
        case 0x42fc48u: goto label_42fc48;
        case 0x42fc4cu: goto label_42fc4c;
        case 0x42fc50u: goto label_42fc50;
        case 0x42fc54u: goto label_42fc54;
        case 0x42fc58u: goto label_42fc58;
        case 0x42fc5cu: goto label_42fc5c;
        case 0x42fc60u: goto label_42fc60;
        case 0x42fc64u: goto label_42fc64;
        case 0x42fc68u: goto label_42fc68;
        case 0x42fc6cu: goto label_42fc6c;
        case 0x42fc70u: goto label_42fc70;
        case 0x42fc74u: goto label_42fc74;
        case 0x42fc78u: goto label_42fc78;
        case 0x42fc7cu: goto label_42fc7c;
        case 0x42fc80u: goto label_42fc80;
        case 0x42fc84u: goto label_42fc84;
        case 0x42fc88u: goto label_42fc88;
        case 0x42fc8cu: goto label_42fc8c;
        case 0x42fc90u: goto label_42fc90;
        case 0x42fc94u: goto label_42fc94;
        case 0x42fc98u: goto label_42fc98;
        case 0x42fc9cu: goto label_42fc9c;
        case 0x42fca0u: goto label_42fca0;
        case 0x42fca4u: goto label_42fca4;
        case 0x42fca8u: goto label_42fca8;
        case 0x42fcacu: goto label_42fcac;
        case 0x42fcb0u: goto label_42fcb0;
        case 0x42fcb4u: goto label_42fcb4;
        case 0x42fcb8u: goto label_42fcb8;
        case 0x42fcbcu: goto label_42fcbc;
        case 0x42fcc0u: goto label_42fcc0;
        case 0x42fcc4u: goto label_42fcc4;
        case 0x42fcc8u: goto label_42fcc8;
        case 0x42fcccu: goto label_42fccc;
        default: break;
    }

    ctx->pc = 0x42fc20u;

label_42fc20:
    // 0x42fc20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x42fc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_42fc24:
    // 0x42fc24: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x42fc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_42fc28:
    // 0x42fc28: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x42fc28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_42fc2c:
    // 0x42fc2c: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x42fc2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_42fc30:
    // 0x42fc30: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x42fc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_42fc34:
    // 0x42fc34: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x42fc34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_42fc38:
    // 0x42fc38: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x42fc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_42fc3c:
    // 0x42fc3c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x42fc3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_42fc40:
    // 0x42fc40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x42fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_42fc44:
    // 0x42fc44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x42fc44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_42fc48:
    // 0x42fc48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x42fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_42fc4c:
    // 0x42fc4c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x42fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_42fc50:
    // 0x42fc50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x42fc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_42fc54:
    // 0x42fc54: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x42fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_42fc58:
    // 0x42fc58: 0x80f809  jalr        $a0
label_42fc5c:
    if (ctx->pc == 0x42FC5Cu) {
        ctx->pc = 0x42FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC58u;
        // 0x42fc5c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FC60u;
        goto label_42fc60;
    }
    ctx->pc = 0x42FC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        SET_GPR_U32(ctx, 31, 0x42FC60u);
        ctx->pc = 0x42FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC58u;
        // 0x42fc5c: 0x100982d  daddu       $s3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FC58u, 0x42FC60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42FC60u;
label_42fc60:
    // 0x42fc60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42fc60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42fc64:
    // 0x42fc64: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x42fc64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_42fc68:
    // 0x42fc68: 0x86020010  lh          $v0, 0x10($s0)
    ctx->pc = 0x42fc68u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
label_42fc6c:
    // 0x42fc6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x42fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_42fc70:
    // 0x42fc70: 0x280f809  jalr        $s4
label_42fc74:
    if (ctx->pc == 0x42FC74u) {
        ctx->pc = 0x42FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC70u;
        // 0x42fc74: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FC78u;
        goto label_42fc78;
    }
    ctx->pc = 0x42FC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x42FC78u);
        ctx->pc = 0x42FC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC70u;
        // 0x42fc74: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FC70u, 0x42FC78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42FC78u;
label_42fc78:
    // 0x42fc78: 0x260f809  jalr        $s3
label_42fc7c:
    if (ctx->pc == 0x42FC7Cu) {
        ctx->pc = 0x42FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC78u;
        // 0x42fc7c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FC80u;
        goto label_42fc80;
    }
    ctx->pc = 0x42FC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x42FC80u);
        ctx->pc = 0x42FC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC78u;
        // 0x42fc7c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FC78u, 0x42FC80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42FC80u;
label_42fc80:
    // 0x42fc80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x42fc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_42fc84:
    // 0x42fc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x42fc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_42fc88:
    // 0x42fc88: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x42fc88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_42fc8c:
    // 0x42fc8c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x42fc8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42fc90:
    // 0x42fc90: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x42fc90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_42fc94:
    // 0x42fc94: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x42fc94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42fc98:
    // 0x42fc98: 0x60f809  jalr        $v1
label_42fc9c:
    if (ctx->pc == 0x42FC9Cu) {
        ctx->pc = 0x42FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC98u;
        // 0x42fc9c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FCA0u;
        goto label_42fca0;
    }
    ctx->pc = 0x42FC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x42FCA0u);
        ctx->pc = 0x42FC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FC98u;
        // 0x42fc9c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FC98u, 0x42FCA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x42FCA0u;
label_42fca0:
    // 0x42fca0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x42fca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_42fca4:
    // 0x42fca4: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x42fca4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42fca8:
    // 0x42fca8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x42fca8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_42fcac:
    // 0x42fcac: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x42fcacu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_42fcb0:
    // 0x42fcb0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x42fcb0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_42fcb4:
    // 0x42fcb4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x42fcb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_42fcb8:
    // 0x42fcb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x42fcb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42fcbc:
    // 0x42fcbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x42fcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42fcc0:
    // 0x42fcc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x42fcc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_42fcc4:
    // 0x42fcc4: 0x3e00008  jr          $ra
label_42fcc8:
    if (ctx->pc == 0x42FCC8u) {
        ctx->pc = 0x42FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FCC4u;
        // 0x42fcc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x42FCCCu;
        goto label_42fccc;
    }
    ctx->pc = 0x42FCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42FCC4u;
        // 0x42fcc8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42FCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42FCCCu;
label_42fccc:
    // 0x42fccc: 0x0  nop
    ctx->pc = 0x42fcccu;
    // NOP
    ctx->pc = 0x42fcd0u;
}
