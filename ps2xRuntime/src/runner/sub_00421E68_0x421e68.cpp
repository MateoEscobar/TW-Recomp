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

// Function: sub_00421E68
// Address: 0x421e68 - 0x421f98
void sub_00421E68_0x421e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00421E68_0x421e68");
#endif

    switch (ctx->pc) {
        case 0x421e68u: goto label_421e68;
        case 0x421e6cu: goto label_421e6c;
        case 0x421e70u: goto label_421e70;
        case 0x421e74u: goto label_421e74;
        case 0x421e78u: goto label_421e78;
        case 0x421e7cu: goto label_421e7c;
        case 0x421e80u: goto label_421e80;
        case 0x421e84u: goto label_421e84;
        case 0x421e88u: goto label_421e88;
        case 0x421e8cu: goto label_421e8c;
        case 0x421e90u: goto label_421e90;
        case 0x421e94u: goto label_421e94;
        case 0x421e98u: goto label_421e98;
        case 0x421e9cu: goto label_421e9c;
        case 0x421ea0u: goto label_421ea0;
        case 0x421ea4u: goto label_421ea4;
        case 0x421ea8u: goto label_421ea8;
        case 0x421eacu: goto label_421eac;
        case 0x421eb0u: goto label_421eb0;
        case 0x421eb4u: goto label_421eb4;
        case 0x421eb8u: goto label_421eb8;
        case 0x421ebcu: goto label_421ebc;
        case 0x421ec0u: goto label_421ec0;
        case 0x421ec4u: goto label_421ec4;
        case 0x421ec8u: goto label_421ec8;
        case 0x421eccu: goto label_421ecc;
        case 0x421ed0u: goto label_421ed0;
        case 0x421ed4u: goto label_421ed4;
        case 0x421ed8u: goto label_421ed8;
        case 0x421edcu: goto label_421edc;
        case 0x421ee0u: goto label_421ee0;
        case 0x421ee4u: goto label_421ee4;
        case 0x421ee8u: goto label_421ee8;
        case 0x421eecu: goto label_421eec;
        case 0x421ef0u: goto label_421ef0;
        case 0x421ef4u: goto label_421ef4;
        case 0x421ef8u: goto label_421ef8;
        case 0x421efcu: goto label_421efc;
        case 0x421f00u: goto label_421f00;
        case 0x421f04u: goto label_421f04;
        case 0x421f08u: goto label_421f08;
        case 0x421f0cu: goto label_421f0c;
        case 0x421f10u: goto label_421f10;
        case 0x421f14u: goto label_421f14;
        case 0x421f18u: goto label_421f18;
        case 0x421f1cu: goto label_421f1c;
        case 0x421f20u: goto label_421f20;
        case 0x421f24u: goto label_421f24;
        case 0x421f28u: goto label_421f28;
        case 0x421f2cu: goto label_421f2c;
        case 0x421f30u: goto label_421f30;
        case 0x421f34u: goto label_421f34;
        case 0x421f38u: goto label_421f38;
        case 0x421f3cu: goto label_421f3c;
        case 0x421f40u: goto label_421f40;
        case 0x421f44u: goto label_421f44;
        case 0x421f48u: goto label_421f48;
        case 0x421f4cu: goto label_421f4c;
        case 0x421f50u: goto label_421f50;
        case 0x421f54u: goto label_421f54;
        case 0x421f58u: goto label_421f58;
        case 0x421f5cu: goto label_421f5c;
        case 0x421f60u: goto label_421f60;
        case 0x421f64u: goto label_421f64;
        case 0x421f68u: goto label_421f68;
        case 0x421f6cu: goto label_421f6c;
        case 0x421f70u: goto label_421f70;
        case 0x421f74u: goto label_421f74;
        case 0x421f78u: goto label_421f78;
        case 0x421f7cu: goto label_421f7c;
        case 0x421f80u: goto label_421f80;
        case 0x421f84u: goto label_421f84;
        case 0x421f88u: goto label_421f88;
        case 0x421f8cu: goto label_421f8c;
        case 0x421f90u: goto label_421f90;
        case 0x421f94u: goto label_421f94;
        default: break;
    }

    ctx->pc = 0x421e68u;

