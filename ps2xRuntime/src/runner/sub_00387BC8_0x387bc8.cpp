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

// Function: sub_00387BC8
// Address: 0x387bc8 - 0x387d50
void sub_00387BC8_0x387bc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387BC8_0x387bc8");
#endif

    switch (ctx->pc) {
        case 0x387bc8u: goto label_387bc8;
        case 0x387bccu: goto label_387bcc;
        case 0x387bd0u: goto label_387bd0;
        case 0x387bd4u: goto label_387bd4;
        case 0x387bd8u: goto label_387bd8;
        case 0x387bdcu: goto label_387bdc;
        case 0x387be0u: goto label_387be0;
        case 0x387be4u: goto label_387be4;
        case 0x387be8u: goto label_387be8;
        case 0x387becu: goto label_387bec;
        case 0x387bf0u: goto label_387bf0;
        case 0x387bf4u: goto label_387bf4;
        case 0x387bf8u: goto label_387bf8;
        case 0x387bfcu: goto label_387bfc;
        case 0x387c00u: goto label_387c00;
        case 0x387c04u: goto label_387c04;
        case 0x387c08u: goto label_387c08;
        case 0x387c0cu: goto label_387c0c;
        case 0x387c10u: goto label_387c10;
        case 0x387c14u: goto label_387c14;
        case 0x387c18u: goto label_387c18;
        case 0x387c1cu: goto label_387c1c;
        case 0x387c20u: goto label_387c20;
        case 0x387c24u: goto label_387c24;
        case 0x387c28u: goto label_387c28;
        case 0x387c2cu: goto label_387c2c;
        case 0x387c30u: goto label_387c30;
        case 0x387c34u: goto label_387c34;
        case 0x387c38u: goto label_387c38;
        case 0x387c3cu: goto label_387c3c;
        case 0x387c40u: goto label_387c40;
        case 0x387c44u: goto label_387c44;
        case 0x387c48u: goto label_387c48;
        case 0x387c4cu: goto label_387c4c;
        case 0x387c50u: goto label_387c50;
        case 0x387c54u: goto label_387c54;
        case 0x387c58u: goto label_387c58;
        case 0x387c5cu: goto label_387c5c;
        case 0x387c60u: goto label_387c60;
        case 0x387c64u: goto label_387c64;
        case 0x387c68u: goto label_387c68;
        case 0x387c6cu: goto label_387c6c;
        case 0x387c70u: goto label_387c70;
        case 0x387c74u: goto label_387c74;
        case 0x387c78u: goto label_387c78;
        case 0x387c7cu: goto label_387c7c;
        case 0x387c80u: goto label_387c80;
        case 0x387c84u: goto label_387c84;
        case 0x387c88u: goto label_387c88;
        case 0x387c8cu: goto label_387c8c;
        case 0x387c90u: goto label_387c90;
        case 0x387c94u: goto label_387c94;
        case 0x387c98u: goto label_387c98;
        case 0x387c9cu: goto label_387c9c;
        case 0x387ca0u: goto label_387ca0;
        case 0x387ca4u: goto label_387ca4;
        case 0x387ca8u: goto label_387ca8;
        case 0x387cacu: goto label_387cac;
        case 0x387cb0u: goto label_387cb0;
        case 0x387cb4u: goto label_387cb4;
        case 0x387cb8u: goto label_387cb8;
        case 0x387cbcu: goto label_387cbc;
        case 0x387cc0u: goto label_387cc0;
        case 0x387cc4u: goto label_387cc4;
        case 0x387cc8u: goto label_387cc8;
        case 0x387cccu: goto label_387ccc;
        case 0x387cd0u: goto label_387cd0;
        case 0x387cd4u: goto label_387cd4;
        case 0x387cd8u: goto label_387cd8;
        case 0x387cdcu: goto label_387cdc;
        case 0x387ce0u: goto label_387ce0;
        case 0x387ce4u: goto label_387ce4;
        case 0x387ce8u: goto label_387ce8;
        case 0x387cecu: goto label_387cec;
        case 0x387cf0u: goto label_387cf0;
        case 0x387cf4u: goto label_387cf4;
        case 0x387cf8u: goto label_387cf8;
        case 0x387cfcu: goto label_387cfc;
        case 0x387d00u: goto label_387d00;
        case 0x387d04u: goto label_387d04;
        case 0x387d08u: goto label_387d08;
        case 0x387d0cu: goto label_387d0c;
        case 0x387d10u: goto label_387d10;
        case 0x387d14u: goto label_387d14;
        case 0x387d18u: goto label_387d18;
        case 0x387d1cu: goto label_387d1c;
        case 0x387d20u: goto label_387d20;
        case 0x387d24u: goto label_387d24;
        case 0x387d28u: goto label_387d28;
        case 0x387d2cu: goto label_387d2c;
        case 0x387d30u: goto label_387d30;
        case 0x387d34u: goto label_387d34;
        case 0x387d38u: goto label_387d38;
        case 0x387d3cu: goto label_387d3c;
        case 0x387d40u: goto label_387d40;
        case 0x387d44u: goto label_387d44;
        case 0x387d48u: goto label_387d48;
        case 0x387d4cu: goto label_387d4c;
        default: break;
    }

    ctx->pc = 0x387bc8u;

