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

// Function: sub_001712C0
// Address: 0x1712c0 - 0x171540
void sub_001712C0_0x1712c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001712C0_0x1712c0");
#endif

    switch (ctx->pc) {
        case 0x17132cu: goto label_17132c;
        case 0x171398u: goto label_171398;
        case 0x1713a0u: goto label_1713a0;
        case 0x171420u: goto label_171420;
        case 0x17142cu: goto label_17142c;
        case 0x171458u: goto label_171458;
        case 0x1714dcu: goto label_1714dc;
        case 0x1714e8u: goto label_1714e8;
        default: break;
    }

    ctx->pc = 0x1712c0u;

    // 0x1712c0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x1712c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x1712c4: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x1712c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x1712c8: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x1712c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x1712cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1712ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1712d0: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x1712d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x1712d4: 0x7fb30140  sq          $s3, 0x140($sp)
    ctx->pc = 0x1712d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 19));
    // 0x1712d8: 0x7fb40130  sq          $s4, 0x130($sp)
    ctx->pc = 0x1712d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 20));
    // 0x1712dc: 0x7fb50120  sq          $s5, 0x120($sp)
    ctx->pc = 0x1712dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 21));
    // 0x1712e0: 0x7fb60110  sq          $s6, 0x110($sp)
    ctx->pc = 0x1712e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 22));
    // 0x1712e4: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x1712e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x1712e8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x1712e8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1712ec: 0xe7b40180  swc1        $f20, 0x180($sp)
    ctx->pc = 0x1712ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1712f0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1712f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1712f4: 0x10400085  beqz        $v0, . + 4 + (0x85 << 2)
    ctx->pc = 0x1712F4u;
    {
        const bool branch_taken_0x1712f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1712F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1712F4u;
        // 0x1712f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1712f4) {
            ctx->pc = 0x17150Cu;
            goto label_17150c;
        }
    }
    ctx->pc = 0x1712FCu;
    // 0x1712fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x171300: 0x14400082  bnez        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x171300u;
    {
        const bool branch_taken_0x171300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171300u;
        // 0x171304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171300) {
            ctx->pc = 0x17150Cu;
            goto label_17150c;
        }
    }
    ctx->pc = 0x171308u;
    // 0x171308: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x171308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17130c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x17130cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x171310: 0x90640410  lbu         $a0, 0x410($v1)
    ctx->pc = 0x171310u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1040)));
    // 0x171314: 0x1480007d  bnez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x171314u;
    {
        const bool branch_taken_0x171314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x171318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171314u;
        // 0x171318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171314) {
            ctx->pc = 0x17150Cu;
            goto label_17150c;
        }
    }
    ctx->pc = 0x17131Cu;
    // 0x17131c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17131cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x171320: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171324: 0xc0616ac  jal         func_185AB0
    ctx->pc = 0x171324u;
    SET_GPR_U32(ctx, 31, 0x17132Cu);
    ctx->pc = 0x171328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171324u;
    // 0x171328: 0x8c44cd4c  lw          $a0, -0x32B4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x185AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x185AB0u, 0x171324u, 0x17132Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17132Cu;
