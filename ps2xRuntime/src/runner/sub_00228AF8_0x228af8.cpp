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

// Function: sub_00228AF8
// Address: 0x228af8 - 0x228ca8
void sub_00228AF8_0x228af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228AF8_0x228af8");
#endif

    switch (ctx->pc) {
        case 0x228b9cu: goto label_228b9c;
        case 0x228bb0u: goto label_228bb0;
        case 0x228bc8u: goto label_228bc8;
        case 0x228be8u: goto label_228be8;
        case 0x228c48u: goto label_228c48;
        case 0x228c64u: goto label_228c64;
        case 0x228c70u: goto label_228c70;
        default: break;
    }

    ctx->pc = 0x228af8u;

    // 0x228af8: 0x240201ac  addiu       $v0, $zero, 0x1AC
    ctx->pc = 0x228af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 428));
    // 0x228afc: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x228afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x228b00: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x228b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x228b04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x228b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x228b08: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x228b08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b0c: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x228b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x228b10: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x228b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x228b14: 0x24634620  addiu       $v1, $v1, 0x4620
    ctx->pc = 0x228b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17952));
    // 0x228b18: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x228b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x228b1c: 0x8fac00e0  lw          $t4, 0xE0($sp)
    ctx->pc = 0x228b1cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x228b20: 0x83b021  addu        $s6, $a0, $v1
    ctx->pc = 0x228b20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x228b24: 0x8faa00e8  lw          $t2, 0xE8($sp)
    ctx->pc = 0x228b24u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x228b28: 0x26c4014c  addiu       $a0, $s6, 0x14C
    ctx->pc = 0x228b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 332));
    // 0x228b2c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x228b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x228b30: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x228b30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x228b34: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x228b34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x228b38: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x228b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x228b3c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x228b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x228b40: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x228b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b44: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x228b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x228b48: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x228b48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x228b4c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x228b4cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
    // 0x228b50: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x228b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x228b54: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x228b54u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x228b58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x228b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x228b5c: 0x8fb300f0  lw          $s3, 0xF0($sp)
    ctx->pc = 0x228b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x228b60: 0xa2c7011c  sb          $a3, 0x11C($s6)
    ctx->pc = 0x228b60u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 284), (uint8_t)GPR_U32(ctx, 7));
    // 0x228b64: 0xa2c8011d  sb          $t0, 0x11D($s6)
    ctx->pc = 0x228b64u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 285), (uint8_t)GPR_U32(ctx, 8));
    // 0x228b68: 0xa6c90116  sh          $t1, 0x116($s6)
    ctx->pc = 0x228b68u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 278), (uint16_t)GPR_U32(ctx, 9));
    // 0x228b6c: 0xa6cc0118  sh          $t4, 0x118($s6)
    ctx->pc = 0x228b6cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 280), (uint16_t)GPR_U32(ctx, 12));
    // 0x228b70: 0xa2ca014b  sb          $t2, 0x14B($s6)
    ctx->pc = 0x228b70u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 331), (uint8_t)GPR_U32(ctx, 10));
    // 0x228b74: 0xa2c5011a  sb          $a1, 0x11A($s6)
    ctx->pc = 0x228b74u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 282), (uint8_t)GPR_U32(ctx, 5));
    // 0x228b78: 0xa2c6011b  sb          $a2, 0x11B($s6)
    ctx->pc = 0x228b78u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 283), (uint8_t)GPR_U32(ctx, 6));
    // 0x228b7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x228b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228b80: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x228b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x228b84: 0x8fb000f8  lw          $s0, 0xF8($sp)
    ctx->pc = 0x228b84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x228b88: 0x8fb10100  lw          $s1, 0x100($sp)
    ctx->pc = 0x228b88u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x228b8c: 0x8fb20108  lw          $s2, 0x108($sp)
    ctx->pc = 0x228b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x228b90: 0x8fb700d0  lw          $s7, 0xD0($sp)
    ctx->pc = 0x228b90u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x228b94: 0xc10c4de  jal         func_431378
    ctx->pc = 0x228B94u;
    SET_GPR_U32(ctx, 31, 0x228B9Cu);
    ctx->pc = 0x228B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228B94u;
    // 0x228b98: 0xa2c0016b  sb          $zero, 0x16B($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 363), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x228B94u, 0x228B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228B9Cu;
label_228b9c:
    // 0x228b9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x228b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228ba0: 0x26c4016c  addiu       $a0, $s6, 0x16C
    ctx->pc = 0x228ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 364));
    // 0x228ba4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x228ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x228ba8: 0xc10c4de  jal         func_431378
    ctx->pc = 0x228BA8u;
    SET_GPR_U32(ctx, 31, 0x228BB0u);
    ctx->pc = 0x228BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BA8u;
    // 0x228bac: 0xa2c0018b  sb          $zero, 0x18B($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 395), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x228BA8u, 0x228BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BB0u;