label_387bc8:
    // 0x387bc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x387bc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_387bcc:
    // 0x387bcc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x387bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_387bd0:
    // 0x387bd0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x387bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_387bd4:
    // 0x387bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387bd8:
    // 0x387bd8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x387bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_387bdc:
    // 0x387bdc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x387bdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_387be0:
    // 0x387be0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x387be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_387be4:
    // 0x387be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_387be8:
    // 0x387be8: 0xc0e8570  jal         func_3A15C0
label_387bec:
    if (ctx->pc == 0x387BECu) {
        ctx->pc = 0x387BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BE8u;
        // 0x387bec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387BF0u;
        goto label_387bf0;
    }
    ctx->pc = 0x387BE8u;
    SET_GPR_U32(ctx, 31, 0x387BF0u);
    ctx->pc = 0x387BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387BE8u;
    // 0x387bec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15C0u, 0x387BE8u, 0x387BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387BF0u;
label_387bf0:
    // 0x387bf0: 0x3c13005e  lui         $s3, 0x5E
    ctx->pc = 0x387bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)94 << 16));
label_387bf4:
    // 0x387bf4: 0x0  nop
    ctx->pc = 0x387bf4u;
    // NOP
label_387bf8:
    // 0x387bf8: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x387bf8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_387bfc:
    // 0x387bfc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_387c00:
    if (ctx->pc == 0x387C00u) {
        ctx->pc = 0x387C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BFCu;
        // 0x387c00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C04u;
        goto label_387c04;
    }
    ctx->pc = 0x387BFCu;
    {
        const bool branch_taken_0x387bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387BFCu;
        // 0x387c00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387bfc) {
            ctx->pc = 0x387C28u;
            goto label_387c28;
        }
    }
    ctx->pc = 0x387C04u;
label_387c04:
    // 0x387c04: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x387c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_387c08:
    // 0x387c08: 0x24422ba8  addiu       $v0, $v0, 0x2BA8
    ctx->pc = 0x387c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11176));
label_387c0c:
    // 0x387c0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x387c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387c10:
    // 0x387c10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x387c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_387c14:
    // 0x387c14: 0xc10d6e8  jal         func_435BA0
label_387c18:
    if (ctx->pc == 0x387C18u) {
        ctx->pc = 0x387C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C14u;
        // 0x387c18: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C1Cu;
        goto label_387c1c;
    }
    ctx->pc = 0x387C14u;
    SET_GPR_U32(ctx, 31, 0x387C1Cu);
    ctx->pc = 0x387C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C14u;
    // 0x387c18: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435BA0u, 0x387C14u, 0x387C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C1Cu;
label_387c1c:
    // 0x387c1c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_387c20:
    if (ctx->pc == 0x387C20u) {
        ctx->pc = 0x387C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C1Cu;
        // 0x387c20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C24u;
        goto label_387c24;
    }
    ctx->pc = 0x387C1Cu;
    {
        const bool branch_taken_0x387c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x387c1c) {
            ctx->pc = 0x387C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x387C1Cu;
            // 0x387c20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x387BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387bf8;
        }
    }
    ctx->pc = 0x387C24u;
label_387c24:
    // 0x387c24: 0xae3011e0  sw          $s0, 0x11E0($s1)
    ctx->pc = 0x387c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4576), GPR_U32(ctx, 16));
