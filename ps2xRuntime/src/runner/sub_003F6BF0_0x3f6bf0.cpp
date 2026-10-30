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

// Function: sub_003F6BF0
// Address: 0x3f6bf0 - 0x3f6d70
void sub_003F6BF0_0x3f6bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F6BF0_0x3f6bf0");
#endif

    switch (ctx->pc) {
        case 0x3f6bf0u: goto label_3f6bf0;
        case 0x3f6bf4u: goto label_3f6bf4;
        case 0x3f6bf8u: goto label_3f6bf8;
        case 0x3f6bfcu: goto label_3f6bfc;
        case 0x3f6c00u: goto label_3f6c00;
        case 0x3f6c04u: goto label_3f6c04;
        case 0x3f6c08u: goto label_3f6c08;
        case 0x3f6c0cu: goto label_3f6c0c;
        case 0x3f6c10u: goto label_3f6c10;
        case 0x3f6c14u: goto label_3f6c14;
        case 0x3f6c18u: goto label_3f6c18;
        case 0x3f6c1cu: goto label_3f6c1c;
        case 0x3f6c20u: goto label_3f6c20;
        case 0x3f6c24u: goto label_3f6c24;
        case 0x3f6c28u: goto label_3f6c28;
        case 0x3f6c2cu: goto label_3f6c2c;
        case 0x3f6c30u: goto label_3f6c30;
        case 0x3f6c34u: goto label_3f6c34;
        case 0x3f6c38u: goto label_3f6c38;
        case 0x3f6c3cu: goto label_3f6c3c;
        case 0x3f6c40u: goto label_3f6c40;
        case 0x3f6c44u: goto label_3f6c44;
        case 0x3f6c48u: goto label_3f6c48;
        case 0x3f6c4cu: goto label_3f6c4c;
        case 0x3f6c50u: goto label_3f6c50;
        case 0x3f6c54u: goto label_3f6c54;
        case 0x3f6c58u: goto label_3f6c58;
        case 0x3f6c5cu: goto label_3f6c5c;
        case 0x3f6c60u: goto label_3f6c60;
        case 0x3f6c64u: goto label_3f6c64;
        case 0x3f6c68u: goto label_3f6c68;
        case 0x3f6c6cu: goto label_3f6c6c;
        case 0x3f6c70u: goto label_3f6c70;
        case 0x3f6c74u: goto label_3f6c74;
        case 0x3f6c78u: goto label_3f6c78;
        case 0x3f6c7cu: goto label_3f6c7c;
        case 0x3f6c80u: goto label_3f6c80;
        case 0x3f6c84u: goto label_3f6c84;
        case 0x3f6c88u: goto label_3f6c88;
        case 0x3f6c8cu: goto label_3f6c8c;
        case 0x3f6c90u: goto label_3f6c90;
        case 0x3f6c94u: goto label_3f6c94;
        case 0x3f6c98u: goto label_3f6c98;
        case 0x3f6c9cu: goto label_3f6c9c;
        case 0x3f6ca0u: goto label_3f6ca0;
        case 0x3f6ca4u: goto label_3f6ca4;
        case 0x3f6ca8u: goto label_3f6ca8;
        case 0x3f6cacu: goto label_3f6cac;
        case 0x3f6cb0u: goto label_3f6cb0;
        case 0x3f6cb4u: goto label_3f6cb4;
        case 0x3f6cb8u: goto label_3f6cb8;
        case 0x3f6cbcu: goto label_3f6cbc;
        case 0x3f6cc0u: goto label_3f6cc0;
        case 0x3f6cc4u: goto label_3f6cc4;
        case 0x3f6cc8u: goto label_3f6cc8;
        case 0x3f6cccu: goto label_3f6ccc;
        case 0x3f6cd0u: goto label_3f6cd0;
        case 0x3f6cd4u: goto label_3f6cd4;
        case 0x3f6cd8u: goto label_3f6cd8;
        case 0x3f6cdcu: goto label_3f6cdc;
        case 0x3f6ce0u: goto label_3f6ce0;
        case 0x3f6ce4u: goto label_3f6ce4;
        case 0x3f6ce8u: goto label_3f6ce8;
        case 0x3f6cecu: goto label_3f6cec;
        case 0x3f6cf0u: goto label_3f6cf0;
        case 0x3f6cf4u: goto label_3f6cf4;
        case 0x3f6cf8u: goto label_3f6cf8;
        case 0x3f6cfcu: goto label_3f6cfc;
        case 0x3f6d00u: goto label_3f6d00;
        case 0x3f6d04u: goto label_3f6d04;
        case 0x3f6d08u: goto label_3f6d08;
        case 0x3f6d0cu: goto label_3f6d0c;
        case 0x3f6d10u: goto label_3f6d10;
        case 0x3f6d14u: goto label_3f6d14;
        case 0x3f6d18u: goto label_3f6d18;
        case 0x3f6d1cu: goto label_3f6d1c;
        case 0x3f6d20u: goto label_3f6d20;
        case 0x3f6d24u: goto label_3f6d24;
        case 0x3f6d28u: goto label_3f6d28;
        case 0x3f6d2cu: goto label_3f6d2c;
        case 0x3f6d30u: goto label_3f6d30;
        case 0x3f6d34u: goto label_3f6d34;
        case 0x3f6d38u: goto label_3f6d38;
        case 0x3f6d3cu: goto label_3f6d3c;
        case 0x3f6d40u: goto label_3f6d40;
        case 0x3f6d44u: goto label_3f6d44;
        case 0x3f6d48u: goto label_3f6d48;
        case 0x3f6d4cu: goto label_3f6d4c;
        case 0x3f6d50u: goto label_3f6d50;
        case 0x3f6d54u: goto label_3f6d54;
        case 0x3f6d58u: goto label_3f6d58;
        case 0x3f6d5cu: goto label_3f6d5c;
        case 0x3f6d60u: goto label_3f6d60;
        case 0x3f6d64u: goto label_3f6d64;
        case 0x3f6d68u: goto label_3f6d68;
        case 0x3f6d6cu: goto label_3f6d6c;
        default: break;
    }

    ctx->pc = 0x3f6bf0u;

