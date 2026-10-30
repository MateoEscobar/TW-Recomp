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

// Function: sub_00411990
// Address: 0x411990 - 0x411b18
void sub_00411990_0x411990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411990_0x411990");
#endif

    switch (ctx->pc) {
        case 0x411990u: goto label_411990;
        case 0x411994u: goto label_411994;
        case 0x411998u: goto label_411998;
        case 0x41199cu: goto label_41199c;
        case 0x4119a0u: goto label_4119a0;
        case 0x4119a4u: goto label_4119a4;
        case 0x4119a8u: goto label_4119a8;
        case 0x4119acu: goto label_4119ac;
        case 0x4119b0u: goto label_4119b0;
        case 0x4119b4u: goto label_4119b4;
        case 0x4119b8u: goto label_4119b8;
        case 0x4119bcu: goto label_4119bc;
        case 0x4119c0u: goto label_4119c0;
        case 0x4119c4u: goto label_4119c4;
        case 0x4119c8u: goto label_4119c8;
        case 0x4119ccu: goto label_4119cc;
        case 0x4119d0u: goto label_4119d0;
        case 0x4119d4u: goto label_4119d4;
        case 0x4119d8u: goto label_4119d8;
        case 0x4119dcu: goto label_4119dc;
        case 0x4119e0u: goto label_4119e0;
        case 0x4119e4u: goto label_4119e4;
        case 0x4119e8u: goto label_4119e8;
        case 0x4119ecu: goto label_4119ec;
        case 0x4119f0u: goto label_4119f0;
        case 0x4119f4u: goto label_4119f4;
        case 0x4119f8u: goto label_4119f8;
        case 0x4119fcu: goto label_4119fc;
        case 0x411a00u: goto label_411a00;
        case 0x411a04u: goto label_411a04;
        case 0x411a08u: goto label_411a08;
        case 0x411a0cu: goto label_411a0c;
        case 0x411a10u: goto label_411a10;
        case 0x411a14u: goto label_411a14;
        case 0x411a18u: goto label_411a18;
        case 0x411a1cu: goto label_411a1c;
        case 0x411a20u: goto label_411a20;
        case 0x411a24u: goto label_411a24;
        case 0x411a28u: goto label_411a28;
        case 0x411a2cu: goto label_411a2c;
        case 0x411a30u: goto label_411a30;
        case 0x411a34u: goto label_411a34;
        case 0x411a38u: goto label_411a38;
        case 0x411a3cu: goto label_411a3c;
        case 0x411a40u: goto label_411a40;
        case 0x411a44u: goto label_411a44;
        case 0x411a48u: goto label_411a48;
        case 0x411a4cu: goto label_411a4c;
        case 0x411a50u: goto label_411a50;
        case 0x411a54u: goto label_411a54;
        case 0x411a58u: goto label_411a58;
        case 0x411a5cu: goto label_411a5c;
        case 0x411a60u: goto label_411a60;
        case 0x411a64u: goto label_411a64;
        case 0x411a68u: goto label_411a68;
        case 0x411a6cu: goto label_411a6c;
        case 0x411a70u: goto label_411a70;
        case 0x411a74u: goto label_411a74;
        case 0x411a78u: goto label_411a78;
        case 0x411a7cu: goto label_411a7c;
        case 0x411a80u: goto label_411a80;
        case 0x411a84u: goto label_411a84;
        case 0x411a88u: goto label_411a88;
        case 0x411a8cu: goto label_411a8c;
        case 0x411a90u: goto label_411a90;
        case 0x411a94u: goto label_411a94;
        case 0x411a98u: goto label_411a98;
        case 0x411a9cu: goto label_411a9c;
        case 0x411aa0u: goto label_411aa0;
        case 0x411aa4u: goto label_411aa4;
        case 0x411aa8u: goto label_411aa8;
        case 0x411aacu: goto label_411aac;
        case 0x411ab0u: goto label_411ab0;
        case 0x411ab4u: goto label_411ab4;
        case 0x411ab8u: goto label_411ab8;
        case 0x411abcu: goto label_411abc;
        case 0x411ac0u: goto label_411ac0;
        case 0x411ac4u: goto label_411ac4;
        case 0x411ac8u: goto label_411ac8;
        case 0x411accu: goto label_411acc;
        case 0x411ad0u: goto label_411ad0;
        case 0x411ad4u: goto label_411ad4;
        case 0x411ad8u: goto label_411ad8;
        case 0x411adcu: goto label_411adc;
        case 0x411ae0u: goto label_411ae0;
        case 0x411ae4u: goto label_411ae4;
        case 0x411ae8u: goto label_411ae8;
        case 0x411aecu: goto label_411aec;
        case 0x411af0u: goto label_411af0;
        case 0x411af4u: goto label_411af4;
        case 0x411af8u: goto label_411af8;
        case 0x411afcu: goto label_411afc;
        case 0x411b00u: goto label_411b00;
        case 0x411b04u: goto label_411b04;
        case 0x411b08u: goto label_411b08;
        case 0x411b0cu: goto label_411b0c;
        case 0x411b10u: goto label_411b10;
        case 0x411b14u: goto label_411b14;
        default: break;
    }

    ctx->pc = 0x411990u;