label_387c28:
    // 0x387c28: 0x266491e0  addiu       $a0, $s3, -0x6E20
    ctx->pc = 0x387c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294939104));
label_387c2c:
    // 0x387c2c: 0xc050fda  jal         func_143F68
label_387c30:
    if (ctx->pc == 0x387C30u) {
        ctx->pc = 0x387C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C2Cu;
        // 0x387c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C34u;
        goto label_387c34;
    }
    ctx->pc = 0x387C2Cu;
    SET_GPR_U32(ctx, 31, 0x387C34u);
    ctx->pc = 0x387C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C2Cu;
    // 0x387c30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x387C2Cu, 0x387C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C34u;
label_387c34:
    // 0x387c34: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x387c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_387c38:
    // 0x387c38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x387c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387c3c:
    // 0x387c3c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x387c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_387c40:
    // 0x387c40: 0xae201300  sw          $zero, 0x1300($s1)
    ctx->pc = 0x387c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4864), GPR_U32(ctx, 0));
label_387c44:
    // 0x387c44: 0xae20130c  sw          $zero, 0x130C($s1)
    ctx->pc = 0x387c44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4876), GPR_U32(ctx, 0));
label_387c48:
    // 0x387c48: 0xae2212f0  sw          $v0, 0x12F0($s1)
    ctx->pc = 0x387c48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4848), GPR_U32(ctx, 2));
label_387c4c:
    // 0x387c4c: 0xae2312ec  sw          $v1, 0x12EC($s1)
    ctx->pc = 0x387c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4844), GPR_U32(ctx, 3));
label_387c50:
    // 0x387c50: 0xa2241308  sb          $a0, 0x1308($s1)
    ctx->pc = 0x387c50u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4872), (uint8_t)GPR_U32(ctx, 4));
label_387c54:
    // 0x387c54: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x387c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_387c58:
    // 0x387c58: 0xc0e8568  jal         func_3A15A0
label_387c5c:
    if (ctx->pc == 0x387C5Cu) {
        ctx->pc = 0x387C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C58u;
        // 0x387c5c: 0xae2312e8  sw          $v1, 0x12E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4840), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C60u;
        goto label_387c60;
    }
    ctx->pc = 0x387C58u;
    SET_GPR_U32(ctx, 31, 0x387C60u);
    ctx->pc = 0x387C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C58u;
    // 0x387c5c: 0xae2312e8  sw          $v1, 0x12E8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4840), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A15A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A15A0u, 0x387C58u, 0x387C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C60u;
label_387c60:
    // 0x387c60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x387c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_387c64:
    // 0x387c64: 0xe6200050  swc1        $f0, 0x50($s1)
    ctx->pc = 0x387c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 80), bits); }
label_387c68:
    // 0x387c68: 0xae221304  sw          $v0, 0x1304($s1)
    ctx->pc = 0x387c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4868), GPR_U32(ctx, 2));
label_387c6c:
    // 0x387c6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387c70:
    // 0x387c70: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x387c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_387c74:
    // 0x387c74: 0x84440168  lh          $a0, 0x168($v0)
    ctx->pc = 0x387c74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 360)));
label_387c78:
    // 0x387c78: 0x8c43016c  lw          $v1, 0x16C($v0)
    ctx->pc = 0x387c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 364)));
label_387c7c:
    // 0x387c7c: 0x60f809  jalr        $v1
label_387c80:
    if (ctx->pc == 0x387C80u) {
        ctx->pc = 0x387C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C7Cu;
        // 0x387c80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C84u;
        goto label_387c84;
    }
    ctx->pc = 0x387C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x387C84u);
        ctx->pc = 0x387C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C7Cu;
        // 0x387c80: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387C7Cu, 0x387C84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387C84u;
label_387c84:
    // 0x387c84: 0xc0e1f54  jal         func_387D50
label_387c88:
    if (ctx->pc == 0x387C88u) {
        ctx->pc = 0x387C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C84u;
        // 0x387c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C8Cu;
        goto label_387c8c;
    }
    ctx->pc = 0x387C84u;
    SET_GPR_U32(ctx, 31, 0x387C8Cu);
    ctx->pc = 0x387C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C84u;
    // 0x387c88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387D50u, 0x387C84u, 0x387C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387C8Cu;
label_387c8c:
    // 0x387c8c: 0x8e2311e0  lw          $v1, 0x11E0($s1)
    ctx->pc = 0x387c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4576)));