label_3f6bf0:
    // 0x3f6bf0: 0x27bdf700  addiu       $sp, $sp, -0x900
    ctx->pc = 0x3f6bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964992));
label_3f6bf4:
    // 0x3f6bf4: 0x7fb008f0  sq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f6bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2288), GPR_VEC(ctx, 16));
label_3f6bf8:
    // 0x3f6bf8: 0x7fb208d0  sq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f6bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2256), GPR_VEC(ctx, 18));
label_3f6bfc:
    // 0x3f6bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3f6bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c00:
    // 0x3f6c00: 0x7fb408b0  sq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f6c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 20));
label_3f6c04:
    // 0x3f6c04: 0x7fb108e0  sq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f6c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2272), GPR_VEC(ctx, 17));
label_3f6c08:
    // 0x3f6c08: 0x7fb308c0  sq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f6c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2240), GPR_VEC(ctx, 19));
label_3f6c0c:
    // 0x3f6c0c: 0xffbf08a0  sd          $ra, 0x8A0($sp)
    ctx->pc = 0x3f6c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2208), GPR_U64(ctx, 31));
label_3f6c10:
    // 0x3f6c10: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3f6c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3f6c14:
    // 0x3f6c14: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3f6c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3f6c18:
    // 0x3f6c18: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3f6c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3f6c1c:
    // 0x3f6c1c: 0x40f809  jalr        $v0
label_3f6c20:
    if (ctx->pc == 0x3F6C20u) {
        ctx->pc = 0x3F6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C1Cu;
        // 0x3f6c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C24u;
        goto label_3f6c24;
    }
    ctx->pc = 0x3F6C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3F6C24u);
        ctx->pc = 0x3F6C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C1Cu;
        // 0x3f6c20: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6C1Cu, 0x3F6C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3F6C24u;