label_411990:
    // 0x411990: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x411990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_411994:
    // 0x411994: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x411994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_411998:
    // 0x411998: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x411998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_41199c:
    // 0x41199c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x41199cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4119a0:
    // 0x4119a0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4119a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4119a4:
    // 0x4119a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4119a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4119a8:
    // 0x4119a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4119a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4119ac:
    // 0x4119ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4119acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4119b0:
    // 0x4119b0: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x4119b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_4119b4:
    // 0x4119b4: 0x8c66b8b8  lw          $a2, -0x4748($v1)
    ctx->pc = 0x4119b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294949048)));
label_4119b8:
    // 0x4119b8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x4119b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4119bc:
    // 0x4119bc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x4119bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_4119c0:
    // 0x4119c0: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x4119c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_4119c4:
    // 0x4119c4: 0x40f809  jalr        $v0
label_4119c8:
    if (ctx->pc == 0x4119C8u) {
        ctx->pc = 0x4119C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119C4u;
        // 0x4119c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119CCu;
        goto label_4119cc;
    }
    ctx->pc = 0x4119C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4119CCu);
        ctx->pc = 0x4119C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119C4u;
        // 0x4119c8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4119C4u, 0x4119CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4119CCu;
label_4119cc:
    // 0x4119cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4119ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4119d0:
    // 0x4119d0: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x4119d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4119d4:
    // 0x4119d4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_4119d8:
    if (ctx->pc == 0x4119D8u) {
        ctx->pc = 0x4119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119D4u;
        // 0x4119d8: 0x2031823  subu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119DCu;
        goto label_4119dc;
    }
    ctx->pc = 0x4119D4u;
    {
        const bool branch_taken_0x4119d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4119D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119D4u;
        // 0x4119d8: 0x2031823  subu        $v1, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4119d4) {
            ctx->pc = 0x411A40u;
            goto label_411a40;
        }
    }
    ctx->pc = 0x4119DCu;
label_4119dc:
    // 0x4119dc: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x4119dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_4119e0:
    // 0x4119e0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4119e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4119e4:
    // 0x4119e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_4119e8:
    if (ctx->pc == 0x4119E8u) {
        ctx->pc = 0x4119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E4u;
        // 0x4119e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4119ECu;
        goto label_4119ec;
    }
    ctx->pc = 0x4119E4u;
    {
        const bool branch_taken_0x4119e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4119E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4119E4u;
        // 0x4119e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4119e4) {
            ctx->pc = 0x411A00u;
            goto label_411a00;
        }
    }
    ctx->pc = 0x4119ECu;
label_4119ec:
    // 0x4119ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4119ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4119f0:
    // 0x4119f0: 0x0  nop
    ctx->pc = 0x4119f0u;
    // NOP
label_4119f4:
    // 0x4119f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4119f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4119f8:
    // 0x4119f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4119fc:
    if (ctx->pc == 0x4119FCu) {
        ctx->pc = 0x411A00u;
        goto label_411a00;
    }
    ctx->pc = 0x4119F8u;
    {
        const bool branch_taken_0x4119f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4119f8) {
            ctx->pc = 0x411A18u;
            goto label_411a18;
        }
    }
    ctx->pc = 0x411A00u;
