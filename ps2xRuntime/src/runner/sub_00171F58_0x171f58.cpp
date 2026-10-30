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

// Function: sub_00171F58
// Address: 0x171f58 - 0x1721c8
void sub_00171F58_0x171f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171F58_0x171f58");
#endif

    switch (ctx->pc) {
        case 0x171fb8u: goto label_171fb8;
        case 0x172028u: goto label_172028;
        case 0x172030u: goto label_172030;
        case 0x1720a4u: goto label_1720a4;
        case 0x1720b0u: goto label_1720b0;
        case 0x1720dcu: goto label_1720dc;
        case 0x172160u: goto label_172160;
        case 0x17216cu: goto label_17216c;
        default: break;
    }

    ctx->pc = 0x171f58u;

    // 0x171f58: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x171f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x171f5c: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x171f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x171f60: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x171f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x171f64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x171f64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171f68: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x171f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x171f6c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x171f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x171f70: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x171f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x171f74: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x171f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x171f78: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x171f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x171f7c: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x171f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x171f80: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x171f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x171f84: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x171f84u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x171f88: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x171f88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x171f8c: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x171f8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x171f90: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x171f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x171f94: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x171F94u;
    {
        const bool branch_taken_0x171f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171F94u;
        // 0x171f98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171f94) {
            ctx->pc = 0x172190u;
            goto label_172190;
        }
    }
    ctx->pc = 0x171F9Cu;
    // 0x171f9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x171f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171fa0: 0x1440007b  bnez        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x171FA0u;
    {
        const bool branch_taken_0x171fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FA0u;
        // 0x171fa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fa0) {
            ctx->pc = 0x172190u;
            goto label_172190;
        }
    }
    ctx->pc = 0x171FA8u;
    // 0x171fa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x171fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x171fac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fb0: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x171FB0u;
    SET_GPR_U32(ctx, 31, 0x171FB8u);
    ctx->pc = 0x171FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171FB0u;
    // 0x171fb4: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x171FB0u, 0x171FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171FB8u;
label_171fb8:
    // 0x171fb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x171fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fbc: 0x12400074  beqz        $s2, . + 4 + (0x74 << 2)
    ctx->pc = 0x171FBCu;
    {
        const bool branch_taken_0x171fbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FBCu;
        // 0x171fc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fbc) {
            ctx->pc = 0x172190u;
            goto label_172190;
        }
    }
    ctx->pc = 0x171FC4u;
    // 0x171fc4: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x171fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x171fc8: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x171FC8u;
    {
        const bool branch_taken_0x171fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171FC8u;
        // 0x171fcc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171fc8) {
            ctx->pc = 0x17218Cu;
            goto label_17218c;
        }
    }
    ctx->pc = 0x171FD0u;
    // 0x171fd0: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x171fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x171fd4: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x171fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x171fd8: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x171fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x171fdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x171fdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171fe0: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x171fe0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x171fe4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x171fe4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171fe8: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171fe8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171fec: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x171fecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x171ff0: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x171ff0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x171ff4: 0x241700ff  addiu       $s7, $zero, 0xFF
    ctx->pc = 0x171ff4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x171ff8: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x171ff8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x171ffc: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x171ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x172000: 0x7fa40080  sq          $a0, 0x80($sp)
    ctx->pc = 0x172000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 4));
    // 0x172004: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x172004u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x172008: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x172008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x17200c: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x17200cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x172010: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x172010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x172014: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x172014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x172018: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x172018u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x17201c: 0x3c014088  lui         $at, 0x4088
    ctx->pc = 0x17201cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16520 << 16));
    // 0x172020: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x172020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x172024: 0x24f40001  addiu       $s4, $a3, 0x1
    ctx->pc = 0x172024u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_172028:
    // 0x172028: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x172028u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17202c: 0x0  nop
    ctx->pc = 0x17202cu;
    // NOP
