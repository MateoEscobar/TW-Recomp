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

// Function: sub_004DFC10
// Address: 0x4dfc10 - 0x4dfd90
void sub_004DFC10_0x4dfc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DFC10_0x4dfc10");
#endif

    switch (ctx->pc) {
        case 0x4dfc10u: goto label_4dfc10;
        case 0x4dfc14u: goto label_4dfc14;
        case 0x4dfc18u: goto label_4dfc18;
        case 0x4dfc1cu: goto label_4dfc1c;
        case 0x4dfc20u: goto label_4dfc20;
        case 0x4dfc24u: goto label_4dfc24;
        case 0x4dfc28u: goto label_4dfc28;
        case 0x4dfc2cu: goto label_4dfc2c;
        case 0x4dfc30u: goto label_4dfc30;
        case 0x4dfc34u: goto label_4dfc34;
        case 0x4dfc38u: goto label_4dfc38;
        case 0x4dfc3cu: goto label_4dfc3c;
        case 0x4dfc40u: goto label_4dfc40;
        case 0x4dfc44u: goto label_4dfc44;
        case 0x4dfc48u: goto label_4dfc48;
        case 0x4dfc4cu: goto label_4dfc4c;
        case 0x4dfc50u: goto label_4dfc50;
        case 0x4dfc54u: goto label_4dfc54;
        case 0x4dfc58u: goto label_4dfc58;
        case 0x4dfc5cu: goto label_4dfc5c;
        case 0x4dfc60u: goto label_4dfc60;
        case 0x4dfc64u: goto label_4dfc64;
        case 0x4dfc68u: goto label_4dfc68;
        case 0x4dfc6cu: goto label_4dfc6c;
        case 0x4dfc70u: goto label_4dfc70;
        case 0x4dfc74u: goto label_4dfc74;
        case 0x4dfc78u: goto label_4dfc78;
        case 0x4dfc7cu: goto label_4dfc7c;
        case 0x4dfc80u: goto label_4dfc80;
        case 0x4dfc84u: goto label_4dfc84;
        case 0x4dfc88u: goto label_4dfc88;
        case 0x4dfc8cu: goto label_4dfc8c;
        case 0x4dfc90u: goto label_4dfc90;
        case 0x4dfc94u: goto label_4dfc94;
        case 0x4dfc98u: goto label_4dfc98;
        case 0x4dfc9cu: goto label_4dfc9c;
        case 0x4dfca0u: goto label_4dfca0;
        case 0x4dfca4u: goto label_4dfca4;
        case 0x4dfca8u: goto label_4dfca8;
        case 0x4dfcacu: goto label_4dfcac;
        case 0x4dfcb0u: goto label_4dfcb0;
        case 0x4dfcb4u: goto label_4dfcb4;
        case 0x4dfcb8u: goto label_4dfcb8;
        case 0x4dfcbcu: goto label_4dfcbc;
        case 0x4dfcc0u: goto label_4dfcc0;
        case 0x4dfcc4u: goto label_4dfcc4;
        case 0x4dfcc8u: goto label_4dfcc8;
        case 0x4dfcccu: goto label_4dfccc;
        case 0x4dfcd0u: goto label_4dfcd0;
        case 0x4dfcd4u: goto label_4dfcd4;
        case 0x4dfcd8u: goto label_4dfcd8;
        case 0x4dfcdcu: goto label_4dfcdc;
        case 0x4dfce0u: goto label_4dfce0;
        case 0x4dfce4u: goto label_4dfce4;
        case 0x4dfce8u: goto label_4dfce8;
        case 0x4dfcecu: goto label_4dfcec;
        case 0x4dfcf0u: goto label_4dfcf0;
        case 0x4dfcf4u: goto label_4dfcf4;
        case 0x4dfcf8u: goto label_4dfcf8;
        case 0x4dfcfcu: goto label_4dfcfc;
        case 0x4dfd00u: goto label_4dfd00;
        case 0x4dfd04u: goto label_4dfd04;
        case 0x4dfd08u: goto label_4dfd08;
        case 0x4dfd0cu: goto label_4dfd0c;
        case 0x4dfd10u: goto label_4dfd10;
        case 0x4dfd14u: goto label_4dfd14;
        case 0x4dfd18u: goto label_4dfd18;
        case 0x4dfd1cu: goto label_4dfd1c;
        case 0x4dfd20u: goto label_4dfd20;
        case 0x4dfd24u: goto label_4dfd24;
        case 0x4dfd28u: goto label_4dfd28;
        case 0x4dfd2cu: goto label_4dfd2c;
        case 0x4dfd30u: goto label_4dfd30;
        case 0x4dfd34u: goto label_4dfd34;
        case 0x4dfd38u: goto label_4dfd38;
        case 0x4dfd3cu: goto label_4dfd3c;
        case 0x4dfd40u: goto label_4dfd40;
        case 0x4dfd44u: goto label_4dfd44;
        case 0x4dfd48u: goto label_4dfd48;
        case 0x4dfd4cu: goto label_4dfd4c;
        case 0x4dfd50u: goto label_4dfd50;
        case 0x4dfd54u: goto label_4dfd54;
        case 0x4dfd58u: goto label_4dfd58;
        case 0x4dfd5cu: goto label_4dfd5c;
        case 0x4dfd60u: goto label_4dfd60;
        case 0x4dfd64u: goto label_4dfd64;
        case 0x4dfd68u: goto label_4dfd68;
        case 0x4dfd6cu: goto label_4dfd6c;
        case 0x4dfd70u: goto label_4dfd70;
        case 0x4dfd74u: goto label_4dfd74;
        case 0x4dfd78u: goto label_4dfd78;
        case 0x4dfd7cu: goto label_4dfd7c;
        case 0x4dfd80u: goto label_4dfd80;
        case 0x4dfd84u: goto label_4dfd84;
        case 0x4dfd88u: goto label_4dfd88;
        case 0x4dfd8cu: goto label_4dfd8c;
        default: break;
    }

    ctx->pc = 0x4dfc10u;