label_421e68:
    // 0x421e68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x421e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_421e6c:
    // 0x421e6c: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x421e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_421e70:
    // 0x421e70: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x421e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_421e74:
    // 0x421e74: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x421e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_421e78:
    // 0x421e78: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x421e78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_421e7c:
    // 0x421e7c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x421e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_421e80:
    // 0x421e80: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x421e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_421e84:
    // 0x421e84: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x421e84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_421e88:
    // 0x421e88: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x421e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_421e8c:
    // 0x421e8c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x421e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_421e90:
    // 0x421e90: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x421e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_421e94:
    // 0x421e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x421e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421e98:
    // 0x421e98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x421e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_421e9c:
    // 0x421e9c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x421e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_421ea0:
    // 0x421ea0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x421ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_421ea4:
    // 0x421ea4: 0x2028821  addu        $s1, $s0, $v0
    ctx->pc = 0x421ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_421ea8:
    // 0x421ea8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x421ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_421eac:
    // 0x421eac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x421eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_421eb0:
    // 0x421eb0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x421eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_421eb4:
    // 0x421eb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x421eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_421eb8:
    // 0x421eb8: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x421eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_421ebc:
    // 0x421ebc: 0x907657a4  lbu         $s6, 0x57A4($v1)
    ctx->pc = 0x421ebcu;
    SET_GPR_ZE32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22436)));
label_421ec0:
    // 0x421ec0: 0x9074043c  lbu         $s4, 0x43C($v1)
    ctx->pc = 0x421ec0u;
    SET_GPR_ZE32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1084)));
label_421ec4:
    // 0x421ec4: 0x8c750438  lw          $s5, 0x438($v1)
    ctx->pc = 0x421ec4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1080)));
label_421ec8:
    // 0x421ec8: 0xae270000  sw          $a3, 0x0($s1)
    ctx->pc = 0x421ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 7));
label_421ecc:
    // 0x421ecc: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x421eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
label_421ed0:
    // 0x421ed0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x421ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_421ed4:
    // 0x421ed4: 0xc10c4de  jal         func_431378
label_421ed8:
    if (ctx->pc == 0x421ED8u) {
        ctx->pc = 0x421ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421ED4u;
        // 0x421ed8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421EDCu;
        goto label_421edc;
    }
    ctx->pc = 0x421ED4u;
    SET_GPR_U32(ctx, 31, 0x421EDCu);
    ctx->pc = 0x421ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421ED4u;
    // 0x421ed8: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x421ED4u, 0x421EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421EDCu;
label_421edc:
    // 0x421edc: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x421edcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_421ee0:
    // 0x421ee0: 0xae120118  sw          $s2, 0x118($s0)
    ctx->pc = 0x421ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 18));
label_421ee4:
    // 0x421ee4: 0x8e060110  lw          $a2, 0x110($s0)
    ctx->pc = 0x421ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_421ee8:
    // 0x421ee8: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x421ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_421eec:
    // 0x421eec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x421eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_421ef0:
    // 0x421ef0: 0xb20018  mult        $zero, $a1, $s2
    ctx->pc = 0x421ef0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_421ef4:
    // 0x421ef4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x421ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_421ef8:
    // 0x421ef8: 0x8c430064  lw          $v1, 0x64($v0)
    ctx->pc = 0x421ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_421efc:
    // 0x421efc: 0x2812  mflo        $a1
    ctx->pc = 0x421efcu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_421f00:
    // 0x421f00: 0x60f809  jalr        $v1
label_421f04:
    if (ctx->pc == 0x421F04u) {
        ctx->pc = 0x421F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F00u;
        // 0x421f04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F08u;
        goto label_421f08;
    }
    ctx->pc = 0x421F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421F08u);
        ctx->pc = 0x421F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F00u;
        // 0x421f04: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421F00u, 0x421F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421F08u;
label_421f08:
    // 0x421f08: 0x8e070110  lw          $a3, 0x110($s0)
    ctx->pc = 0x421f08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_421f0c:
    // 0x421f0c: 0x8e050114  lw          $a1, 0x114($s0)
    ctx->pc = 0x421f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 276)));
label_421f10:
    // 0x421f10: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x421f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_421f14:
    // 0x421f14: 0x8e060108  lw          $a2, 0x108($s0)
    ctx->pc = 0x421f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_421f18:
    // 0x421f18: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x421f18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_421f1c:
    // 0x421f1c: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x421f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_421f20:
    // 0x421f20: 0x60f809  jalr        $v1