label_172030:
    // 0x172030: 0x92020058  lbu         $v0, 0x58($s0)
    ctx->pc = 0x172030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x172034: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x172034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x172038: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x172038u;
    {
        const bool branch_taken_0x172038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172038) {
            ctx->pc = 0x17203Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172038u;
            // 0x17203c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172170u;
            goto label_172170;
        }
    }
    ctx->pc = 0x172040u;
    // 0x172040: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x172040u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x172044: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x172044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x172048: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x172048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x17204c: 0x92020057  lbu         $v0, 0x57($s0)
    ctx->pc = 0x17204cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
    // 0x172050: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x172050u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x172054: 0x92030057  lbu         $v1, 0x57($s0)
    ctx->pc = 0x172054u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
    // 0x172058: 0xa3a30075  sb          $v1, 0x75($sp)
    ctx->pc = 0x172058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x17205c: 0x92020057  lbu         $v0, 0x57($s0)
    ctx->pc = 0x17205cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 87)));
    // 0x172060: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x172060u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x172064: 0xa3a20076  sb          $v0, 0x76($sp)
    ctx->pc = 0x172064u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x172068: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x172068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x17206c: 0xe7b40058  swc1        $f20, 0x58($sp)
    ctx->pc = 0x17206cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x172070: 0xe6d6000c  swc1        $f22, 0xC($s6)
    ctx->pc = 0x172070u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 12), bits); }
    // 0x172074: 0x96020050  lhu         $v0, 0x50($s0)
    ctx->pc = 0x172074u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x172078: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x172078u;
    {
        const bool branch_taken_0x172078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172078) {
            ctx->pc = 0x17207Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172078u;
            // 0x17207c: 0xa3b70077  sb          $s7, 0x77($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 23));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17209Cu;
            goto label_17209c;
        }
    }
    ctx->pc = 0x172080u;
    // 0x172080: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x172080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x172084: 0x0  nop
    ctx->pc = 0x172084u;
    // NOP
    // 0x172088: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x172088u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x17208c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x17208cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x172090: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x172090u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x172094: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x172094u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x172098: 0xa3a20077  sb          $v0, 0x77($sp)
    ctx->pc = 0x172098u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
label_17209c:
    // 0x17209c: 0xc060b58  jal         func_182D60
    ctx->pc = 0x17209Cu;
    SET_GPR_U32(ctx, 31, 0x1720A4u);
    ctx->pc = 0x1720A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17209Cu;
    // 0x1720a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x17209Cu, 0x1720A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720A4u;
label_1720a4:
    // 0x1720a4: 0x8e050048  lw          $a1, 0x48($s0)
    ctx->pc = 0x1720a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1720a8: 0xc06078e  jal         func_181E38
    ctx->pc = 0x1720A8u;
    SET_GPR_U32(ctx, 31, 0x1720B0u);
    ctx->pc = 0x1720ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720A8u;
    // 0x1720ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x1720A8u, 0x1720B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720B0u;
label_1720b0:
    // 0x1720b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1720b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1720b4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1720b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1720b8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1720b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1720bc: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x1720bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1720c0: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x1720c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1720c4: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x1720c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1720c8: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x1720c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1720cc: 0xb3a60073  sdl         $a2, 0x73($sp)
    ctx->pc = 0x1720ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1720d0: 0xb7a6006c  sdr         $a2, 0x6C($sp)
    ctx->pc = 0x1720d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1720d4: 0xc0cd940  jal         func_336500
    ctx->pc = 0x1720D4u;
    SET_GPR_U32(ctx, 31, 0x1720DCu);
    ctx->pc = 0x1720D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1720D4u;
    // 0x1720d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x1720D4u, 0x1720DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1720DCu;