label_4dfc10:
    // 0x4dfc10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4dfc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_4dfc14:
    // 0x4dfc14: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x4dfc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_4dfc18:
    // 0x4dfc18: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4dfc18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_4dfc1c:
    // 0x4dfc1c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x4dfc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_4dfc20:
    // 0x4dfc20: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x4dfc20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4dfc24:
    // 0x4dfc24: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4dfc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_4dfc28:
    // 0x4dfc28: 0x74001b  divu        $zero, $v1, $s4
    ctx->pc = 0x4dfc28u;
    { uint32_t divisor = GPR_U32(ctx, 20); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_4dfc2c:
    // 0x4dfc2c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4dfc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_4dfc30:
    // 0x4dfc30: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4dfc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_4dfc34:
    // 0x4dfc34: 0x27ac0004  addiu       $t4, $sp, 0x4
    ctx->pc = 0x4dfc34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_4dfc38:
    // 0x4dfc38: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4dfc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4dfc3c:
    // 0x4dfc3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4dfc3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4dfc40:
    // 0x4dfc40: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4dfc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_4dfc44:
    // 0x4dfc44: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x4dfc44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
label_4dfc48:
    // 0x4dfc48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4dfc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4dfc4c:
    // 0x4dfc4c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x4dfc4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_4dfc50:
    // 0x4dfc50: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
label_4dfc54:
    if (ctx->pc == 0x4DFC54u) {
        ctx->pc = 0x4DFC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFC50u;
        // 0x4dfc54: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFC58u;
        goto label_4dfc58;
    }
    ctx->pc = 0x4DFC50u;
    {
        const bool branch_taken_0x4dfc50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfc50) {
            ctx->pc = 0x4DFC54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFC50u;
            // 0x4dfc54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFC58u;
            goto label_4dfc58;
        }
    }
    ctx->pc = 0x4DFC58u;
label_4dfc58:
    // 0x4dfc58: 0x3c0a0055  lui         $t2, 0x55
    ctx->pc = 0x4dfc58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)85 << 16));
label_4dfc5c:
    // 0x4dfc5c: 0x25082c10  addiu       $t0, $t0, 0x2C10
    ctx->pc = 0x4dfc5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 11280));
label_4dfc60:
    // 0x4dfc60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4dfc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4dfc64:
    // 0x4dfc64: 0x254a2c38  addiu       $t2, $t2, 0x2C38
    ctx->pc = 0x4dfc64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 11320));
