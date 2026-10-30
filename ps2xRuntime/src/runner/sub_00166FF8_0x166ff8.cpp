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

// Function: sub_00166FF8
// Address: 0x166ff8 - 0x1672a8
void sub_00166FF8_0x166ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166FF8_0x166ff8");
#endif

    switch (ctx->pc) {
        case 0x167080u: goto label_167080;
        case 0x1670b8u: goto label_1670b8;
        case 0x1670c4u: goto label_1670c4;
        case 0x1670d0u: goto label_1670d0;
        case 0x167110u: goto label_167110;
        case 0x16713cu: goto label_16713c;
        case 0x1671dcu: goto label_1671dc;
        default: break;
    }

    ctx->pc = 0x166ff8u;

    // 0x166ff8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x166ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x166ffc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x166ffcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x167000: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x167000u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x167004: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x167004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x167008: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x167008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x16700c: 0xa5403  sra         $t2, $t2, 16
    ctx->pc = 0x16700cu;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 16));
    // 0x167010: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x167010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x167014: 0xb5c03  sra         $t3, $t3, 16
    ctx->pc = 0x167014u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 11), 16));
    // 0x167018: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x167018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x16701c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16701cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167020: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x167020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x167024: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x167024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167028: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x167028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x16702c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x16702cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x167030: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x167030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x167034: 0x26300640  addiu       $s0, $s1, 0x640
    ctx->pc = 0x167034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1600));
    // 0x167038: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x167038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x16703c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x16703cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167040: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x167040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x167044: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167044u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167048: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x167048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x16704c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x16704cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167050: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x167054: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x167054u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167058: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x167058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x16705c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16705cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167060: 0xafab0014  sw          $t3, 0x14($sp)
    ctx->pc = 0x167060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 11));
    // 0x167064: 0x87be00d8  lh          $fp, 0xD8($sp)
    ctx->pc = 0x167064u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x167068: 0x87b300e0  lh          $s3, 0xE0($sp)
    ctx->pc = 0x167068u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x16706c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16706cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x167070: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x167070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x167074: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x167074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x167078: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16707c: 0x0  nop
    ctx->pc = 0x16707cu;
    // NOP
label_167080:
    // 0x167080: 0x92020050  lbu         $v0, 0x50($s0)
    ctx->pc = 0x167080u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x167084: 0x14400073  bnez        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x167084u;
    {
        const bool branch_taken_0x167084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167084u;
        // 0x167088: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167084) {
            ctx->pc = 0x167254u;
            goto label_167254;
        }
    }
    ctx->pc = 0x16708Cu;
    // 0x16708c: 0xc5220008  lwc1        $f2, 0x8($t1)
    ctx->pc = 0x16708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167094: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x167094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x167098: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x167098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16709c: 0xc5210000  lwc1        $f1, 0x0($t1)
    ctx->pc = 0x16709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1670a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1670a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1670a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1670a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1670a8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1670a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1670ac: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1670acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1670b0: 0xc05b5b6  jal         func_16D6D8
    ctx->pc = 0x1670B0u;
    SET_GPR_U32(ctx, 31, 0x1670B8u);
    ctx->pc = 0x1670B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670B0u;
    // 0x1670b4: 0xa2060050  sb          $a2, 0x50($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D6D8u, 0x1670B0u, 0x1670B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670B8u;
label_1670b8:
    // 0x1670b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1670b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670bc: 0xc05b5f6  jal         func_16D7D8
    ctx->pc = 0x1670BCu;
    SET_GPR_U32(ctx, 31, 0x1670C4u);
    ctx->pc = 0x1670C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670BCu;
    // 0x1670c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D7D8u, 0x1670BCu, 0x1670C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670C4u;
label_1670c4:
    // 0x1670c4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1670c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670c8: 0xc05b5d6  jal         func_16D758
    ctx->pc = 0x1670C8u;
    SET_GPR_U32(ctx, 31, 0x1670D0u);
    ctx->pc = 0x1670CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1670C8u;
    // 0x1670cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D758u, 0x1670C8u, 0x1670D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1670D0u;