label_228bb0:
    // 0x228bb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x228bb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bb4: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x228bb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x228bb8: 0xaed100b4  sw          $s1, 0xB4($s6)
    ctx->pc = 0x228bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 180), GPR_U32(ctx, 17));
    // 0x228bbc: 0x26c4018c  addiu       $a0, $s6, 0x18C
    ctx->pc = 0x228bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 396));
    // 0x228bc0: 0xc10c4de  jal         func_431378
    ctx->pc = 0x228BC0u;
    SET_GPR_U32(ctx, 31, 0x228BC8u);
    ctx->pc = 0x228BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228BC0u;
    // 0x228bc4: 0xa2c001ab  sb          $zero, 0x1AB($s6) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 22), 427), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x228BC0u, 0x228BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228BC8u;
label_228bc8:
    // 0x228bc8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x228bc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x228bcc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x228bccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x228bd0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x228bd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x228bd4: 0x26c8011e  addiu       $t0, $s6, 0x11E
    ctx->pc = 0x228bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 286));
    // 0x228bd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x228bd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228bdc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x228bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228be0: 0x26c500b8  addiu       $a1, $s6, 0xB8
    ctx->pc = 0x228be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 184));
    // 0x228be4: 0x0  nop
    ctx->pc = 0x228be4u;
    // NOP
label_228be8:
    // 0x228be8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x228be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228bec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228bf0: 0x1072021  addu        $a0, $t0, $a3
    ctx->pc = 0x228bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x228bf4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x228bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x228bf8: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x228bf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x228bfc: 0x2ce3002d  sltiu       $v1, $a3, 0x2D
    ctx->pc = 0x228bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x228c00: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x228c00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x228c04: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x228c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x228c08: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x228c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x228c0c: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x228c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x228c10: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x228c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x228c14: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x228c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x228c18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x228c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x228c1c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x228c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x228c20: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x228c20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x228c24: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x228c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x228c28: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x228c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x228c2c: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x228c2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x228c30: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x228c30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x228c34: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x228C34u;
    {
        const bool branch_taken_0x228c34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x228C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228C34u;
        // 0x228c38: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228c34) {
            ctx->pc = 0x228BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228be8;
        }
    }
    ctx->pc = 0x228C3Cu;
    // 0x228c3c: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x228c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
    // 0x228c40: 0xc05e03a  jal         func_1780E8
    ctx->pc = 0x228C40u;
    SET_GPR_U32(ctx, 31, 0x228C48u);
    ctx->pc = 0x228C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C40u;
    // 0x228c44: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780E8u, 0x228C40u, 0x228C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C48u;
label_228c48:
    // 0x228c48: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x228c48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
    // 0x228c4c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x228c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x228c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x228c54: 0x24c6b6f8  addiu       $a2, $a2, -0x4908
    ctx->pc = 0x228c54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948600));
    // 0x228c58: 0xa6c20112  sh          $v0, 0x112($s6)
    ctx->pc = 0x228c58u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 274), (uint16_t)GPR_U32(ctx, 2));
    // 0x228c5c: 0xc10ca04  jal         func_432810
    ctx->pc = 0x228C5Cu;
    SET_GPR_U32(ctx, 31, 0x228C64u);
    ctx->pc = 0x228C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C5Cu;
    // 0x228c60: 0x2405001f  addiu       $a1, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x228C5Cu, 0x228C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C64u;
label_228c64:
    // 0x228c64: 0x8fc4cd4c  lw          $a0, -0x32B4($fp)
    ctx->pc = 0x228c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294954316)));
    // 0x228c68: 0xc05e03a  jal         func_1780E8
    ctx->pc = 0x228C68u;
    SET_GPR_U32(ctx, 31, 0x228C70u);
    ctx->pc = 0x228C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x228C68u;
    // 0x228c6c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1780E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1780E8u, 0x228C68u, 0x228C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x228C70u;
label_228c70:
    // 0x228c70: 0xa6c20114  sh          $v0, 0x114($s6)
    ctx->pc = 0x228c70u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x228c74: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x228c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x228c78: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x228c78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x228c7c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x228c7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x228c80: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x228c80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x228c84: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x228c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x228c88: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x228c88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x228c8c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x228c8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x228c90: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x228c90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x228c94: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x228c94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x228c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x228c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x228c9c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x228c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x228ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x228CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228CA0u;
        // 0x228ca4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228CA8u;
}