label_3f6c24:
    // 0x3f6c24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3f6c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c28:
    // 0x3f6c28: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x3f6c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3f6c2c:
    // 0x3f6c2c: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_3f6c30:
    if (ctx->pc == 0x3F6C30u) {
        ctx->pc = 0x3F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C2Cu;
        // 0x3f6c30: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C34u;
        goto label_3f6c34;
    }
    ctx->pc = 0x3F6C2Cu;
    {
        const bool branch_taken_0x3f6c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C2Cu;
        // 0x3f6c30: 0x8e540020  lw          $s4, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c2c) {
            ctx->pc = 0x3F6D4Cu;
            goto label_3f6d4c;
        }
    }
    ctx->pc = 0x3F6C34u;
label_3f6c34:
    // 0x3f6c34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3f6c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c38:
    // 0x3f6c38: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x3f6c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3f6c3c:
    // 0x3f6c3c: 0x27b10410  addiu       $s1, $sp, 0x410
    ctx->pc = 0x3f6c3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1040));
label_3f6c40:
    // 0x3f6c40: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3f6c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3f6c44:
    // 0x3f6c44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3f6c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3f6c48:
    // 0x3f6c48: 0x0  nop
    ctx->pc = 0x3f6c48u;
    // NOP
label_3f6c4c:
    // 0x3f6c4c: 0x0  nop
    ctx->pc = 0x3f6c4cu;
    // NOP
label_3f6c50:
    // 0x3f6c50: 0x0  nop
    ctx->pc = 0x3f6c50u;
    // NOP
label_3f6c54:
    // 0x3f6c54: 0x0  nop
    ctx->pc = 0x3f6c54u;
    // NOP
label_3f6c58:
    // 0x3f6c58: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_3f6c5c:
    if (ctx->pc == 0x3F6C5Cu) {
        ctx->pc = 0x3F6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C58u;
        // 0x3f6c5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C60u;
        goto label_3f6c60;
    }
    ctx->pc = 0x3F6C58u;
    {
        const bool branch_taken_0x3f6c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3F6C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C58u;
        // 0x3f6c5c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6c58) {
            ctx->pc = 0x3F6C48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f6c48;
        }
    }
    ctx->pc = 0x3F6C60u;
label_3f6c60:
    // 0x3f6c60: 0xc138ddc  jal         func_4E3770
label_3f6c64:
    if (ctx->pc == 0x3F6C64u) {
        ctx->pc = 0x3F6C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C60u;
        // 0x3f6c64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C68u;
        goto label_3f6c68;
    }
    ctx->pc = 0x3F6C60u;
    SET_GPR_U32(ctx, 31, 0x3F6C68u);
    ctx->pc = 0x3F6C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C60u;
    // 0x3f6c64: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E3770u, 0x3F6C60u, 0x3F6C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C68u;
label_3f6c68:
    // 0x3f6c68: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3f6c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3f6c6c:
    // 0x3f6c6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f6c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f6c70:
    // 0x3f6c70: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x3f6c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_3f6c74:
    // 0x3f6c74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f6c74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6c78:
    // 0x3f6c78: 0xc0e94a0  jal         func_3A5280
label_3f6c7c:
    if (ctx->pc == 0x3F6C7Cu) {
        ctx->pc = 0x3F6C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C78u;
        // 0x3f6c7c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C80u;
        goto label_3f6c80;
    }
    ctx->pc = 0x3F6C78u;
    SET_GPR_U32(ctx, 31, 0x3F6C80u);
    ctx->pc = 0x3F6C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C78u;
    // 0x3f6c7c: 0x7fa20410  sq          $v0, 0x410($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1040), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5280u, 0x3F6C78u, 0x3F6C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C80u;
label_3f6c80:
    // 0x3f6c80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3f6c84:
    if (ctx->pc == 0x3F6C84u) {
        ctx->pc = 0x3F6C88u;
        goto label_3f6c88;
    }
    ctx->pc = 0x3F6C80u;
    {
        const bool branch_taken_0x3f6c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6c80) {
            ctx->pc = 0x3F6CACu;
            goto label_3f6cac;
        }
    }
    ctx->pc = 0x3F6C88u;