label_17132c:
    // 0x17132c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17132cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171330: 0x12400076  beqz        $s2, . + 4 + (0x76 << 2)
    ctx->pc = 0x171330u;
    {
        const bool branch_taken_0x171330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x171334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171330u;
        // 0x171334: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171330) {
            ctx->pc = 0x17150Cu;
            goto label_17150c;
        }
    }
    ctx->pc = 0x171338u;
    // 0x171338: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x171338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x17133c: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x17133Cu;
    {
        const bool branch_taken_0x17133c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17133Cu;
        // 0x171340: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17133c) {
            ctx->pc = 0x171508u;
            goto label_171508;
        }
    }
    ctx->pc = 0x171344u;
    // 0x171344: 0x8e10001c  lw          $s0, 0x1C($s0)
    ctx->pc = 0x171344u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x171348: 0x2442b8c0  addiu       $v0, $v0, -0x4740
    ctx->pc = 0x171348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949056));
    // 0x17134c: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x171350: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x171350u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x171354: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x171354u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x171358: 0x78460030  lq          $a2, 0x30($v0)
    ctx->pc = 0x171358u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x17135c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17135cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171360: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x171360u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x171364: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x171368: 0x78440010  lq          $a0, 0x10($v0)
    ctx->pc = 0x171368u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x17136c: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x17136cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x171370: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x171370u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x171374: 0x27b50080  addiu       $s5, $sp, 0x80
    ctx->pc = 0x171374u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x171378: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x171378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x17137c: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x17137cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x171380: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x171380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x171384: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x171384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
    // 0x171388: 0x3c014088  lui         $at, 0x4088
    ctx->pc = 0x171388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16520 << 16));
    // 0x17138c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17138cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x171390: 0x24f40001  addiu       $s4, $a3, 0x1
    ctx->pc = 0x171390u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x171394: 0x0  nop
    ctx->pc = 0x171394u;
    // NOP
label_171398:
    // 0x171398: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x171398u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17139c: 0x0  nop
    ctx->pc = 0x17139cu;
    // NOP
label_1713a0:
    // 0x1713a0: 0x9202006d  lbu         $v0, 0x6D($s0)
    ctx->pc = 0x1713a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 109)));
    // 0x1713a4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1713a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x1713a8: 0x54400050  bnel        $v0, $zero, . + 4 + (0x50 << 2)
    ctx->pc = 0x1713A8u;
    {
        const bool branch_taken_0x1713a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1713a8) {
            ctx->pc = 0x1713ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1713A8u;
            // 0x1713ac: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1714ECu;
            goto label_1714ec;
        }
    }
    ctx->pc = 0x1713B0u;
    // 0x1713b0: 0x9202006b  lbu         $v0, 0x6B($s0)
    ctx->pc = 0x1713b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 107)));
    // 0x1713b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1713b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1713b8: 0x0  nop
    ctx->pc = 0x1713b8u;
    // NOP
    // 0x1713bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1713bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1713c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1713c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1713c4: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1713c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1713c8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1713c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1713cc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1713ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1713d0: 0x9202006c  lbu         $v0, 0x6C($s0)
    ctx->pc = 0x1713d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1713d4: 0xa3a20074  sb          $v0, 0x74($sp)
    ctx->pc = 0x1713d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 2));
    // 0x1713d8: 0x9203006c  lbu         $v1, 0x6C($s0)
    ctx->pc = 0x1713d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1713dc: 0xa3a30075  sb          $v1, 0x75($sp)
    ctx->pc = 0x1713dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x1713e0: 0x9202006c  lbu         $v0, 0x6C($s0)
    ctx->pc = 0x1713e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1713e4: 0xa3a20076  sb          $v0, 0x76($sp)
    ctx->pc = 0x1713e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x1713e8: 0x96030064  lhu         $v1, 0x64($s0)
    ctx->pc = 0x1713e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1713ec: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1713ECu;
    {
        const bool branch_taken_0x1713ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1713F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1713ECu;
        // 0x1713f0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713ec) {
            ctx->pc = 0x171414u;
            goto label_171414;
        }
    }
    ctx->pc = 0x1713F4u;
    // 0x1713f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1713f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1713f8: 0x0  nop
    ctx->pc = 0x1713f8u;
    // NOP
    // 0x1713fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1713fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x171400: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x171400u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x171404: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171404u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x171408: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x171408u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x17140c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17140Cu;
    {
        const bool branch_taken_0x17140c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17140Cu;
        // 0x171410: 0xa3a20077  sb          $v0, 0x77($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17140c) {
            ctx->pc = 0x171418u;
            goto label_171418;
        }
    }
    ctx->pc = 0x171414u;
