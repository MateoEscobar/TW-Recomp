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

// Function: sub_00121E30
// Address: 0x121e30 - 0x121f50
void sub_00121E30_0x121e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121E30_0x121e30");
#endif

    switch (ctx->pc) {
        case 0x121e30u: goto label_121e30;
        case 0x121e34u: goto label_121e34;
        case 0x121e38u: goto label_121e38;
        case 0x121e3cu: goto label_121e3c;
        case 0x121e40u: goto label_121e40;
        case 0x121e44u: goto label_121e44;
        case 0x121e48u: goto label_121e48;
        case 0x121e4cu: goto label_121e4c;
        case 0x121e50u: goto label_121e50;
        case 0x121e54u: goto label_121e54;
        case 0x121e58u: goto label_121e58;
        case 0x121e5cu: goto label_121e5c;
        case 0x121e60u: goto label_121e60;
        case 0x121e64u: goto label_121e64;
        case 0x121e68u: goto label_121e68;
        case 0x121e6cu: goto label_121e6c;
        case 0x121e70u: goto label_121e70;
        case 0x121e74u: goto label_121e74;
        case 0x121e78u: goto label_121e78;
        case 0x121e7cu: goto label_121e7c;
        case 0x121e80u: goto label_121e80;
        case 0x121e84u: goto label_121e84;
        case 0x121e88u: goto label_121e88;
        case 0x121e8cu: goto label_121e8c;
        case 0x121e90u: goto label_121e90;
        case 0x121e94u: goto label_121e94;
        case 0x121e98u: goto label_121e98;
        case 0x121e9cu: goto label_121e9c;
        case 0x121ea0u: goto label_121ea0;
        case 0x121ea4u: goto label_121ea4;
        case 0x121ea8u: goto label_121ea8;
        case 0x121eacu: goto label_121eac;
        case 0x121eb0u: goto label_121eb0;
        case 0x121eb4u: goto label_121eb4;
        case 0x121eb8u: goto label_121eb8;
        case 0x121ebcu: goto label_121ebc;
        case 0x121ec0u: goto label_121ec0;
        case 0x121ec4u: goto label_121ec4;
        case 0x121ec8u: goto label_121ec8;
        case 0x121eccu: goto label_121ecc;
        case 0x121ed0u: goto label_121ed0;
        case 0x121ed4u: goto label_121ed4;
        case 0x121ed8u: goto label_121ed8;
        case 0x121edcu: goto label_121edc;
        case 0x121ee0u: goto label_121ee0;
        case 0x121ee4u: goto label_121ee4;
        case 0x121ee8u: goto label_121ee8;
        case 0x121eecu: goto label_121eec;
        case 0x121ef0u: goto label_121ef0;
        case 0x121ef4u: goto label_121ef4;
        case 0x121ef8u: goto label_121ef8;
        case 0x121efcu: goto label_121efc;
        case 0x121f00u: goto label_121f00;
        case 0x121f04u: goto label_121f04;
        case 0x121f08u: goto label_121f08;
        case 0x121f0cu: goto label_121f0c;
        case 0x121f10u: goto label_121f10;
        case 0x121f14u: goto label_121f14;
        case 0x121f18u: goto label_121f18;
        case 0x121f1cu: goto label_121f1c;
        case 0x121f20u: goto label_121f20;
        case 0x121f24u: goto label_121f24;
        case 0x121f28u: goto label_121f28;
        case 0x121f2cu: goto label_121f2c;
        case 0x121f30u: goto label_121f30;
        case 0x121f34u: goto label_121f34;
        case 0x121f38u: goto label_121f38;
        case 0x121f3cu: goto label_121f3c;
        case 0x121f40u: goto label_121f40;
        case 0x121f44u: goto label_121f44;
        case 0x121f48u: goto label_121f48;
        case 0x121f4cu: goto label_121f4c;
        default: break;
    }

    ctx->pc = 0x121e30u;

label_121e30:
    // 0x121e30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x121e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_121e34:
    // 0x121e34: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x121e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_121e38:
    // 0x121e38: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x121e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_121e3c:
    // 0x121e3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x121e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_121e40:
    // 0x121e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_121e44:
    // 0x121e44: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x121e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_121e48:
    // 0x121e48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x121e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_121e4c:
    // 0x121e4c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x121e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121e50:
    // 0x121e50: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x121e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_121e54:
    // 0x121e54: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x121e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_121e58:
    // 0x121e58: 0x40f809  jalr        $v0
label_121e5c:
    if (ctx->pc == 0x121E5Cu) {
        ctx->pc = 0x121E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E58u;
        // 0x121e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E60u;
        goto label_121e60;
    }
    ctx->pc = 0x121E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121E60u);
        ctx->pc = 0x121E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E58u;
        // 0x121e5c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E58u, 0x121E60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E60u;
label_121e60:
    // 0x121e60: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x121e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121e64:
    // 0x121e64: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x121e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_121e68:
    // 0x121e68: 0x2470b1e8  addiu       $s0, $v1, -0x4E18
    ctx->pc = 0x121e68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947304));