label_1670d0:
    // 0x1670d0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1670d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1670d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1670d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1670d8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1670d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1670dc: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x1670dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1670e0: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x1670e0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x1670e4: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1670e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1670e8: 0xa61e005a  sh          $fp, 0x5A($s0)
    ctx->pc = 0x1670e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 30));
    // 0x1670ec: 0xa6130052  sh          $s3, 0x52($s0)
    ctx->pc = 0x1670ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 82), (uint16_t)GPR_U32(ctx, 19));
    // 0x1670f0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1670f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1670f4: 0xa6000058  sh          $zero, 0x58($s0)
    ctx->pc = 0x1670f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 88), (uint16_t)GPR_U32(ctx, 0));
    // 0x1670f8: 0xa600005c  sh          $zero, 0x5C($s0)
    ctx->pc = 0x1670f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x1670fc: 0xa6030056  sh          $v1, 0x56($s0)
    ctx->pc = 0x1670fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 86), (uint16_t)GPR_U32(ctx, 3));
    // 0x167100: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x167100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x167104: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x167104u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x167108: 0xc05b5e6  jal         func_16D798
    ctx->pc = 0x167108u;
    SET_GPR_U32(ctx, 31, 0x167110u);
    ctx->pc = 0x16710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167108u;
    // 0x16710c: 0xae030060  sw          $v1, 0x60($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D798u, 0x167108u, 0x167110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167110u;
label_167110:
    // 0x167110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x167110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x167114: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x167114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x167118: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x167118u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x16711c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16711cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167120: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x167120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x167124: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x167124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x167128: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x167128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x16712c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x16712cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x167130: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x167130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x167134: 0xc05b5c6  jal         func_16D718
    ctx->pc = 0x167134u;
    SET_GPR_U32(ctx, 31, 0x16713Cu);
    ctx->pc = 0x167138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167134u;
    // 0x167138: 0xae030068  sw          $v1, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16D718u, 0x167134u, 0x16713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16713Cu;
label_16713c:
    // 0x16713c: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x16713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x167140: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x167140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x167144: 0xa2000051  sb          $zero, 0x51($s0)
    ctx->pc = 0x167144u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x167148: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x167148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x16714c: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x16714cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x167150: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x167150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x167154: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x167154u;
    {
        const bool branch_taken_0x167154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x167158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167154u;
        // 0x167158: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167154) {
            ctx->pc = 0x167164u;
            goto label_167164;
        }
    }
    ctx->pc = 0x16715Cu;
    // 0x16715c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16715Cu;
    {
        const bool branch_taken_0x16715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16715Cu;
        // 0x167160: 0xe6140088  swc1        $f20, 0x88($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16715c) {
            ctx->pc = 0x167168u;
            goto label_167168;
        }
    }
    ctx->pc = 0x167164u;
label_167164:
    // 0x167164: 0xac4006c8  sw          $zero, 0x6C8($v0)
    ctx->pc = 0x167164u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1736), GPR_U32(ctx, 0));
label_167168:
    // 0x167168: 0x24120130  addiu       $s2, $zero, 0x130
    ctx->pc = 0x167168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
    // 0x16716c: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x16716cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167170: 0x2b21818  mult        $v1, $s5, $s2
    ctx->pc = 0x167170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x167174: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x167174u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167178: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x167178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16717c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167180: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x167180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167184: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x167184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x167188: 0x24420640  addiu       $v0, $v0, 0x640
    ctx->pc = 0x167188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1600));
    // 0x16718c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x16718cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x167190: 0xa4430098  sh          $v1, 0x98($v0)
    ctx->pc = 0x167190u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 152), (uint16_t)GPR_U32(ctx, 3));
    // 0x167194: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x167194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x167198: 0xa45000a6  sh          $s0, 0xA6($v0)
    ctx->pc = 0x167198u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 16));
    // 0x16719c: 0xa443009a  sh          $v1, 0x9A($v0)
    ctx->pc = 0x16719cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 154), (uint16_t)GPR_U32(ctx, 3));
    // 0x1671a0: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1671a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1671a4: 0xa4400090  sh          $zero, 0x90($v0)
    ctx->pc = 0x1671a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 0));
    // 0x1671a8: 0xa443009e  sh          $v1, 0x9E($v0)
    ctx->pc = 0x1671a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 158), (uint16_t)GPR_U32(ctx, 3));
    // 0x1671ac: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1671acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1671b0: 0xa4500096  sh          $s0, 0x96($v0)
    ctx->pc = 0x1671b0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 16));
    // 0x1671b4: 0xa44300a4  sh          $v1, 0xA4($v0)
    ctx->pc = 0x1671b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
    // 0x1671b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1671b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1671bc: 0xa450009c  sh          $s0, 0x9C($v0)
    ctx->pc = 0x1671bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 156), (uint16_t)GPR_U32(ctx, 16));
    // 0x1671c0: 0xa4430092  sh          $v1, 0x92($v0)
    ctx->pc = 0x1671c0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 146), (uint16_t)GPR_U32(ctx, 3));
    // 0x1671c4: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1671c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1671c8: 0xa45400a0  sh          $s4, 0xA0($v0)
    ctx->pc = 0x1671c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 20));
    // 0x1671cc: 0xa4430094  sh          $v1, 0x94($v0)
    ctx->pc = 0x1671ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 3));
    // 0x1671d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1671d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1671d4: 0xc05a2f8  jal         func_168BE0
    ctx->pc = 0x1671D4u;
    SET_GPR_U32(ctx, 31, 0x1671DCu);
    ctx->pc = 0x1671D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1671D4u;
    // 0x1671d8: 0xa44300a2  sh          $v1, 0xA2($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 162), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168BE0u, 0x1671D4u, 0x1671DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1671DCu;