label_3f6c88:
    // 0x3f6c88: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x3f6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_3f6c8c:
    // 0x3f6c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3f6c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3f6c90:
    // 0x3f6c90: 0xc0e947e  jal         func_3A51F8
label_3f6c94:
    if (ctx->pc == 0x3F6C94u) {
        ctx->pc = 0x3F6C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6C90u;
        // 0x3f6c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6C98u;
        goto label_3f6c98;
    }
    ctx->pc = 0x3F6C90u;
    SET_GPR_U32(ctx, 31, 0x3F6C98u);
    ctx->pc = 0x3F6C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6C90u;
    // 0x3f6c94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x3F6C90u, 0x3F6C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6C98u;
label_3f6c98:
    // 0x3f6c98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3f6c9c:
    if (ctx->pc == 0x3F6C9Cu) {
        ctx->pc = 0x3F6CA0u;
        goto label_3f6ca0;
    }
    ctx->pc = 0x3F6C98u;
    {
        const bool branch_taken_0x3f6c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f6c98) {
            ctx->pc = 0x3F6CACu;
            goto label_3f6cac;
        }
    }
    ctx->pc = 0x3F6CA0u;
label_3f6ca0:
    // 0x3f6ca0: 0xc0e9694  jal         func_3A5A50
label_3f6ca4:
    if (ctx->pc == 0x3F6CA4u) {
        ctx->pc = 0x3F6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CA0u;
        // 0x3f6ca4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6CA8u;
        goto label_3f6ca8;
    }
    ctx->pc = 0x3F6CA0u;
    SET_GPR_U32(ctx, 31, 0x3F6CA8u);
    ctx->pc = 0x3F6CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CA0u;
    // 0x3f6ca4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x3F6CA0u, 0x3F6CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6CA8u;
label_3f6ca8:
    // 0x3f6ca8: 0x2982b  sltu        $s3, $zero, $v0
    ctx->pc = 0x3f6ca8u;
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3f6cac:
    // 0x3f6cac: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
label_3f6cb0:
    if (ctx->pc == 0x3F6CB0u) {
        ctx->pc = 0x3F6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CACu;
        // 0x3f6cb0: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6CB4u;
        goto label_3f6cb4;
    }
    ctx->pc = 0x3F6CACu;
    {
        const bool branch_taken_0x3f6cac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CACu;
        // 0x3f6cb0: 0x8e42002c  lw          $v0, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6cac) {
            ctx->pc = 0x3F6D3Cu;
            goto label_3f6d3c;
        }
    }
    ctx->pc = 0x3F6CB4u;
label_3f6cb4:
    // 0x3f6cb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3f6cb8:
    if (ctx->pc == 0x3F6CB8u) {
        ctx->pc = 0x3F6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CB4u;
        // 0x3f6cb8: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6CBCu;
        goto label_3f6cbc;
    }
    ctx->pc = 0x3F6CB4u;
    {
        const bool branch_taken_0x3f6cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CB4u;
        // 0x3f6cb8: 0x7ba20410  lq          $v0, 0x410($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6cb4) {
            ctx->pc = 0x3F6CCCu;
            goto label_3f6ccc;
        }
    }
    ctx->pc = 0x3F6CBCu;
label_3f6cbc:
    // 0x3f6cbc: 0x92450029  lbu         $a1, 0x29($s2)
    ctx->pc = 0x3f6cbcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 41)));
label_3f6cc0:
    // 0x3f6cc0: 0xc0e858c  jal         func_3A1630
label_3f6cc4:
    if (ctx->pc == 0x3F6CC4u) {
        ctx->pc = 0x3F6CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6CC0u;
        // 0x3f6cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6CC8u;
        goto label_3f6cc8;
    }
    ctx->pc = 0x3F6CC0u;
    SET_GPR_U32(ctx, 31, 0x3F6CC8u);
    ctx->pc = 0x3F6CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6CC0u;
    // 0x3f6cc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F6CC0u, 0x3F6CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6CC8u;