label_171414:
    // 0x171414: 0xa3b60077  sb          $s6, 0x77($sp)
    ctx->pc = 0x171414u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 119), (uint8_t)GPR_U32(ctx, 22));
label_171418:
    // 0x171418: 0xc060b58  jal         func_182D60
    ctx->pc = 0x171418u;
    SET_GPR_U32(ctx, 31, 0x171420u);
    ctx->pc = 0x17141Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171418u;
    // 0x17141c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182D60u, 0x171418u, 0x171420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171420u;
label_171420:
    // 0x171420: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x171420u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x171424: 0xc06078e  jal         func_181E38
    ctx->pc = 0x171424u;
    SET_GPR_U32(ctx, 31, 0x17142Cu);
    ctx->pc = 0x171428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171424u;
    // 0x171428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x181E38u, 0x171424u, 0x17142Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17142Cu;
label_17142c:
    // 0x17142c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17142cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171430: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x171430u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x171434: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x171434u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x171438: 0x6846000f  ldl         $a2, 0xF($v0)
    ctx->pc = 0x171438u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17143c: 0x6c460008  ldr         $a2, 0x8($v0)
    ctx->pc = 0x17143cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x171440: 0xb3a3006b  sdl         $v1, 0x6B($sp)
    ctx->pc = 0x171440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171444: 0xb7a30064  sdr         $v1, 0x64($sp)
    ctx->pc = 0x171444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171448: 0xb3a60073  sdl         $a2, 0x73($sp)
    ctx->pc = 0x171448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17144c: 0xb7a6006c  sdr         $a2, 0x6C($sp)
    ctx->pc = 0x17144cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x171450: 0xc0cd940  jal         func_336500
    ctx->pc = 0x171450u;
    SET_GPR_U32(ctx, 31, 0x171458u);
    ctx->pc = 0x171454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171450u;
    // 0x171454: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x171450u, 0x171458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171458u;
label_171458:
    // 0x171458: 0xdaaa0000  lqc2        $vf10, 0x0($s5)
    ctx->pc = 0x171458u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x17145c: 0xdaab0010  lqc2        $vf11, 0x10($s5)
    ctx->pc = 0x17145cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x171460: 0xdaac0020  lqc2        $vf12, 0x20($s5)
    ctx->pc = 0x171460u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171464: 0xdaad0030  lqc2        $vf13, 0x30($s5)
    ctx->pc = 0x171464u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x171468: 0xda340000  lqc2        $vf20, 0x0($s1)
    ctx->pc = 0x171468u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17146c: 0xda350010  lqc2        $vf21, 0x10($s1)
    ctx->pc = 0x17146cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x171470: 0xda360020  lqc2        $vf22, 0x20($s1)
    ctx->pc = 0x171470u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x171474: 0xda370030  lqc2        $vf23, 0x30($s1)
    ctx->pc = 0x171474u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x171478: 0x4beaa1bc  vmulax.xyzw $ACC, $vf20, $vf10x
    ctx->pc = 0x171478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17147c: 0x4beaa8bd  vmadday.xyzw $ACC, $vf21, $vf10y
    ctx->pc = 0x17147cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x171480: 0x4beab0be  vmaddaz.xyzw $ACC, $vf22, $vf10z
    ctx->pc = 0x171480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x171484: 0x4beaba8b  vmaddw.xyzw $vf10, $vf23, $vf10w
    ctx->pc = 0x171484u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x171488: 0x4beba1bc  vmulax.xyzw $ACC, $vf20, $vf11x
    ctx->pc = 0x171488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17148c: 0x4beba8bd  vmadday.xyzw $ACC, $vf21, $vf11y
    ctx->pc = 0x17148cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x171490: 0x4bebb0be  vmaddaz.xyzw $ACC, $vf22, $vf11z
    ctx->pc = 0x171490u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x171494: 0x4bebbacb  vmaddw.xyzw $vf11, $vf23, $vf11w
    ctx->pc = 0x171494u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x171498: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x171498u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17149c: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x17149cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1714a0: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x1714a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1714a4: 0x4becbb0b  vmaddw.xyzw $vf12, $vf23, $vf12w
    ctx->pc = 0x1714a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1714a8: 0x4beda1bc  vmulax.xyzw $ACC, $vf20, $vf13x
    ctx->pc = 0x1714a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1714ac: 0x4beda8bd  vmadday.xyzw $ACC, $vf21, $vf13y
    ctx->pc = 0x1714acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1714b0: 0x4bedb0be  vmaddaz.xyzw $ACC, $vf22, $vf13z
    ctx->pc = 0x1714b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x1714b4: 0x4bedbb4b  vmaddw.xyzw $vf13, $vf23, $vf13w
    ctx->pc = 0x1714b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x1714b8: 0xfa2a0000  sqc2        $vf10, 0x0($s1)
    ctx->pc = 0x1714b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x1714bc: 0xfa2b0010  sqc2        $vf11, 0x10($s1)
    ctx->pc = 0x1714bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x1714c0: 0xfa2c0020  sqc2        $vf12, 0x20($s1)
    ctx->pc = 0x1714c0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1714c4: 0xfa2d0030  sqc2        $vf13, 0x30($s1)
    ctx->pc = 0x1714c4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x1714c8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x1714c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1714cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1714ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1714d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714d4: 0xc0cda36  jal         func_3368D8
    ctx->pc = 0x1714D4u;
    SET_GPR_U32(ctx, 31, 0x1714DCu);
    ctx->pc = 0x1714D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714D4u;
    // 0x1714d8: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3368D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3368D8u, 0x1714D4u, 0x1714DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714DCu;