label_121e6c:
    // 0x121e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x121e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_121e70:
    // 0x121e70: 0x84a401e8  lh          $a0, 0x1E8($a1)
    ctx->pc = 0x121e70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 488)));
label_121e74:
    // 0x121e74: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x121e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_121e78:
    // 0x121e78: 0x8ca301ec  lw          $v1, 0x1EC($a1)
    ctx->pc = 0x121e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 492)));
label_121e7c:
    // 0x121e7c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x121e7cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_121e80:
    // 0x121e80: 0x60f809  jalr        $v1
label_121e84:
    if (ctx->pc == 0x121E84u) {
        ctx->pc = 0x121E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E80u;
        // 0x121e84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E88u;
        goto label_121e88;
    }
    ctx->pc = 0x121E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x121E88u);
        ctx->pc = 0x121E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E80u;
        // 0x121e84: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121E80u, 0x121E88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121E88u;
label_121e88:
    // 0x121e88: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x121e88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121e8c:
    // 0x121e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121e90:
    // 0x121e90: 0x56620015  bnel        $s3, $v0, . + 4 + (0x15 << 2)
label_121e94:
    if (ctx->pc == 0x121E94u) {
        ctx->pc = 0x121E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E90u;
        // 0x121e94: 0x922201d6  lbu         $v0, 0x1D6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 470)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121E98u;
        goto label_121e98;
    }
    ctx->pc = 0x121E90u;
    {
        const bool branch_taken_0x121e90 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x121e90) {
            ctx->pc = 0x121E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121E90u;
            // 0x121e94: 0x922201d6  lbu         $v0, 0x1D6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 470)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EE8u;
            goto label_121ee8;
        }
    }
    ctx->pc = 0x121E98u;
label_121e98:
    // 0x121e98: 0xc047e72  jal         func_11F9C8
label_121e9c:
    if (ctx->pc == 0x121E9Cu) {
        ctx->pc = 0x121E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121E98u;
        // 0x121e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EA0u;
        goto label_121ea0;
    }
    ctx->pc = 0x121E98u;
    SET_GPR_U32(ctx, 31, 0x121EA0u);
    ctx->pc = 0x121E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121E98u;
    // 0x121e9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121E98u, 0x121EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EA0u;
label_121ea0:
    // 0x121ea0: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x121ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
label_121ea4:
    // 0x121ea4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x121ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_121ea8:
    // 0x121ea8: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x121ea8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_121eac:
    // 0x121eac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x121eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_121eb0:
    // 0x121eb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x121eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_121eb4:
    // 0x121eb4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x121eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_121eb8:
    // 0x121eb8: 0xc047e72  jal         func_11F9C8
label_121ebc:
    if (ctx->pc == 0x121EBCu) {
        ctx->pc = 0x121EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EB8u;
        // 0x121ebc: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EC0u;
        goto label_121ec0;
    }
    ctx->pc = 0x121EB8u;
    SET_GPR_U32(ctx, 31, 0x121EC0u);
    ctx->pc = 0x121EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EB8u;
    // 0x121ebc: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121EB8u, 0x121EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EC0u;
label_121ec0:
    // 0x121ec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x121ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_121ec4:
    // 0x121ec4: 0xc047e72  jal         func_11F9C8
label_121ec8:
    if (ctx->pc == 0x121EC8u) {
        ctx->pc = 0x121EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EC4u;
        // 0x121ec8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ECCu;
        goto label_121ecc;
    }
    ctx->pc = 0x121EC4u;
    SET_GPR_U32(ctx, 31, 0x121ECCu);
    ctx->pc = 0x121EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121EC4u;
    // 0x121ec8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121EC4u, 0x121ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121ECCu;
label_121ecc:
    // 0x121ecc: 0x56020006  bnel        $s0, $v0, . + 4 + (0x6 << 2)
label_121ed0:
    if (ctx->pc == 0x121ED0u) {
        ctx->pc = 0x121ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ECCu;
        // 0x121ed0: 0x922201d6  lbu         $v0, 0x1D6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 470)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121ED4u;
        goto label_121ed4;
    }
    ctx->pc = 0x121ECCu;
    {
        const bool branch_taken_0x121ecc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x121ecc) {
            ctx->pc = 0x121ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121ECCu;
            // 0x121ed0: 0x922201d6  lbu         $v0, 0x1D6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 470)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121EE8u;
            goto label_121ee8;
        }
    }
    ctx->pc = 0x121ED4u;
label_121ed4:
    // 0x121ed4: 0xc047e72  jal         func_11F9C8
label_121ed8:
    if (ctx->pc == 0x121ED8u) {
        ctx->pc = 0x121ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121ED4u;
        // 0x121ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EDCu;
        goto label_121edc;
    }
    ctx->pc = 0x121ED4u;
    SET_GPR_U32(ctx, 31, 0x121EDCu);
    ctx->pc = 0x121ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121ED4u;
    // 0x121ed8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9C8u, 0x121ED4u, 0x121EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121EDCu;
