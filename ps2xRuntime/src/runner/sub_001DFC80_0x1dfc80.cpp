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

// Function: sub_001DFC80
// Address: 0x1dfc80 - 0x1dfe00
void sub_001DFC80_0x1dfc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFC80_0x1dfc80");
#endif

    switch (ctx->pc) {
        case 0x1dfcacu: goto label_1dfcac;
        case 0x1dfcbcu: goto label_1dfcbc;
        case 0x1dfcccu: goto label_1dfccc;
        case 0x1dfcdcu: goto label_1dfcdc;
        case 0x1dfcecu: goto label_1dfcec;
        case 0x1dfcfcu: goto label_1dfcfc;
        case 0x1dfd0cu: goto label_1dfd0c;
        default: break;
    }

    ctx->pc = 0x1dfc80u;

    // 0x1dfc80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1dfc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1dfc84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1dfc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1dfc88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1dfc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1dfc8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1dfc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1dfc90: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1dfc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1dfc94: 0x14a20053  bne         $a1, $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x1DFC94u;
    {
        const bool branch_taken_0x1dfc94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC94u;
        // 0x1dfc98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc94) {
            ctx->pc = 0x1DFDE4u;
            goto label_1dfde4;
        }
    }
    ctx->pc = 0x1DFC9Cu;
    // 0x1dfc9c: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1DFC9Cu;
    {
        const bool branch_taken_0x1dfc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFC9Cu;
        // 0x1dfca0: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfc9c) {
            ctx->pc = 0x1DFDE4u;
            goto label_1dfde4;
        }
    }
    ctx->pc = 0x1DFCA4u;
    // 0x1dfca4: 0xc076cf0  jal         func_1DB3C0
    ctx->pc = 0x1DFCA4u;
    SET_GPR_U32(ctx, 31, 0x1DFCACu);
    ctx->pc = 0x1DFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCA4u;
    // 0x1dfca8: 0x2484e790  addiu       $a0, $a0, -0x1870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB3C0u, 0x1DFCA4u, 0x1DFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCACu;
label_1dfcac:
    // 0x1dfcac: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x1dfcacu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1dfcb0: 0x24040108  addiu       $a0, $zero, 0x108
    ctx->pc = 0x1dfcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
    // 0x1dfcb4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DFCB4u;
    SET_GPR_U32(ctx, 31, 0x1DFCBCu);
    ctx->pc = 0x1DFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCB4u;
    // 0x1dfcb8: 0x261040c0  addiu       $s0, $s0, 0x40C0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFCB4u, 0x1DFCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCBCu;
label_1dfcbc:
    // 0x1dfcbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfcbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfcc4: 0xc079fd4  jal         func_1E7F50
    ctx->pc = 0x1DFCC4u;
    SET_GPR_U32(ctx, 31, 0x1DFCCCu);
    ctx->pc = 0x1DFCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCC4u;
    // 0x1dfcc8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E7F50u, 0x1DFCC4u, 0x1DFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCCCu;
label_1dfccc:
    // 0x1dfccc: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x1dfcccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1dfcd0: 0x24040107  addiu       $a0, $zero, 0x107
    ctx->pc = 0x1dfcd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
    // 0x1dfcd4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DFCD4u;
    SET_GPR_U32(ctx, 31, 0x1DFCDCu);
    ctx->pc = 0x1DFCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCD4u;
    // 0x1dfcd8: 0x26104c70  addiu       $s0, $s0, 0x4C70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFCD4u, 0x1DFCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCDCu;
label_1dfcdc:
    // 0x1dfcdc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfcdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfce4: 0xc079de8  jal         func_1E77A0
    ctx->pc = 0x1DFCE4u;
    SET_GPR_U32(ctx, 31, 0x1DFCECu);
    ctx->pc = 0x1DFCE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCE4u;
    // 0x1dfce8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77A0u, 0x1DFCE4u, 0x1DFCECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCECu;
label_1dfcec:
    // 0x1dfcec: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x1dfcecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1dfcf0: 0x24040106  addiu       $a0, $zero, 0x106
    ctx->pc = 0x1dfcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    // 0x1dfcf4: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x1DFCF4u;
    SET_GPR_U32(ctx, 31, 0x1DFCFCu);
    ctx->pc = 0x1DFCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFCF4u;
    // 0x1dfcf8: 0x26104fe0  addiu       $s0, $s0, 0x4FE0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x1DFCF4u, 0x1DFCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFCFCu;
label_1dfcfc:
    // 0x1dfcfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfcfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd00: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1dfd00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfd04: 0xc079de8  jal         func_1E77A0
    ctx->pc = 0x1DFD04u;
    SET_GPR_U32(ctx, 31, 0x1DFD0Cu);
    ctx->pc = 0x1DFD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFD04u;
    // 0x1dfd08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E77A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E77A0u, 0x1DFD04u, 0x1DFD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFD0Cu;