label_1714dc:
    // 0x1714dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1714dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714e0: 0xc060b78  jal         func_182DE0
    ctx->pc = 0x1714E0u;
    SET_GPR_U32(ctx, 31, 0x1714E8u);
    ctx->pc = 0x1714E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1714E0u;
    // 0x1714e4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x182DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182DE0u, 0x1714E0u, 0x1714E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1714E8u;
label_1714e8:
    // 0x1714e8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1714ec:
    // 0x1714ec: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x1714ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1714f0: 0x1440ffab  bnez        $v0, . + 4 + (-0x55 << 2)
    ctx->pc = 0x1714F0u;
    {
        const bool branch_taken_0x1714f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1714F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1714F0u;
        // 0x1714f4: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1714f0) {
            ctx->pc = 0x1713A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1713a0;
        }
    }
    ctx->pc = 0x1714F8u;
    // 0x1714f8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1714f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1714fc: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x1714fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x171500: 0x1440ffa5  bnez        $v0, . + 4 + (-0x5B << 2)
    ctx->pc = 0x171500u;
    {
        const bool branch_taken_0x171500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171500u;
        // 0x171504: 0x24f40001  addiu       $s4, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171500) {
            ctx->pc = 0x171398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_171398;
        }
    }
    ctx->pc = 0x171508u;
label_171508:
    // 0x171508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17150c:
    // 0x17150c: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x17150cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x171510: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x171510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x171514: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x171514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x171518: 0x7bb30140  lq          $s3, 0x140($sp)
    ctx->pc = 0x171518u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17151c: 0x7bb40130  lq          $s4, 0x130($sp)
    ctx->pc = 0x17151cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x171520: 0x7bb50120  lq          $s5, 0x120($sp)
    ctx->pc = 0x171520u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x171524: 0x7bb60110  lq          $s6, 0x110($sp)
    ctx->pc = 0x171524u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x171528: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x171528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x17152c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x17152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x171530: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x171530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x171534: 0x3e00008  jr          $ra
    ctx->pc = 0x171534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171534u;
        // 0x171538: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17153Cu;
    // 0x17153c: 0x0  nop
    ctx->pc = 0x17153cu;
    // NOP
    ctx->pc = 0x171540u;
}
