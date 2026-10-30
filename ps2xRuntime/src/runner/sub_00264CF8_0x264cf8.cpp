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

// Function: sub_00264CF8
// Address: 0x264cf8 - 0x264fa0
void sub_00264CF8_0x264cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264CF8_0x264cf8");
#endif

    switch (ctx->pc) {
        case 0x264d30u: goto label_264d30;
        case 0x264d4cu: goto label_264d4c;
        case 0x264d5cu: goto label_264d5c;
        case 0x264da8u: goto label_264da8;
        case 0x264e04u: goto label_264e04;
        case 0x264e84u: goto label_264e84;
        case 0x264f08u: goto label_264f08;
        case 0x264f1cu: goto label_264f1c;
        case 0x264f34u: goto label_264f34;
        case 0x264f58u: goto label_264f58;
        default: break;
    }

    ctx->pc = 0x264cf8u;

    // 0x264cf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x264cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x264cfc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x264cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x264d00: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x264d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x264d04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d08: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x264d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x264d0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d10: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x264d14: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x264d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264d18: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x264d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x264d1c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x264d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x264d20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264d24: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x264d24u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x264d28: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x264D28u;
    SET_GPR_U32(ctx, 31, 0x264D30u);
    ctx->pc = 0x264D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D28u;
    // 0x264d2c: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x264D28u, 0x264D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D30u;
label_264d30:
    // 0x264d30: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x264d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x264d34: 0x50600090  beql        $v1, $zero, . + 4 + (0x90 << 2)
    ctx->pc = 0x264D34u;
    {
        const bool branch_taken_0x264d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d34) {
            ctx->pc = 0x264D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D34u;
            // 0x264d38: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264D3Cu;
    // 0x264d3c: 0x5200008e  beql        $s0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x264D3Cu;
    {
        const bool branch_taken_0x264d3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d3c) {
            ctx->pc = 0x264D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D3Cu;
            // 0x264d40: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264D44u;
    // 0x264d44: 0xc089fac  jal         func_227EB0
    ctx->pc = 0x264D44u;
    SET_GPR_U32(ctx, 31, 0x264D4Cu);
    ctx->pc = 0x264D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D44u;
    // 0x264d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227EB0u, 0x264D44u, 0x264D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D4Cu;
label_264d4c:
    // 0x264d4c: 0x5440008a  bnel        $v0, $zero, . + 4 + (0x8A << 2)
    ctx->pc = 0x264D4Cu;
    {
        const bool branch_taken_0x264d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d4c) {
            ctx->pc = 0x264D50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D4Cu;
            // 0x264d50: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264D54u;
    // 0x264d54: 0xc089f76  jal         func_227DD8
    ctx->pc = 0x264D54u;
    SET_GPR_U32(ctx, 31, 0x264D5Cu);
    ctx->pc = 0x264D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264D54u;
    // 0x264d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227DD8u, 0x264D54u, 0x264D5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264D5Cu;
label_264d5c:
    // 0x264d5c: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x264D5Cu;
    {
        const bool branch_taken_0x264d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d5c) {
            ctx->pc = 0x264D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D5Cu;
            // 0x264d60: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264D64u;
    // 0x264d64: 0xde2300e0  ld          $v1, 0xE0($s1)
    ctx->pc = 0x264d64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x264d68: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x264d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x264d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x264d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264d70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x264d70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x264d74: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264d78: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x264d78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264d7c: 0x5440007e  bnel        $v0, $zero, . + 4 + (0x7E << 2)
    ctx->pc = 0x264D7Cu;
    {
        const bool branch_taken_0x264d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264d7c) {
            ctx->pc = 0x264D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D7Cu;
            // 0x264d80: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264D84u;
    // 0x264d84: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x264d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x264d88: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x264d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x264d8c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x264d8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x264d90: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x264d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x264d94: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x264d94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x264d98: 0x50400077  beql        $v0, $zero, . + 4 + (0x77 << 2)
    ctx->pc = 0x264D98u;
    {
        const bool branch_taken_0x264d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264d98) {
            ctx->pc = 0x264D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264D98u;
            // 0x264d9c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264F78u;
            goto label_264f78;
        }
    }
    ctx->pc = 0x264DA0u;
    // 0x264da0: 0xc088ac6  jal         func_222B18
    ctx->pc = 0x264DA0u;
    SET_GPR_U32(ctx, 31, 0x264DA8u);
    ctx->pc = 0x264DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DA0u;
    // 0x264da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B18u, 0x264DA0u, 0x264DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264DA8u;
label_264da8:
    // 0x264da8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x264DA8u;
    {
        const bool branch_taken_0x264da8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x264DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DA8u;
        // 0x264dac: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264da8) {
            ctx->pc = 0x264DC4u;
            goto label_264dc4;
        }
    }
    ctx->pc = 0x264DB0u;
    // 0x264db0: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x264db0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264db4: 0x0  nop
    ctx->pc = 0x264db4u;
    // NOP
    // 0x264db8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x264db8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264dbc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x264DBCu;
    {
        const bool branch_taken_0x264dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DBCu;
        // 0x264dc0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dbc) {
            ctx->pc = 0x264DE4u;
            goto label_264de4;
        }
    }
    ctx->pc = 0x264DC4u;
label_264dc4:
    // 0x264dc4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x264dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x264dc8: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x264dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x264dcc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x264dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264dd0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264dd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264dd4: 0x0  nop
    ctx->pc = 0x264dd4u;
    // NOP
    // 0x264dd8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x264dd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264ddc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x264ddcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x264de0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x264de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_264de4:
    // 0x264de4: 0xc44008d8  lwc1        $f0, 0x8D8($v0)
    ctx->pc = 0x264de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x264de8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x264de8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x264dec: 0x0  nop
    ctx->pc = 0x264decu;
    // NOP
    // 0x264df0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x264DF0u;
    {
        const bool branch_taken_0x264df0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x264DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DF0u;
        // 0x264df4: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264df0) {
            ctx->pc = 0x264DFCu;
            goto label_264dfc;
        }
    }
    ctx->pc = 0x264DF8u;
    // 0x264df8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x264df8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264dfc:
    // 0x264dfc: 0xc088ad6  jal         func_222B58
    ctx->pc = 0x264DFCu;
    SET_GPR_U32(ctx, 31, 0x264E04u);
    ctx->pc = 0x264E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264DFCu;
    // 0x264e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x222B58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x222B58u, 0x264DFCu, 0x264E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E04u;
label_264e04:
    // 0x264e04: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x264e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x264e08: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264E08u;
    {
        const bool branch_taken_0x264e08 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x264E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E08u;
        // 0x264e0c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e08) {
            ctx->pc = 0x264E24u;
            goto label_264e24;
        }
    }
    ctx->pc = 0x264E10u;
    // 0x264e10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264e14: 0x0  nop
    ctx->pc = 0x264e14u;
    // NOP
    // 0x264e18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x264e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264e1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x264E1Cu;
    {
        const bool branch_taken_0x264e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E1Cu;
        // 0x264e20: 0x822301b0  lb          $v1, 0x1B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e1c) {
            ctx->pc = 0x264E40u;
            goto label_264e40;
        }
    }
    ctx->pc = 0x264E24u;