label_421f24:
    if (ctx->pc == 0x421F24u) {
        ctx->pc = 0x421F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F20u;
        // 0x421f24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F28u;
        goto label_421f28;
    }
    ctx->pc = 0x421F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x421F28u);
        ctx->pc = 0x421F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F20u;
        // 0x421f24: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421F20u, 0x421F28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421F28u;
label_421f28:
    // 0x421f28: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x421f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_421f2c:
    // 0x421f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x421f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_421f30:
    // 0x421f30: 0xc10858e  jal         func_421638
label_421f34:
    if (ctx->pc == 0x421F34u) {
        ctx->pc = 0x421F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F30u;
        // 0x421f34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F38u;
        goto label_421f38;
    }
    ctx->pc = 0x421F30u;
    SET_GPR_U32(ctx, 31, 0x421F38u);
    ctx->pc = 0x421F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421F30u;
    // 0x421f34: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x421638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x421638u, 0x421F30u, 0x421F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421F38u;
label_421f38:
    // 0x421f38: 0x8e030128  lw          $v1, 0x128($s0)
    ctx->pc = 0x421f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 296)));
label_421f3c:
    // 0x421f3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x421f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_421f40:
    // 0x421f40: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x421f40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_421f44:
    // 0x421f44: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x421f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_421f48:
    // 0x421f48: 0x40f809  jalr        $v0
label_421f4c:
    if (ctx->pc == 0x421F4Cu) {
        ctx->pc = 0x421F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F48u;
        // 0x421f4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F50u;
        goto label_421f50;
    }
    ctx->pc = 0x421F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x421F50u);
        ctx->pc = 0x421F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F48u;
        // 0x421f4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421F48u, 0x421F50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x421F50u;
label_421f50:
    // 0x421f50: 0x8e63489c  lw          $v1, 0x489C($s3)
    ctx->pc = 0x421f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_421f54:
    // 0x421f54: 0xa074043c  sb          $s4, 0x43C($v1)
    ctx->pc = 0x421f54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1084), (uint8_t)GPR_U32(ctx, 20));
label_421f58:
    // 0x421f58: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x421f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_421f5c:
    // 0x421f5c: 0xa09657a4  sb          $s6, 0x57A4($a0)
    ctx->pc = 0x421f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 22436), (uint8_t)GPR_U32(ctx, 22));
label_421f60:
    // 0x421f60: 0xac950438  sw          $s5, 0x438($a0)
    ctx->pc = 0x421f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1080), GPR_U32(ctx, 21));
label_421f64:
    // 0x421f64: 0x8e62489c  lw          $v0, 0x489C($s3)
    ctx->pc = 0x421f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
label_421f68:
    // 0x421f68: 0xc06d20e  jal         func_1B4838
label_421f6c:
    if (ctx->pc == 0x421F6Cu) {
        ctx->pc = 0x421F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F68u;
        // 0x421f6c: 0x904457a4  lbu         $a0, 0x57A4($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F70u;
        goto label_421f70;
    }
    ctx->pc = 0x421F68u;
    SET_GPR_U32(ctx, 31, 0x421F70u);
    ctx->pc = 0x421F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x421F68u;
    // 0x421f6c: 0x904457a4  lbu         $a0, 0x57A4($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22436)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B4838u, 0x421F68u, 0x421F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x421F70u;
label_421f70:
    // 0x421f70: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x421f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_421f74:
    // 0x421f74: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x421f74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_421f78:
    // 0x421f78: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x421f78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_421f7c:
    // 0x421f7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x421f7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_421f80:
    // 0x421f80: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x421f80u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_421f84:
    // 0x421f84: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x421f84u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_421f88:
    // 0x421f88: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x421f88u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_421f8c:
    // 0x421f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x421f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_421f90:
    // 0x421f90: 0x3e00008  jr          $ra
label_421f94:
    if (ctx->pc == 0x421F94u) {
        ctx->pc = 0x421F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F90u;
        // 0x421f94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x421F98u;
        goto label_fallthrough_0x421f90;
    }
    ctx->pc = 0x421F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x421F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x421F90u;
        // 0x421f94: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x421F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x421f90:
    ctx->pc = 0x421F98u;
}