label_1671dc:
    // 0x1671dc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1671dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1671e0: 0x12620017  beq         $s3, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1671E0u;
    {
        const bool branch_taken_0x1671e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1671E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671E0u;
        // 0x1671e4: 0x2a620005  slti        $v0, $s3, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671e0) {
            ctx->pc = 0x167240u;
            goto label_167240;
        }
    }
    ctx->pc = 0x1671E8u;
    // 0x1671e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1671E8u;
    {
        const bool branch_taken_0x1671e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1671e8) {
            ctx->pc = 0x1671ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1671E8u;
            // 0x1671ec: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167200u;
            goto label_167200;
        }
    }
    ctx->pc = 0x1671F0u;
    // 0x1671f0: 0x12700008  beq         $s3, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1671F0u;
    {
        const bool branch_taken_0x1671f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x1671F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671F0u;
        // 0x1671f4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671f0) {
            ctx->pc = 0x167214u;
            goto label_167214;
        }
    }
    ctx->pc = 0x1671F8u;
    // 0x1671f8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1671F8u;
    {
        const bool branch_taken_0x1671f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1671FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1671F8u;
        // 0x1671fc: 0x7bb100a0  lq          $s1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1671f8) {
            ctx->pc = 0x167278u;
            goto label_167278;
        }
    }
    ctx->pc = 0x167200u;
label_167200:
    // 0x167200: 0x1662001b  bne         $s3, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x167200u;
    {
        const bool branch_taken_0x167200 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x167204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167200u;
        // 0x167204: 0x2b21818  mult        $v1, $s5, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167200) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167208u;
    // 0x167208: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x167208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x16720c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16720Cu;
    {
        const bool branch_taken_0x16720c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16720Cu;
        // 0x167210: 0xac5406cc  sw          $s4, 0x6CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1740), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16720c) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167214u;
label_167214:
    // 0x167214: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x167214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x167218: 0x240403e8  addiu       $a0, $zero, 0x3E8
    ctx->pc = 0x167218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x16721c: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x16721cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x167220: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x167220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x167224: 0x2b21018  mult        $v0, $s5, $s2
    ctx->pc = 0x167224u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x167228: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x167228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16722c: 0x8ca2b734  lw          $v0, -0x48CC($a1)
    ctx->pc = 0x16722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294948660)));
    // 0x167230: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x167230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x167234: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x167234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167238: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x167238u;
    {
        const bool branch_taken_0x167238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167238u;
        // 0x16723c: 0xacc406bc  sw          $a0, 0x6BC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 1724), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167238) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167240u;
label_167240:
    // 0x167240: 0x2b21818  mult        $v1, $s5, $s2
    ctx->pc = 0x167240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x167244: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x167244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x167248: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x167248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x16724c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16724Cu;
    {
        const bool branch_taken_0x16724c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16724Cu;
        // 0x167250: 0xac4306a8  sw          $v1, 0x6A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16724c) {
            ctx->pc = 0x167270u;
            goto label_167270;
        }
    }
    ctx->pc = 0x167254u;
label_167254:
    // 0x167254: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x167254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x167258: 0x2ac03  sra         $s5, $v0, 16
    ctx->pc = 0x167258u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16725c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x16725cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x167260: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x167260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x167264: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x167264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x167268: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x167268u;
    {
        const bool branch_taken_0x167268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167268u;
        // 0x16726c: 0x26520130  addiu       $s2, $s2, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167268) {
            ctx->pc = 0x167080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167080;
        }
    }
    ctx->pc = 0x167270u;
label_167270:
    // 0x167270: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x167270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x167274: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x167274u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_167278:
    // 0x167278: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x167278u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16727c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x16727cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x167280: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x167280u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x167284: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x167284u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x167288: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x167288u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16728c: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x16728cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167290: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x167290u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167294: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x167298: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x167298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16729c: 0x3e00008  jr          $ra
    ctx->pc = 0x16729Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1672A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16729Cu;
        // 0x1672a0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16729Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1672A4u;
    // 0x1672a4: 0x0  nop
    ctx->pc = 0x1672a4u;
    // NOP
    ctx->pc = 0x1672a8u;
}