label_3f6cc8:
    // 0x3f6cc8: 0x7ba20410  lq          $v0, 0x410($sp)
    ctx->pc = 0x3f6cc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 1040)));
label_3f6ccc:
    // 0x3f6ccc: 0x27b10420  addiu       $s1, $sp, 0x420
    ctx->pc = 0x3f6cccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3f6cd0:
    // 0x3f6cd0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3f6cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3f6cd4:
    // 0x3f6cd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3f6cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3f6cd8:
    // 0x3f6cd8: 0x7fa20830  sq          $v0, 0x830($sp)
    ctx->pc = 0x3f6cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 2));
label_3f6cdc:
    // 0x3f6cdc: 0x26106868  addiu       $s0, $s0, 0x6868
    ctx->pc = 0x3f6cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26728));
label_3f6ce0:
    // 0x3f6ce0: 0x27a50830  addiu       $a1, $sp, 0x830
    ctx->pc = 0x3f6ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2096));
label_3f6ce4:
    // 0x3f6ce4: 0x27a60840  addiu       $a2, $sp, 0x840
    ctx->pc = 0x3f6ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2112));
label_3f6ce8:
    // 0x3f6ce8: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x3f6ce8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_3f6cec:
    // 0x3f6cec: 0x27a70850  addiu       $a3, $sp, 0x850
    ctx->pc = 0x3f6cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 2128));
label_3f6cf0:
    // 0x3f6cf0: 0x27a80860  addiu       $t0, $sp, 0x860
    ctx->pc = 0x3f6cf0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
label_3f6cf4:
    // 0x3f6cf4: 0x27a90870  addiu       $t1, $sp, 0x870
    ctx->pc = 0x3f6cf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2160));
label_3f6cf8:
    // 0x3f6cf8: 0x7fa20840  sq          $v0, 0x840($sp)
    ctx->pc = 0x3f6cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 2));
label_3f6cfc:
    // 0x3f6cfc: 0x27aa0880  addiu       $t2, $sp, 0x880
    ctx->pc = 0x3f6cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 2176));
label_3f6d00:
    // 0x3f6d00: 0x27ab0890  addiu       $t3, $sp, 0x890
    ctx->pc = 0x3f6d00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 2192));
label_3f6d04:
    // 0x3f6d04: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x3f6d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_3f6d08:
    // 0x3f6d08: 0xafa00860  sw          $zero, 0x860($sp)
    ctx->pc = 0x3f6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2144), GPR_U32(ctx, 0));
label_3f6d0c:
    // 0x3f6d0c: 0x7fa20850  sq          $v0, 0x850($sp)
    ctx->pc = 0x3f6d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 2));
label_3f6d10:
    // 0x3f6d10: 0x92430028  lbu         $v1, 0x28($s2)
    ctx->pc = 0x3f6d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
label_3f6d14:
    // 0x3f6d14: 0xafb40880  sw          $s4, 0x880($sp)
    ctx->pc = 0x3f6d14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2176), GPR_U32(ctx, 20));
label_3f6d18:
    // 0x3f6d18: 0xafa30870  sw          $v1, 0x870($sp)
    ctx->pc = 0x3f6d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2160), GPR_U32(ctx, 3));
label_3f6d1c:
    // 0x3f6d1c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x3f6d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_3f6d20:
    // 0x3f6d20: 0xc0ea084  jal         func_3A8210
label_3f6d24:
    if (ctx->pc == 0x3F6D24u) {
        ctx->pc = 0x3F6D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D20u;
        // 0x3f6d24: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D28u;
        goto label_3f6d28;
    }
    ctx->pc = 0x3F6D20u;
    SET_GPR_U32(ctx, 31, 0x3F6D28u);
    ctx->pc = 0x3F6D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D20u;
    // 0x3f6d24: 0xafa20890  sw          $v0, 0x890($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 2192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8210u, 0x3F6D20u, 0x3F6D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D28u;