label_1dfd0c:
    // 0x1dfd0c: 0x3c0b0063  lui         $t3, 0x63
    ctx->pc = 0x1dfd0cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd10: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1dfd10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x1dfd14: 0xc441edf8  lwc1        $f1, -0x1208($v0)
    ctx->pc = 0x1dfd14u;
    { uint32_t bits = FAST_READ32(0x50EDF8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfd18: 0x25635368  addiu       $v1, $t3, 0x5368
    ctx->pc = 0x1dfd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 21352));
    // 0x1dfd1c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1dfd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dfd20: 0x24080096  addiu       $t0, $zero, 0x96
    ctx->pc = 0x1dfd20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1dfd24: 0xa0650003  sb          $a1, 0x3($v1)
    ctx->pc = 0x1dfd24u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x63536Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63536Bu, _value); } while (0);
    // 0x1dfd28: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x1dfd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x1dfd2c: 0xa1685368  sb          $t0, 0x5368($t3)
    ctx->pc = 0x1dfd2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x635368u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635368u, _value); } while (0);
    // 0x1dfd30: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x1dfd30u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd34: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1dfd34u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x635369u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635369u, _value); } while (0);
    // 0x1dfd38: 0x25225378  addiu       $v0, $t1, 0x5378
    ctx->pc = 0x1dfd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 21368));
    // 0x1dfd3c: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x1dfd3cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63536Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63536Au, _value); } while (0);
    // 0x1dfd40: 0x3c0a0063  lui         $t2, 0x63
    ctx->pc = 0x1dfd40u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd44: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1dfd44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x63537Bu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63537Bu, _value); } while (0);
    // 0x1dfd48: 0x25475370  addiu       $a3, $t2, 0x5370
    ctx->pc = 0x1dfd48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 21360));
    // 0x1dfd4c: 0xa0e50003  sb          $a1, 0x3($a3)
    ctx->pc = 0x1dfd4cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x635373u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635373u, _value); } while (0);
    // 0x1dfd50: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x1dfd50u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x1dfd54: 0xa0480001  sb          $t0, 0x1($v0)
    ctx->pc = 0x1dfd54u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x635379u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635379u, _value); } while (0);
    // 0x1dfd58: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x1dfd58u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd5c: 0xa0440002  sb          $a0, 0x2($v0)
    ctx->pc = 0x1dfd5cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x63537Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x63537Au, _value); } while (0);
    // 0x1dfd60: 0x25e65380  addiu       $a2, $t7, 0x5380
    ctx->pc = 0x1dfd60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 21376));
    // 0x1dfd64: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1dfd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1dfd68: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1dfd68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1dfd6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dfd6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dfd70: 0x3c0d0063  lui         $t5, 0x63
    ctx->pc = 0x1dfd70u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd74: 0xa1445370  sb          $a0, 0x5370($t2)
    ctx->pc = 0x1dfd74u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x635370u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635370u, _value); } while (0);
    // 0x1dfd78: 0x3c0c0063  lui         $t4, 0x63
    ctx->pc = 0x1dfd78u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd7c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1dfd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1dfd80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1dfd80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1dfd84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfd84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfd88: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x1dfd88u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1dfd8c: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x1dfd8cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x635371u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635371u, _value); } while (0);
    // 0x1dfd90: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1dfd90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1dfd94: 0xa0e80002  sb          $t0, 0x2($a3)
    ctx->pc = 0x1dfd94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x635372u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635372u, _value); } while (0);
    // 0x1dfd98: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1dfd98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1dfd9c: 0xa1245378  sb          $a0, 0x5378($t1)
    ctx->pc = 0x1dfd9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x635378u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x635378u, _value); } while (0);
    // 0x1dfda0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1dfda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1dfda4: 0xc640edfc  lwc1        $f0, -0x1204($s2)
    ctx->pc = 0x1dfda4u;
    { uint32_t bits = FAST_READ32(0x50EDFCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfda8: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x1dfda8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    // 0x1dfdac: 0x8d625368  lw          $v0, 0x5368($t3)
    ctx->pc = 0x1dfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x635368u));
    // 0x1dfdb0: 0x3c100063  lui         $s0, 0x63
    ctx->pc = 0x1dfdb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)99 << 16));
    // 0x1dfdb4: 0x8d435370  lw          $v1, 0x5370($t2)
    ctx->pc = 0x1dfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x635370u));
    // 0x1dfdb8: 0x3c0e0063  lui         $t6, 0x63
    ctx->pc = 0x1dfdb8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)99 << 16));
    // 0x1dfdbc: 0x8d245378  lw          $a0, 0x5378($t1)
    ctx->pc = 0x1dfdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x635378u));
    // 0x1dfdc0: 0xade25380  sw          $v0, 0x5380($t7)
    ctx->pc = 0x1dfdc0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x635380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635380u, _value); } while (0);
    // 0x1dfdc4: 0xe5a05358  swc1        $f0, 0x5358($t5)
    ctx->pc = 0x1dfdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635358u, _value); } while (0); }
    // 0x1dfdc8: 0xe5825360  swc1        $f2, 0x5360($t4)
    ctx->pc = 0x1dfdc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635360u, _value); } while (0); }
    // 0x1dfdcc: 0xe4a15364  swc1        $f1, 0x5364($a1)
    ctx->pc = 0x1dfdccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635364u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635364u, _value); } while (0); }
    // 0x1dfdd0: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1dfdd0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x635388u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635388u, _value); } while (0);
    // 0x1dfdd4: 0xe6205350  swc1        $f0, 0x5350($s1)
    ctx->pc = 0x1dfdd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635350u, _value); } while (0); }
    // 0x1dfdd8: 0xe6005354  swc1        $f0, 0x5354($s0)
    ctx->pc = 0x1dfdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x635354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635354u, _value); } while (0); }
    // 0x1dfddc: 0xe5c2535c  swc1        $f2, 0x535C($t6)
    ctx->pc = 0x1dfddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x63535Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x63535Cu, _value); } while (0); }
    // 0x1dfde0: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x1dfde0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x635384u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x635384u, _value); } while (0);
label_1dfde4:
    // 0x1dfde4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1dfde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dfde8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1dfde8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dfdec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1dfdecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dfdf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dfdf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dfdf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFDF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFDF4u;
        // 0x1dfdf8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFDF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFDFCu;
    // 0x1dfdfc: 0x0  nop
    ctx->pc = 0x1dfdfcu;
    // NOP
    ctx->pc = 0x1dfe00u;
}