label_387c90:
    // 0x387c90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x387c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_387c94:
    // 0x387c94: 0x1462001c  bne         $v1, $v0, . + 4 + (0x1C << 2)
label_387c98:
    if (ctx->pc == 0x387C98u) {
        ctx->pc = 0x387C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C94u;
        // 0x387c98: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387C9Cu;
        goto label_387c9c;
    }
    ctx->pc = 0x387C94u;
    {
        const bool branch_taken_0x387c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x387C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C94u;
        // 0x387c98: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387c94) {
            ctx->pc = 0x387D08u;
            goto label_387d08;
        }
    }
    ctx->pc = 0x387C9Cu;
label_387c9c:
    // 0x387c9c: 0xc0e8b48  jal         func_3A2D20
label_387ca0:
    if (ctx->pc == 0x387CA0u) {
        ctx->pc = 0x387CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387C9Cu;
        // 0x387ca0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CA4u;
        goto label_387ca4;
    }
    ctx->pc = 0x387C9Cu;
    SET_GPR_U32(ctx, 31, 0x387CA4u);
    ctx->pc = 0x387CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387C9Cu;
    // 0x387ca0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x387C9Cu, 0x387CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CA4u;
label_387ca4:
    // 0x387ca4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387ca8:
    // 0x387ca8: 0xc0e8b58  jal         func_3A2D60
label_387cac:
    if (ctx->pc == 0x387CACu) {
        ctx->pc = 0x387CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CA8u;
        // 0x387cac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CB0u;
        goto label_387cb0;
    }
    ctx->pc = 0x387CA8u;
    SET_GPR_U32(ctx, 31, 0x387CB0u);
    ctx->pc = 0x387CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CA8u;
    // 0x387cac: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x387CA8u, 0x387CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CB0u;
label_387cb0:
    // 0x387cb0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387cb4:
    // 0x387cb4: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x387cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_387cb8:
    // 0x387cb8: 0xc0e8b58  jal         func_3A2D60
label_387cbc:
    if (ctx->pc == 0x387CBCu) {
        ctx->pc = 0x387CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CB8u;
        // 0x387cbc: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CC0u;
        goto label_387cc0;
    }
    ctx->pc = 0x387CB8u;
    SET_GPR_U32(ctx, 31, 0x387CC0u);
    ctx->pc = 0x387CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CB8u;
    // 0x387cbc: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x387CB8u, 0x387CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CC0u;
label_387cc0:
    // 0x387cc0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387cc4:
    // 0x387cc4: 0xc0e8b70  jal         func_3A2DC0
label_387cc8:
    if (ctx->pc == 0x387CC8u) {
        ctx->pc = 0x387CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CC4u;
        // 0x387cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CCCu;
        goto label_387ccc;
    }
    ctx->pc = 0x387CC4u;
    SET_GPR_U32(ctx, 31, 0x387CCCu);
    ctx->pc = 0x387CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CC4u;
    // 0x387cc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x387CC4u, 0x387CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CCCu;
label_387ccc:
    // 0x387ccc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387cd0:
    // 0x387cd0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x387cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_387cd4:
    // 0x387cd4: 0xc0e8b90  jal         func_3A2E40
label_387cd8:
    if (ctx->pc == 0x387CD8u) {
        ctx->pc = 0x387CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CD4u;
        // 0x387cd8: 0x24a5e248  addiu       $a1, $a1, -0x1DB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CDCu;
        goto label_387cdc;
    }
    ctx->pc = 0x387CD4u;
    SET_GPR_U32(ctx, 31, 0x387CDCu);
    ctx->pc = 0x387CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CD4u;
    // 0x387cd8: 0x24a5e248  addiu       $a1, $a1, -0x1DB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E40u, 0x387CD4u, 0x387CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CDCu;
label_387cdc:
    // 0x387cdc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x387cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_387ce0:
    // 0x387ce0: 0xc0e8b50  jal         func_3A2D40
label_387ce4:
    if (ctx->pc == 0x387CE4u) {
        ctx->pc = 0x387CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CE0u;
        // 0x387ce4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387CE8u;
        goto label_387ce8;
    }
    ctx->pc = 0x387CE0u;
    SET_GPR_U32(ctx, 31, 0x387CE8u);
    ctx->pc = 0x387CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387CE0u;
    // 0x387ce4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x387CE0u, 0x387CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387CE8u;