label_3f6d28:
    // 0x3f6d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f6d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f6d2c:
    // 0x3f6d2c: 0xc0f15bc  jal         func_3C56F0
label_3f6d30:
    if (ctx->pc == 0x3F6D30u) {
        ctx->pc = 0x3F6D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D2Cu;
        // 0x3f6d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D34u;
        goto label_3f6d34;
    }
    ctx->pc = 0x3F6D2Cu;
    SET_GPR_U32(ctx, 31, 0x3F6D34u);
    ctx->pc = 0x3F6D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D2Cu;
    // 0x3f6d30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3F6D2Cu, 0x3F6D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D34u;
label_3f6d34:
    // 0x3f6d34: 0x10000006  b           . + 4 + (0x6 << 2)
label_3f6d38:
    if (ctx->pc == 0x3F6D38u) {
        ctx->pc = 0x3F6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D34u;
        // 0x3f6d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D3Cu;
        goto label_3f6d3c;
    }
    ctx->pc = 0x3F6D34u;
    {
        const bool branch_taken_0x3f6d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D34u;
        // 0x3f6d38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d34) {
            ctx->pc = 0x3F6D50u;
            goto label_3f6d50;
        }
    }
    ctx->pc = 0x3F6D3Cu;
label_3f6d3c:
    // 0x3f6d3c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3f6d40:
    if (ctx->pc == 0x3F6D40u) {
        ctx->pc = 0x3F6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D3Cu;
        // 0x3f6d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D44u;
        goto label_3f6d44;
    }
    ctx->pc = 0x3F6D3Cu;
    {
        const bool branch_taken_0x3f6d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D3Cu;
        // 0x3f6d40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f6d3c) {
            ctx->pc = 0x3F6D4Cu;
            goto label_3f6d4c;
        }
    }
    ctx->pc = 0x3F6D44u;
label_3f6d44:
    // 0x3f6d44: 0xc0e858c  jal         func_3A1630
label_3f6d48:
    if (ctx->pc == 0x3F6D48u) {
        ctx->pc = 0x3F6D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D44u;
        // 0x3f6d48: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D4Cu;
        goto label_3f6d4c;
    }
    ctx->pc = 0x3F6D44u;
    SET_GPR_U32(ctx, 31, 0x3F6D4Cu);
    ctx->pc = 0x3F6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F6D44u;
    // 0x3f6d48: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3F6D44u, 0x3F6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F6D4Cu;
label_3f6d4c:
    // 0x3f6d4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3f6d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f6d50:
    // 0x3f6d50: 0x7bb008f0  lq          $s0, 0x8F0($sp)
    ctx->pc = 0x3f6d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2288)));
label_3f6d54:
    // 0x3f6d54: 0x7bb108e0  lq          $s1, 0x8E0($sp)
    ctx->pc = 0x3f6d54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2272)));
label_3f6d58:
    // 0x3f6d58: 0x7bb208d0  lq          $s2, 0x8D0($sp)
    ctx->pc = 0x3f6d58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2256)));
label_3f6d5c:
    // 0x3f6d5c: 0x7bb308c0  lq          $s3, 0x8C0($sp)
    ctx->pc = 0x3f6d5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2240)));
label_3f6d60:
    // 0x3f6d60: 0x7bb408b0  lq          $s4, 0x8B0($sp)
    ctx->pc = 0x3f6d60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_3f6d64:
    // 0x3f6d64: 0xdfbf08a0  ld          $ra, 0x8A0($sp)
    ctx->pc = 0x3f6d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2208)));
label_3f6d68:
    // 0x3f6d68: 0x3e00008  jr          $ra
label_3f6d6c:
    if (ctx->pc == 0x3F6D6Cu) {
        ctx->pc = 0x3F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D68u;
        // 0x3f6d6c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3F6D70u;
        goto label_fallthrough_0x3f6d68;
    }
    ctx->pc = 0x3F6D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F6D68u;
        // 0x3f6d6c: 0x27bd0900  addiu       $sp, $sp, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F6D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3f6d68:
    ctx->pc = 0x3F6D70u;
}