label_264e24:
    // 0x264e24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x264e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x264e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x264e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264e2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x264e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x264e30: 0x0  nop
    ctx->pc = 0x264e30u;
    // NOP
    // 0x264e34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x264e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x264e38: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x264e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x264e3c: 0x822301b0  lb          $v1, 0x1B0($s1)
    ctx->pc = 0x264e3cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_264e40:
    // 0x264e40: 0x2413005c  addiu       $s3, $zero, 0x5C
    ctx->pc = 0x264e40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x264e44: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x264e44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x264e48: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x264e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x264e4c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x264e4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x264e50: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264e50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264e54: 0x731818  mult        $v1, $v1, $s3
    ctx->pc = 0x264e54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x264e58: 0x8e04489c  lw          $a0, 0x489C($s0)
    ctx->pc = 0x264e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
    // 0x264e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264e60: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x264e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x264e64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x264e68: 0x90620182  lbu         $v0, 0x182($v1)
    ctx->pc = 0x264e68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 386)));
    // 0x264e6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264E6Cu;
    {
        const bool branch_taken_0x264e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E6Cu;
        // 0x264e70: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e6c) {
            ctx->pc = 0x264E7Cu;
            goto label_264e7c;
        }
    }
    ctx->pc = 0x264E74u;
    // 0x264e74: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x264e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x264e78: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x264e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_264e7c:
    // 0x264e7c: 0xc088e78  jal         func_2239E0
    ctx->pc = 0x264E7Cu;
    SET_GPR_U32(ctx, 31, 0x264E84u);
    ctx->pc = 0x264E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264E7Cu;
    // 0x264e80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239E0u, 0x264E7Cu, 0x264E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264E84u;
label_264e84:
    // 0x264e84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264E84u;
    {
        const bool branch_taken_0x264e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E84u;
        // 0x264e88: 0x8e03489c  lw          $v1, 0x489C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e84) {
            ctx->pc = 0x264EA0u;
            goto label_264ea0;
        }
    }
    ctx->pc = 0x264E8Cu;
    // 0x264e8c: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x264e8cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
    // 0x264e90: 0x531018  mult        $v0, $v0, $s3
    ctx->pc = 0x264e90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x264e94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x264e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x264e98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x264E98u;
    {
        const bool branch_taken_0x264e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E98u;
        // 0x264e9c: 0xc441017c  lwc1        $f1, 0x17C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e98) {
            ctx->pc = 0x264EA8u;
            goto label_264ea8;
        }
    }
    ctx->pc = 0x264EA0u;