label_4dfc68:
    // 0x4dfc68: 0x8c4db9c0  lw          $t5, -0x4640($v0)
    ctx->pc = 0x4dfc68u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4dfc6c:
    // 0x4dfc6c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4dfc6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4dfc70:
    // 0x4dfc70: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x4dfc70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_4dfc74:
    // 0x4dfc74: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4dfc74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4dfc78:
    // 0x4dfc78: 0x3010  mfhi        $a2
    ctx->pc = 0x4dfc78u;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_4dfc7c:
    // 0x4dfc7c: 0x1812  mflo        $v1
    ctx->pc = 0x4dfc7cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_4dfc80:
    // 0x4dfc80: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x4dfc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_4dfc84:
    // 0x4dfc84: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x4dfc84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_4dfc88:
    // 0x4dfc88: 0x24852c08  addiu       $a1, $a0, 0x2C08
    ctx->pc = 0x4dfc88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 11272));
label_4dfc8c:
    // 0x4dfc8c: 0x8812  mflo        $s1
    ctx->pc = 0x4dfc8cu;
    SET_GPR_U64(ctx, 17, ctx->lo);
label_4dfc90:
    // 0x4dfc90: 0xa810  mfhi        $s5
    ctx->pc = 0x4dfc90u;
    SET_GPR_U64(ctx, 21, ctx->hi);
label_4dfc94:
    // 0x4dfc94: 0x26220003  addiu       $v0, $s1, 0x3
    ctx->pc = 0x4dfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 3));
label_4dfc98:
    // 0x4dfc98: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x4dfc98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_4dfc9c:
    // 0x4dfc9c: 0xc2302b  sltu        $a2, $a2, $v0
    ctx->pc = 0x4dfc9cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4dfca0:
    // 0x4dfca0: 0x3a6600a  movz        $t4, $sp, $a2
    ctx->pc = 0x4dfca0u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 12, GPR_VEC(ctx, 29));
label_4dfca4:
    // 0x4dfca4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4dfca4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4dfca8:
    // 0x4dfca8: 0x8d860000  lw          $a2, 0x0($t4)
    ctx->pc = 0x4dfca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_4dfcac:
    // 0x4dfcac: 0xae460008  sw          $a2, 0x8($s2)
    ctx->pc = 0x4dfcacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 6));
label_4dfcb0:
    // 0x4dfcb0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4dfcb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_4dfcb4:
    // 0x4dfcb4: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x4dfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_4dfcb8:
    // 0x4dfcb8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x4dfcb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_4dfcbc:
    // 0x4dfcbc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x4dfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_4dfcc0:
    // 0x4dfcc0: 0x40f809  jalr        $v0
label_4dfcc4:
    if (ctx->pc == 0x4DFCC4u) {
        ctx->pc = 0x4DFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFCC0u;
        // 0x4dfcc4: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFCC8u;
        goto label_4dfcc8;
    }
    ctx->pc = 0x4DFCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4DFCC8u);
        ctx->pc = 0x4DFCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFCC0u;
        // 0x4dfcc4: 0x1a42021  addu        $a0, $t5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFCC0u, 0x4DFCC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4DFCC8u;
label_4dfcc8:
    // 0x4dfcc8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4dfcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_4dfccc:
    // 0x4dfccc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4dfcccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4dfcd0:
    // 0x4dfcd0: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x4dfcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
label_4dfcd4:
    // 0x4dfcd4: 0x119880  sll         $s3, $s1, 2
    ctx->pc = 0x4dfcd4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_4dfcd8:
    // 0x4dfcd8: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x4dfcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_4dfcdc:
    // 0x4dfcdc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4dfcdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4dfce0:
    // 0x4dfce0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x4dfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_4dfce4:
    // 0x4dfce4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4dfce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4dfce8:
    // 0x4dfce8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x4dfce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_4dfcec:
    // 0x4dfcec: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x4dfcecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_4dfcf0:
    // 0x4dfcf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4dfcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4dfcf4:
    // 0x4dfcf4: 0xc137ed4  jal         func_4DFB50
label_4dfcf8:
    if (ctx->pc == 0x4DFCF8u) {
        ctx->pc = 0x4DFCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFCF4u;
        // 0x4dfcf8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFCFCu;
        goto label_4dfcfc;
    }
    ctx->pc = 0x4DFCF4u;
    SET_GPR_U32(ctx, 31, 0x4DFCFCu);
    ctx->pc = 0x4DFCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4DFCF4u;
    // 0x4dfcf8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DFB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DFB50u, 0x4DFCF4u, 0x4DFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4DFCFCu;