label_387ce8:
    // 0x387ce8: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_387cec:
    if (ctx->pc == 0x387CECu) {
        ctx->pc = 0x387CF0u;
        goto label_387cf0;
    }
    ctx->pc = 0x387CE8u;
    {
        const bool branch_taken_0x387ce8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x387ce8) {
            ctx->pc = 0x387D08u;
            goto label_387d08;
        }
    }
    ctx->pc = 0x387CF0u;
label_387cf0:
    // 0x387cf0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x387cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_387cf4:
    // 0x387cf4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x387cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_387cf8:
    // 0x387cf8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x387cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_387cfc:
    // 0x387cfc: 0x40f809  jalr        $v0
label_387d00:
    if (ctx->pc == 0x387D00u) {
        ctx->pc = 0x387D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CFCu;
        // 0x387d00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D04u;
        goto label_387d04;
    }
    ctx->pc = 0x387CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x387D04u);
        ctx->pc = 0x387D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387CFCu;
        // 0x387d00: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387CFCu, 0x387D04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x387D04u;
label_387d04:
    // 0x387d04: 0xae221210  sw          $v0, 0x1210($s1)
    ctx->pc = 0x387d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4624), GPR_U32(ctx, 2));
label_387d08:
    // 0x387d08: 0xc0e3fce  jal         func_38FF38
label_387d0c:
    if (ctx->pc == 0x387D0Cu) {
        ctx->pc = 0x387D10u;
        goto label_387d10;
    }
    ctx->pc = 0x387D08u;
    SET_GPR_U32(ctx, 31, 0x387D10u);
    ctx->pc = 0x38FF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FF38u, 0x387D08u, 0x387D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D10u;
label_387d10:
    // 0x387d10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387d14:
    // 0x387d14: 0xc0e3ff4  jal         func_38FFD0
label_387d18:
    if (ctx->pc == 0x387D18u) {
        ctx->pc = 0x387D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D14u;
        // 0x387d18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D1Cu;
        goto label_387d1c;
    }
    ctx->pc = 0x387D14u;
    SET_GPR_U32(ctx, 31, 0x387D1Cu);
    ctx->pc = 0x387D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D14u;
    // 0x387d18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FFD0u, 0x387D14u, 0x387D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D1Cu;
label_387d1c:
    // 0x387d1c: 0xae2212f4  sw          $v0, 0x12F4($s1)
    ctx->pc = 0x387d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4852), GPR_U32(ctx, 2));
label_387d20:
    // 0x387d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x387d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387d24:
    // 0x387d24: 0xc0e858c  jal         func_3A1630
label_387d28:
    if (ctx->pc == 0x387D28u) {
        ctx->pc = 0x387D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D24u;
        // 0x387d28: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D2Cu;
        goto label_387d2c;
    }
    ctx->pc = 0x387D24u;
    SET_GPR_U32(ctx, 31, 0x387D2Cu);
    ctx->pc = 0x387D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D24u;
    // 0x387d28: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x387D24u, 0x387D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D2Cu;
label_387d2c:
    // 0x387d2c: 0xc0e3676  jal         func_38D9D8
label_387d30:
    if (ctx->pc == 0x387D30u) {
        ctx->pc = 0x387D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D2Cu;
        // 0x387d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D34u;
        goto label_387d34;
    }
    ctx->pc = 0x387D2Cu;
    SET_GPR_U32(ctx, 31, 0x387D34u);
    ctx->pc = 0x387D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387D2Cu;
    // 0x387d30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D9D8u, 0x387D2Cu, 0x387D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387D34u;
label_387d34:
    // 0x387d34: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x387d34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_387d38:
    // 0x387d38: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x387d38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_387d3c:
    // 0x387d3c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387d3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387d40:
    // 0x387d40: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x387d40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387d44:
    // 0x387d44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x387d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_387d48:
    // 0x387d48: 0x3e00008  jr          $ra
label_387d4c:
    if (ctx->pc == 0x387D4Cu) {
        ctx->pc = 0x387D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D48u;
        // 0x387d4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x387D50u;
        goto label_fallthrough_0x387d48;
    }
    ctx->pc = 0x387D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387D48u;
        // 0x387d4c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x387d48:
    ctx->pc = 0x387D50u;
}