label_411a00:
    // 0x411a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x411a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_411a04:
    // 0x411a04: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x411a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_411a08:
    // 0x411a08: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x411a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_411a0c:
    // 0x411a0c: 0x0  nop
    ctx->pc = 0x411a0cu;
    // NOP
label_411a10:
    // 0x411a10: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x411a10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_411a14:
    // 0x411a14: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x411a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_411a18:
    // 0x411a18: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x411a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_411a1c:
    // 0x411a1c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x411a1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_411a20:
    // 0x411a20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x411a20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411a24:
    // 0x411a24: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x411a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_411a28:
    // 0x411a28: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x411a28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_411a2c:
    // 0x411a2c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x411a2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_411a30:
    // 0x411a30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x411a30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_411a34:
    // 0x411a34: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x411a34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_411a38:
    // 0x411a38: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x411a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_411a3c:
    // 0x411a3c: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x411a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_411a40:
    // 0x411a40: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x411a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_411a44:
    // 0x411a44: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x411a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_411a48:
    // 0x411a48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x411a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_411a4c:
    // 0x411a4c: 0x88820007  lwl         $v0, 0x7($a0)
    ctx->pc = 0x411a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_411a50:
    // 0x411a50: 0x98820004  lwr         $v0, 0x4($a0)
    ctx->pc = 0x411a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_411a54:
    // 0x411a54: 0xaba20003  swl         $v0, 0x3($sp)
    ctx->pc = 0x411a54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_411a58:
    // 0x411a58: 0xbba20000  swr         $v0, 0x0($sp)
    ctx->pc = 0x411a58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_411a5c:
    // 0x411a5c: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x411a5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_411a60:
    // 0x411a60: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x411a60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_411a64:
    // 0x411a64: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_411a68:
    if (ctx->pc == 0x411A68u) {
        ctx->pc = 0x411A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A64u;
        // 0x411a68: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A6Cu;
        goto label_411a6c;
    }
    ctx->pc = 0x411A64u;
    {
        const bool branch_taken_0x411a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x411A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A64u;
        // 0x411a68: 0x3c050041  lui         $a1, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411a64) {
            ctx->pc = 0x411A7Cu;
            goto label_411a7c;
        }
    }
    ctx->pc = 0x411A6Cu;
label_411a6c:
    // 0x411a6c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x411a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_411a70:
    // 0x411a70: 0x24a51958  addiu       $a1, $a1, 0x1958
    ctx->pc = 0x411a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6488));
label_411a74:
    // 0x411a74: 0xc11afd8  jal         func_46BF60
label_411a78:
    if (ctx->pc == 0x411A78u) {
        ctx->pc = 0x411A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A74u;
        // 0x411a78: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A7Cu;
        goto label_411a7c;
    }
    ctx->pc = 0x411A74u;
    SET_GPR_U32(ctx, 31, 0x411A7Cu);
    ctx->pc = 0x411A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411A74u;
    // 0x411a78: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x46BF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46BF60u, 0x411A74u, 0x411A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A7Cu;
label_411a7c:
    // 0x411a7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x411a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411a80:
    // 0x411a80: 0xc11a45e  jal         func_469178
label_411a84:
    if (ctx->pc == 0x411A84u) {
        ctx->pc = 0x411A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411A80u;
        // 0x411a84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411A88u;
        goto label_411a88;
    }
    ctx->pc = 0x411A80u;
    SET_GPR_U32(ctx, 31, 0x411A88u);
    ctx->pc = 0x411A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411A80u;
    // 0x411a84: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x469178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x469178u, 0x411A80u, 0x411A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411A88u;
label_411a88:
    // 0x411a88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x411a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_411a8c:
    // 0x411a8c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x411a8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411a90:
    // 0x411a90: 0x8e04cce4  lw          $a0, -0x331C($s0)
    ctx->pc = 0x411a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
label_411a94:
    // 0x411a94: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x411a94u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411a98:
    // 0x411a98: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x411a98u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411a9c:
    // 0x411a9c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x411a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411aa0:
    // 0x411aa0: 0xc05f784  jal         func_17DE10
label_411aa4:
    if (ctx->pc == 0x411AA4u) {
        ctx->pc = 0x411AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AA0u;
        // 0x411aa4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AA8u;
        goto label_411aa8;
    }
    ctx->pc = 0x411AA0u;
    SET_GPR_U32(ctx, 31, 0x411AA8u);
    ctx->pc = 0x411AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411AA0u;
    // 0x411aa4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17DE10u, 0x411AA0u, 0x411AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411AA8u;