label_1720dc:
    // 0x1720dc: 0xdaaa0000  lqc2        $vf10, 0x0($s5)
    ctx->pc = 0x1720dcu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1720e0: 0xdaab0010  lqc2        $vf11, 0x10($s5)
    ctx->pc = 0x1720e0u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1720e4: 0xdaac0020  lqc2        $vf12, 0x20($s5)
    ctx->pc = 0x1720e4u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x1720e8: 0xdaad0030  lqc2        $vf13, 0x30($s5)
    ctx->pc = 0x1720e8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1720ec: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x1720ecu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1720f0: 0xda350010  lqc2        $vf21, 0x10($s1)
    ctx->pc = 0x1720f0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1720f4: 0xda360020  lqc2        $vf22, 0x20($s1)
    ctx->pc = 0x1720f4u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1720f8: 0xda370030  lqc2        $vf23, 0x30($s1)
    ctx->pc = 0x1720f8u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1720fc: 0x4beaa1bc  vmulax.xyzw $ACC, $vf20, $vf10x
    ctx->pc = 0x1720fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172100: 0x4beaa8bd  vmadday.xyzw $ACC, $vf21, $vf10y
    ctx->pc = 0x172100u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172104: 0x4beab0be  vmaddaz.xyzw $ACC, $vf22, $vf10z
    ctx->pc = 0x172104u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172108: 0x4beaba8b  vmaddw.xyzw $vf10, $vf23, $vf10w
    ctx->pc = 0x172108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x17210c: 0x4beba1bc  vmulax.xyzw $ACC, $vf20, $vf11x
    ctx->pc = 0x17210cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172110: 0x4beba8bd  vmadday.xyzw $ACC, $vf21, $vf11y
    ctx->pc = 0x172110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172114: 0x4bebb0be  vmaddaz.xyzw $ACC, $vf22, $vf11z
    ctx->pc = 0x172114u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172118: 0x4bebbacb  vmaddw.xyzw $vf11, $vf23, $vf11w
    ctx->pc = 0x172118u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x17211c: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x17211cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172120: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x172120u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172124: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x172124u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172128: 0x4becbb0b  vmaddw.xyzw $vf12, $vf23, $vf12w
    ctx->pc = 0x172128u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x17212c: 0x4beda1bc  vmulax.xyzw $ACC, $vf20, $vf13x
    ctx->pc = 0x17212cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172130: 0x4beda8bd  vmadday.xyzw $ACC, $vf21, $vf13y
    ctx->pc = 0x172130u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172134: 0x4bedb0be  vmaddaz.xyzw $ACC, $vf22, $vf13z
    ctx->pc = 0x172134u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x172138: 0x4bedbb4b  vmaddw.xyzw $vf13, $vf23, $vf13w
    ctx->pc = 0x172138u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x17213c: 0xfa2a0000  sqc2        $vf10, 0x0($s1)
    ctx->pc = 0x17213cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x172140: 0xfa2b0010  sqc2        $vf11, 0x10($s1)
    ctx->pc = 0x172140u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x172144: 0xfa2c0020  sqc2        $vf12, 0x20($s1)
    ctx->pc = 0x172144u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x172148: 0xfa2d0030  sqc2        $vf13, 0x30($s1)
    ctx->pc = 0x172148u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x17214c: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x17214cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x172150: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x172150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x172154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172158: 0xc0cda36  jal         func_3368D8
    ctx->pc = 0x172158u;
    SET_GPR_U32(ctx, 31, 0x172160u);
    ctx->pc = 0x17215Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172158u;
    // 0x17215c: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x172158u, 0x172160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172160u;
label_172160:
    // 0x172160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x172160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172164: 0xc060b78  jal         func_182DE0
    ctx->pc = 0x172164u;
    SET_GPR_U32(ctx, 31, 0x17216Cu);
    ctx->pc = 0x172168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172164u;
    // 0x172168: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x172164u, 0x17216Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17216Cu;
label_17216c:
    // 0x17216c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x17216cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_172170:
    // 0x172170: 0x2e620006  sltiu       $v0, $s3, 0x6
    ctx->pc = 0x172170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x172174: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x172174u;
    {
        const bool branch_taken_0x172174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172174u;
        // 0x172178: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172174) {
            ctx->pc = 0x172030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172030;
        }
    }
    ctx->pc = 0x17217Cu;
    // 0x17217c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x17217cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172180: 0x2ce20006  sltiu       $v0, $a3, 0x6
    ctx->pc = 0x172180u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x172184: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x172184u;
    {
        const bool branch_taken_0x172184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172184u;
        // 0x172188: 0x24f40001  addiu       $s4, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172184) {
            ctx->pc = 0x172028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172028;
        }
    }
    ctx->pc = 0x17218Cu;
label_17218c:
    // 0x17218c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17218cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172190:
    // 0x172190: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x172190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x172194: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x172194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x172198: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x172198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17219c: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x17219cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1721a0: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1721a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1721a4: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1721a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1721a8: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1721a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1721ac: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1721acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1721b0: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x1721b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1721b4: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1721b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1721b8: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1721b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1721bc: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1721bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1721c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1721C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1721C0u;
        // 0x1721c4: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1721C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1721C8u;
}