label_264ea0:
    // 0x264ea0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264ea4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x264ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_264ea8:
    // 0x264ea8: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x264EA8u;
    {
        const bool branch_taken_0x264ea8 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x264EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EA8u;
        // 0x264eac: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ea8) {
            ctx->pc = 0x264EC4u;
            goto label_264ec4;
        }
    }
    ctx->pc = 0x264EB0u;
    // 0x264eb0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x264eb0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264eb4: 0x0  nop
    ctx->pc = 0x264eb4u;
    // NOP
    // 0x264eb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x264eb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x264ebc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x264EBCu;
    {
        const bool branch_taken_0x264ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264EBCu;
        // 0x264ec0: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264ebc) {
            ctx->pc = 0x264EE8u;
            goto label_264ee8;
        }
    }
    ctx->pc = 0x264EC4u;
label_264ec4:
    // 0x264ec4: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x264ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x264ec8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x264ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x264ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x264eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x264ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x264ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264ed4: 0x0  nop
    ctx->pc = 0x264ed4u;
    // NOP
    // 0x264ed8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x264ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x264edc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x264edcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x264ee0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x264ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x264ee4: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x264ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_264ee8:
    // 0x264ee8: 0x244208e0  addiu       $v0, $v0, 0x8E0
    ctx->pc = 0x264ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2272));
    // 0x264eec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264ef0: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x264ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x264ef4: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x264ef4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x264ef8: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x264ef8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x264efc: 0x46156302  mul.s       $f12, $f12, $f21
    ctx->pc = 0x264efcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    // 0x264f00: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x264F00u;
    SET_GPR_U32(ctx, 31, 0x264F08u);
    ctx->pc = 0x264F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F00u;
    // 0x264f04: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x264F00u, 0x264F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F08u;
label_264f08:
    // 0x264f08: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x264f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x264f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x264f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x264f14: 0xc088c98  jal         func_223260
    ctx->pc = 0x264F14u;
    SET_GPR_U32(ctx, 31, 0x264F1Cu);
    ctx->pc = 0x264F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F14u;
    // 0x264f18: 0xae230650  sw          $v1, 0x650($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x264F14u, 0x264F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F1Cu;
label_264f1c:
    // 0x264f1c: 0x8e230650  lw          $v1, 0x650($s1)
    ctx->pc = 0x264f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1616)));
    // 0x264f20: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x264f20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x264f24: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x264F24u;
    {
        const bool branch_taken_0x264f24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F24u;
        // 0x264f28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f24) {
            ctx->pc = 0x264F5Cu;
            goto label_264f5c;
        }
    }
    ctx->pc = 0x264F2Cu;
    // 0x264f2c: 0xc088c98  jal         func_223260
    ctx->pc = 0x264F2Cu;
    SET_GPR_U32(ctx, 31, 0x264F34u);
    ctx->pc = 0x264F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F2Cu;
    // 0x264f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223260u, 0x264F2Cu, 0x264F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F34u;
label_264f34:
    // 0x264f34: 0xae220650  sw          $v0, 0x650($s1)
    ctx->pc = 0x264f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1616), GPR_U32(ctx, 2));
    // 0x264f38: 0x8e820058  lw          $v0, 0x58($s4)
    ctx->pc = 0x264f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 88)));
    // 0x264f3c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264F3Cu;
    {
        const bool branch_taken_0x264f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F3Cu;
        // 0x264f40: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264f3c) {
            ctx->pc = 0x264F5Cu;
            goto label_264f5c;
        }
    }
    ctx->pc = 0x264F44u;
    // 0x264f44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x264f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264f4c: 0xae820058  sw          $v0, 0x58($s4)
    ctx->pc = 0x264f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 88), GPR_U32(ctx, 2));
    // 0x264f50: 0xc08dbb2  jal         func_236EC8
    ctx->pc = 0x264F50u;
    SET_GPR_U32(ctx, 31, 0x264F58u);
    ctx->pc = 0x264F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264F50u;
    // 0x264f54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236EC8u, 0x264F50u, 0x264F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264F58u;
label_264f58:
    // 0x264f58: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x264f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_264f5c:
    // 0x264f5c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x264f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x264f60: 0x8c44b734  lw          $a0, -0x48CC($v0)
    ctx->pc = 0x264f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x264f64: 0x8c650290  lw          $a1, 0x290($v1)
    ctx->pc = 0x264f64u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x510290u));
    // 0x264f68: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x264f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x264f6c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x264f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x264f70: 0xae220648  sw          $v0, 0x648($s1)
    ctx->pc = 0x264f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1608), GPR_U32(ctx, 2));
    // 0x264f74: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x264f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264f78:
    // 0x264f78: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x264f78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x264f7c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x264f7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x264f80: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264f80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x264f84: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x264f84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x264f88: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x264f88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x264f8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x264f90: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x264f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x264f94: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x264f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x264f98: 0x3e00008  jr          $ra
    ctx->pc = 0x264F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264F98u;
        // 0x264f9c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264FA0u;
}