label_4dfcfc:
    // 0x4dfcfc: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x4dfcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_4dfd00:
    // 0x4dfd00: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x4dfd00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4dfd04:
    // 0x4dfd04: 0xac70000c  sw          $s0, 0xC($v1)
    ctx->pc = 0x4dfd04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 16));
label_4dfd08:
    // 0x4dfd08: 0x2644001c  addiu       $a0, $s2, 0x1C
    ctx->pc = 0x4dfd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_4dfd0c:
    // 0x4dfd0c: 0x2665fffc  addiu       $a1, $s3, -0x4
    ctx->pc = 0x4dfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_4dfd10:
    // 0x4dfd10: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x4dfd10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4dfd14:
    // 0x4dfd14: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4dfd14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4dfd18:
    // 0x4dfd18: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x4dfd18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4dfd1c:
    // 0x4dfd1c: 0x2b4a818  mult        $s5, $s5, $s4
    ctx->pc = 0x4dfd1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_4dfd20:
    // 0x4dfd20: 0x2408002a  addiu       $t0, $zero, 0x2A
    ctx->pc = 0x4dfd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_4dfd24:
    // 0x4dfd24: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x4dfd24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_4dfd28:
    // 0x4dfd28: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_4dfd2c:
    if (ctx->pc == 0x4DFD2Cu) {
        ctx->pc = 0x4DFD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFD28u;
        // 0x4dfd2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFD30u;
        goto label_4dfd30;
    }
    ctx->pc = 0x4DFD28u;
    {
        const bool branch_taken_0x4dfd28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x4dfd28) {
            ctx->pc = 0x4DFD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4DFD28u;
            // 0x4dfd2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4DFD30u;
            goto label_4dfd30;
        }
    }
    ctx->pc = 0x4DFD30u;
label_4dfd30:
    // 0x4dfd30: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dfd30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dfd34:
    // 0x4dfd34: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x4dfd34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_4dfd38:
    // 0x4dfd38: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x4dfd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_4dfd3c:
    // 0x4dfd3c: 0x8e62fffc  lw          $v0, -0x4($s3)
    ctx->pc = 0x4dfd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967292)));
label_4dfd40:
    // 0x4dfd40: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x4dfd40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_4dfd44:
    // 0x4dfd44: 0x244201f8  addiu       $v0, $v0, 0x1F8
    ctx->pc = 0x4dfd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 504));
label_4dfd48:
    // 0x4dfd48: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x4dfd48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_4dfd4c:
    // 0x4dfd4c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x4dfd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4dfd50:
    // 0x4dfd50: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x4dfd50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_4dfd54:
    // 0x4dfd54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x4dfd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_4dfd58:
    // 0x4dfd58: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4dfd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4dfd5c:
    // 0x4dfd5c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x4dfd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_4dfd60:
    // 0x4dfd60: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4dfd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4dfd64:
    // 0x4dfd64: 0xae42001c  sw          $v0, 0x1C($s2)
    ctx->pc = 0x4dfd64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
label_4dfd68:
    // 0x4dfd68: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4dfd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4dfd6c:
    // 0x4dfd6c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4dfd6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4dfd70:
    // 0x4dfd70: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4dfd70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4dfd74:
    // 0x4dfd74: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4dfd74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4dfd78:
    // 0x4dfd78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4dfd78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4dfd7c:
    // 0x4dfd7c: 0x3e00008  jr          $ra
label_4dfd80:
    if (ctx->pc == 0x4DFD80u) {
        ctx->pc = 0x4DFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFD7Cu;
        // 0x4dfd80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4DFD84u;
        goto label_4dfd84;
    }
    ctx->pc = 0x4DFD7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DFD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4DFD7Cu;
        // 0x4dfd80: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4DFD7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4DFD84u;
label_4dfd84:
    // 0x4dfd84: 0x0  nop
    ctx->pc = 0x4dfd84u;
    // NOP
label_4dfd88:
    // 0x4dfd88: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x4dfd88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_4dfd8c:
    // 0x4dfd8c: 0x0  nop
    ctx->pc = 0x4dfd8cu;
    // NOP
    ctx->pc = 0x4dfd90u;
}