label_121edc:
    // 0x121edc: 0x511026  xor         $v0, $v0, $s1
    ctx->pc = 0x121edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
label_121ee0:
    // 0x121ee0: 0x262900a  movz        $s2, $s3, $v0
    ctx->pc = 0x121ee0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 19));
label_121ee4:
    // 0x121ee4: 0x922201d6  lbu         $v0, 0x1D6($s1)
    ctx->pc = 0x121ee4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 470)));
label_121ee8:
    // 0x121ee8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_121eec:
    if (ctx->pc == 0x121EECu) {
        ctx->pc = 0x121EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EE8u;
        // 0x121eec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EF0u;
        goto label_121ef0;
    }
    ctx->pc = 0x121EE8u;
    {
        const bool branch_taken_0x121ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EE8u;
        // 0x121eec: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ee8) {
            ctx->pc = 0x121F2Cu;
            goto label_121f2c;
        }
    }
    ctx->pc = 0x121EF0u;
label_121ef0:
    // 0x121ef0: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
label_121ef4:
    if (ctx->pc == 0x121EF4u) {
        ctx->pc = 0x121EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EF0u;
        // 0x121ef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121EF8u;
        goto label_121ef8;
    }
    ctx->pc = 0x121EF0u;
    {
        const bool branch_taken_0x121ef0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x121EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121EF0u;
        // 0x121ef4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121ef0) {
            ctx->pc = 0x121F2Cu;
            goto label_121f2c;
        }
    }
    ctx->pc = 0x121EF8u;
label_121ef8:
    // 0x121ef8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x121ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_121efc:
    // 0x121efc: 0x84640278  lh          $a0, 0x278($v1)
    ctx->pc = 0x121efcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 632)));
label_121f00:
    // 0x121f00: 0x8c62027c  lw          $v0, 0x27C($v1)
    ctx->pc = 0x121f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 636)));
label_121f04:
    // 0x121f04: 0x40f809  jalr        $v0
label_121f08:
    if (ctx->pc == 0x121F08u) {
        ctx->pc = 0x121F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F04u;
        // 0x121f08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F0Cu;
        goto label_121f0c;
    }
    ctx->pc = 0x121F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x121F0Cu);
        ctx->pc = 0x121F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F04u;
        // 0x121f08: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F04u, 0x121F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x121F0Cu;
label_121f0c:
    // 0x121f0c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_121f10:
    if (ctx->pc == 0x121F10u) {
        ctx->pc = 0x121F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F0Cu;
        // 0x121f10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F14u;
        goto label_121f14;
    }
    ctx->pc = 0x121F0Cu;
    {
        const bool branch_taken_0x121f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x121f0c) {
            ctx->pc = 0x121F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x121F0Cu;
            // 0x121f10: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x121F28u;
            goto label_121f28;
        }
    }
    ctx->pc = 0x121F14u;
label_121f14:
    // 0x121f14: 0xc136cb6  jal         func_4DB2D8
label_121f18:
    if (ctx->pc == 0x121F18u) {
        ctx->pc = 0x121F1Cu;
        goto label_121f1c;
    }
    ctx->pc = 0x121F14u;
    SET_GPR_U32(ctx, 31, 0x121F1Cu);
    ctx->pc = 0x4DB2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DB2D8u, 0x121F14u, 0x121F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121F1Cu;
label_121f1c:
    // 0x121f1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_121f20:
    if (ctx->pc == 0x121F20u) {
        ctx->pc = 0x121F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F1Cu;
        // 0x121f20: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F24u;
        goto label_121f24;
    }
    ctx->pc = 0x121F1Cu;
    {
        const bool branch_taken_0x121f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F1Cu;
        // 0x121f20: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121f1c) {
            ctx->pc = 0x121F2Cu;
            goto label_121f2c;
        }
    }
    ctx->pc = 0x121F24u;
label_121f24:
    // 0x121f24: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x121f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121f28:
    // 0x121f28: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x121f28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_121f2c:
    // 0x121f2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x121f2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_121f30:
    // 0x121f30: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x121f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_121f34:
    // 0x121f34: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x121f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_121f38:
    // 0x121f38: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x121f38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_121f3c:
    // 0x121f3c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x121f3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_121f40:
    // 0x121f40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x121f40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121f44:
    // 0x121f44: 0x3e00008  jr          $ra
label_121f48:
    if (ctx->pc == 0x121F48u) {
        ctx->pc = 0x121F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F44u;
        // 0x121f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x121F4Cu;
        goto label_121f4c;
    }
    ctx->pc = 0x121F44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121F44u;
        // 0x121f48: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121F44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121F4Cu;
label_121f4c:
    // 0x121f4c: 0x0  nop
    ctx->pc = 0x121f4cu;
    // NOP
    ctx->pc = 0x121f50u;
}