label_411aa8:
    // 0x411aa8: 0xc05fa04  jal         func_17E810
label_411aac:
    if (ctx->pc == 0x411AACu) {
        ctx->pc = 0x411AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AA8u;
        // 0x411aac: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AB0u;
        goto label_411ab0;
    }
    ctx->pc = 0x411AA8u;
    SET_GPR_U32(ctx, 31, 0x411AB0u);
    ctx->pc = 0x411AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x411AA8u;
    // 0x411aac: 0x8e04cce4  lw          $a0, -0x331C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17E810u, 0x411AA8u, 0x411AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x411AB0u;
label_411ab0:
    // 0x411ab0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x411ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_411ab4:
    // 0x411ab4: 0x8c4347e8  lw          $v1, 0x47E8($v0)
    ctx->pc = 0x411ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18408)));
label_411ab8:
    // 0x411ab8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_411abc:
    if (ctx->pc == 0x411ABCu) {
        ctx->pc = 0x411ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AB8u;
        // 0x411abc: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AC0u;
        goto label_411ac0;
    }
    ctx->pc = 0x411AB8u;
    {
        const bool branch_taken_0x411ab8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x411ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AB8u;
        // 0x411abc: 0xae230048  sw          $v1, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ab8) {
            ctx->pc = 0x411AD0u;
            goto label_411ad0;
        }
    }
    ctx->pc = 0x411AC0u;
label_411ac0:
    // 0x411ac0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x411ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_411ac4:
    // 0x411ac4: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x411ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
label_411ac8:
    // 0x411ac8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x411ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_411acc:
    // 0x411acc: 0x0  nop
    ctx->pc = 0x411accu;
    // NOP
label_411ad0:
    // 0x411ad0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x411ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_411ad4:
    // 0x411ad4: 0x40f809  jalr        $v0
label_411ad8:
    if (ctx->pc == 0x411AD8u) {
        ctx->pc = 0x411AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AD4u;
        // 0x411ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411ADCu;
        goto label_411adc;
    }
    ctx->pc = 0x411AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x411ADCu);
        ctx->pc = 0x411AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AD4u;
        // 0x411ad8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411AD4u, 0x411ADCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x411ADCu;
label_411adc:
    // 0x411adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x411adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_411ae0:
    // 0x411ae0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x411ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_411ae4:
    // 0x411ae4: 0x24421b18  addiu       $v0, $v0, 0x1B18
    ctx->pc = 0x411ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6936));
label_411ae8:
    // 0x411ae8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_411aec:
    if (ctx->pc == 0x411AECu) {
        ctx->pc = 0x411AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AE8u;
        // 0x411aec: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411AF0u;
        goto label_411af0;
    }
    ctx->pc = 0x411AE8u;
    {
        const bool branch_taken_0x411ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x411AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411AE8u;
        // 0x411aec: 0xae220048  sw          $v0, 0x48($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411ae8) {
            ctx->pc = 0x411B00u;
            goto label_411b00;
        }
    }
    ctx->pc = 0x411AF0u;
label_411af0:
    // 0x411af0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x411af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_411af4:
    // 0x411af4: 0x24429ef8  addiu       $v0, $v0, -0x6108
    ctx->pc = 0x411af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942456));
label_411af8:
    // 0x411af8: 0xae220048  sw          $v0, 0x48($s1)
    ctx->pc = 0x411af8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 2));
label_411afc:
    // 0x411afc: 0x0  nop
    ctx->pc = 0x411afcu;
    // NOP
label_411b00:
    // 0x411b00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x411b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_411b04:
    // 0x411b04: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x411b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_411b08:
    // 0x411b08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x411b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_411b0c:
    // 0x411b0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x411b0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_411b10:
    // 0x411b10: 0x3e00008  jr          $ra
label_411b14:
    if (ctx->pc == 0x411B14u) {
        ctx->pc = 0x411B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B10u;
        // 0x411b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x411B18u;
        goto label_fallthrough_0x411b10;
    }
    ctx->pc = 0x411B10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x411B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x411B10u;
        // 0x411b14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x411B10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x411b10:
    ctx->pc = 0x411B18u;
}
