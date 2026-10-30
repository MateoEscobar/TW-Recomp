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

// Function: sub_0027FD68
// Address: 0x27fd68 - 0x27ffa0
void sub_0027FD68_0x27fd68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027FD68_0x27fd68");
#endif

    switch (ctx->pc) {
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fea8u: goto label_27fea8;
        case 0x27febcu: goto label_27febc;
        case 0x27feccu: goto label_27fecc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff78u: goto label_27ff78;
        default: break;
    }

    ctx->pc = 0x27fd68u;

    // 0x27fd68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27fd68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27fd6c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x27fd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x27fd70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27fd70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x27fd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x27fd78: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x27fd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x27fd7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27fd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27fd80: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x27fd80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27fd84: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x27FD84u;
    SET_GPR_U32(ctx, 31, 0x27FD8Cu);
    ctx->pc = 0x27FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD84u;
    // 0x27fd88: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x27FD84u, 0x27FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD8Cu;
label_27fd8c:
    // 0x27fd8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27fd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd90: 0xc0e409a  jal         func_390268
    ctx->pc = 0x27FD90u;
    SET_GPR_U32(ctx, 31, 0x27FD98u);
    ctx->pc = 0x27FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FD90u;
    // 0x27fd94: 0x260400c4  addiu       $a0, $s0, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x27FD90u, 0x27FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD98u;
label_27fd98:
    // 0x27fd98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27fd98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fd9c: 0x12200077  beqz        $s1, . + 4 + (0x77 << 2)
    ctx->pc = 0x27FD9Cu;
    {
        const bool branch_taken_0x27fd9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FD9Cu;
        // 0x27fda0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd9c) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FDA4u;
    // 0x27fda4: 0xc051fbe  jal         func_147EF8
    ctx->pc = 0x27FDA4u;
    SET_GPR_U32(ctx, 31, 0x27FDACu);
    ctx->pc = 0x27FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDA4u;
    // 0x27fda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF8u, 0x27FDA4u, 0x27FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDACu;
label_27fdac:
    // 0x27fdac: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x27FDACu;
    {
        const bool branch_taken_0x27fdac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDACu;
        // 0x27fdb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdac) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FDB4u;
    // 0x27fdb4: 0xc09ef7e  jal         func_27BDF8
    ctx->pc = 0x27FDB4u;
    SET_GPR_U32(ctx, 31, 0x27FDBCu);
    ctx->pc = 0x27FDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDB4u;
    // 0x27fdb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BDF8u, 0x27FDB4u, 0x27FDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDBCu;
label_27fdbc:
    // 0x27fdbc: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x27FDBCu;
    {
        const bool branch_taken_0x27fdbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDBCu;
        // 0x27fdc0: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdbc) {
            ctx->pc = 0x27FE6Cu;
            goto label_27fe6c;
        }
    }
    ctx->pc = 0x27FDC4u;
    // 0x27fdc4: 0xc08963c  jal         func_2258F0
    ctx->pc = 0x27FDC4u;
    SET_GPR_U32(ctx, 31, 0x27FDCCu);
    ctx->pc = 0x27FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDC4u;
    // 0x27fdc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258F0u, 0x27FDC4u, 0x27FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDCCu;
label_27fdcc:
    // 0x27fdcc: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x27FDCCu;
    {
        const bool branch_taken_0x27fdcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FDCCu;
        // 0x27fdd0: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fdcc) {
            ctx->pc = 0x27FE6Cu;
            goto label_27fe6c;
        }
    }
    ctx->pc = 0x27FDD4u;
    // 0x27fdd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27fdd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27fdd8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27fdd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27fddc: 0xc089944  jal         func_226510
    ctx->pc = 0x27FDDCu;
    SET_GPR_U32(ctx, 31, 0x27FDE4u);
    ctx->pc = 0x27FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDDCu;
    // 0x27fde0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226510u, 0x27FDDCu, 0x27FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDE4u;
label_27fde4:
    // 0x27fde4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x27fde4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x27fde8: 0xc088cea  jal         func_2233A8
    ctx->pc = 0x27FDE8u;
    SET_GPR_U32(ctx, 31, 0x27FDF0u);
    ctx->pc = 0x27FDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FDE8u;
    // 0x27fdec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233A8u, 0x27FDE8u, 0x27FDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FDF0u;
label_27fdf0:
    // 0x27fdf0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27fdf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27fdf4: 0x0  nop
    ctx->pc = 0x27fdf4u;
    // NOP
    // 0x27fdf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27fdf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27fdfc: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x27fdfcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x27fe00: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x27fe00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27fe04: 0x0  nop
    ctx->pc = 0x27fe04u;
    // NOP
    // 0x27fe08: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x27FE08u;
    {
        const bool branch_taken_0x27fe08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27fe08) {
            ctx->pc = 0x27FE0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27FE08u;
            // 0x27fe0c: 0x3c0505c7  lui         $a1, 0x5C7 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27FE6Cu;
            goto label_27fe6c;
        }
    }
    ctx->pc = 0x27FE10u;
    // 0x27fe10: 0xc088cea  jal         func_2233A8
    ctx->pc = 0x27FE10u;
    SET_GPR_U32(ctx, 31, 0x27FE18u);
    ctx->pc = 0x27FE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE10u;
    // 0x27fe14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2233A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2233A8u, 0x27FE10u, 0x27FE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE18u;
label_27fe18:
    // 0x27fe18: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27fe18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27fe1c: 0x0  nop
    ctx->pc = 0x27fe1cu;
    // NOP
    // 0x27fe20: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x27fe20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x27fe24: 0x460cab03  div.s       $f12, $f21, $f12
    ctx->pc = 0x27fe24u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
    // 0x27fe28: 0xc089912  jal         func_226448
    ctx->pc = 0x27FE28u;
    SET_GPR_U32(ctx, 31, 0x27FE30u);
    ctx->pc = 0x27FE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE28u;
    // 0x27fe2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226448u, 0x27FE28u, 0x27FE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE30u;
label_27fe30:
    // 0x27fe30: 0x3c0505c7  lui         $a1, 0x5C7
    ctx->pc = 0x27fe30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1479 << 16));
    // 0x27fe34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe38: 0xc089998  jal         func_226660
    ctx->pc = 0x27FE38u;
    SET_GPR_U32(ctx, 31, 0x27FE40u);
    ctx->pc = 0x27FE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE38u;
    // 0x27fe3c: 0x34a5eee1  ori         $a1, $a1, 0xEEE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61153);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27FE38u, 0x27FE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE40u;
label_27fe40:
    // 0x27fe40: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x27FE40u;
    {
        const bool branch_taken_0x27fe40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE40u;
        // 0x27fe44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe40) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FE48u;
    // 0x27fe48: 0xc088e58  jal         func_223960
    ctx->pc = 0x27FE48u;
    SET_GPR_U32(ctx, 31, 0x27FE50u);
    ctx->pc = 0x27FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE48u;
    // 0x27fe4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x27FE48u, 0x27FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE50u;
label_27fe50:
    // 0x27fe50: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x27fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x27fe54: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x27fe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x27fe58: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x27fe58u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x27fe5c: 0xc09b97e  jal         func_26E5F8
    ctx->pc = 0x27FE5Cu;
    SET_GPR_U32(ctx, 31, 0x27FE64u);
    ctx->pc = 0x27FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE5Cu;
    // 0x27fe60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E5F8u, 0x27FE5Cu, 0x27FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE64u;
label_27fe64:
    // 0x27fe64: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x27FE64u;
    {
        const bool branch_taken_0x27fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE64u;
        // 0x27fe68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe64) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FE6Cu;
label_27fe6c:
    // 0x27fe6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27fe70: 0xc089998  jal         func_226660
    ctx->pc = 0x27FE70u;
    SET_GPR_U32(ctx, 31, 0x27FE78u);
    ctx->pc = 0x27FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE70u;
    // 0x27fe74: 0x34a5eee1  ori         $a1, $a1, 0xEEE1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)61153);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x27FE70u, 0x27FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE78u;
label_27fe78:
    // 0x27fe78: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x27FE78u;
    {
        const bool branch_taken_0x27fe78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FE78u;
        // 0x27fe7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe78) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FE80u;
    // 0x27fe80: 0xc09ef94  jal         func_27BE50
    ctx->pc = 0x27FE80u;
    SET_GPR_U32(ctx, 31, 0x27FE88u);
    ctx->pc = 0x27FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE80u;
    // 0x27fe84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BE50u, 0x27FE80u, 0x27FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE88u;
label_27fe88:
    // 0x27fe88: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27FE88u;
    {
        const bool branch_taken_0x27fe88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe88) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FE90u;
    // 0x27fe90: 0xc08963c  jal         func_2258F0
    ctx->pc = 0x27FE90u;
    SET_GPR_U32(ctx, 31, 0x27FE98u);
    ctx->pc = 0x27FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FE90u;
    // 0x27fe94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2258F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2258F0u, 0x27FE90u, 0x27FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FE98u;
label_27fe98:
    // 0x27fe98: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27FE98u;
    {
        const bool branch_taken_0x27fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe98) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FEA0u;
    // 0x27fea0: 0xc088e58  jal         func_223960
    ctx->pc = 0x27FEA0u;
    SET_GPR_U32(ctx, 31, 0x27FEA8u);
    ctx->pc = 0x27FEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEA0u;
    // 0x27fea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223960u, 0x27FEA0u, 0x27FEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEA8u;
label_27fea8:
    // 0x27fea8: 0x24030068  addiu       $v1, $zero, 0x68
    ctx->pc = 0x27fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x27feac: 0x24050074  addiu       $a1, $zero, 0x74
    ctx->pc = 0x27feacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x27feb0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x27feb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x27feb4: 0xc09b97e  jal         func_26E5F8
    ctx->pc = 0x27FEB4u;
    SET_GPR_U32(ctx, 31, 0x27FEBCu);
    ctx->pc = 0x27FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEB4u;
    // 0x27feb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E5F8u, 0x27FEB4u, 0x27FEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FEBCu;
label_27febc:
    // 0x27febc: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x27FEBCu;
    {
        const bool branch_taken_0x27febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FEBCu;
        // 0x27fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27febc) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FEC4u;
label_27fec4:
    // 0x27fec4: 0xc09efcc  jal         func_27BF30
    ctx->pc = 0x27FEC4u;
    SET_GPR_U32(ctx, 31, 0x27FECCu);
    ctx->pc = 0x27FEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEC4u;
    // 0x27fec8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF30u, 0x27FEC4u, 0x27FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FECCu;
label_27fecc:
    // 0x27fecc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27FECCu;
    {
        const bool branch_taken_0x27fecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fecc) {
            ctx->pc = 0x27FF18u;
            goto label_27ff18;
        }
    }
    ctx->pc = 0x27FED4u;
    // 0x27fed4: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27fed4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27fed8: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27fed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27fedc: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x27fedcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x27fee0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27fee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27fee4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27fee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27fee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27fee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27feec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27feecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27fef0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27FEF0u;
    {
        const bool branch_taken_0x27fef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fef0) {
            ctx->pc = 0x27FF18u;
            goto label_27ff18;
        }
    }
    ctx->pc = 0x27FEF8u;
    // 0x27fef8: 0xc08960c  jal         func_225830
    ctx->pc = 0x27FEF8u;
    SET_GPR_U32(ctx, 31, 0x27FF00u);
    ctx->pc = 0x27FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FEF8u;
    // 0x27fefc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225830u, 0x27FEF8u, 0x27FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF00u;
label_27ff00:
    // 0x27ff00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27FF00u;
    {
        const bool branch_taken_0x27ff00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF00u;
        // 0x27ff04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff00) {
            ctx->pc = 0x27FF18u;
            goto label_27ff18;
        }
    }
    ctx->pc = 0x27FF08u;
    // 0x27ff08: 0xc09b306  jal         func_26CC18
    ctx->pc = 0x27FF08u;
    SET_GPR_U32(ctx, 31, 0x27FF10u);
    ctx->pc = 0x27FF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF08u;
    // 0x27ff0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26CC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CC18u, 0x27FF08u, 0x27FF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF10u;
label_27ff10:
    // 0x27ff10: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x27FF10u;
    {
        const bool branch_taken_0x27ff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF10u;
        // 0x27ff14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff10) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FF18u;
label_27ff18:
    // 0x27ff18: 0xc09efaa  jal         func_27BEA8
    ctx->pc = 0x27FF18u;
    SET_GPR_U32(ctx, 31, 0x27FF20u);
    ctx->pc = 0x27FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF18u;
    // 0x27ff1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BEA8u, 0x27FF18u, 0x27FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF20u;
label_27ff20:
    // 0x27ff20: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x27FF20u;
    {
        const bool branch_taken_0x27ff20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF20u;
        // 0x27ff24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff20) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FF28u;
    // 0x27ff28: 0xde2200e0  ld          $v0, 0xE0($s1)
    ctx->pc = 0x27ff28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x27ff2c: 0x211ba  dsrl        $v0, $v0, 6
    ctx->pc = 0x27ff2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 6);
    // 0x27ff30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27ff30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27ff34: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x27FF34u;
    {
        const bool branch_taken_0x27ff34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF34u;
        // 0x27ff38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff34) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FF3Cu;
    // 0x27ff3c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x27ff3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x27ff40: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x27ff40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x27ff44: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x27ff44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x27ff48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27ff48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x27ff4c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27ff4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x27ff50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x27ff50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x27ff54: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27ff54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27ff58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27FF58u;
    {
        const bool branch_taken_0x27ff58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF58u;
        // 0x27ff5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff58) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FF60u;
    // 0x27ff60: 0xc08960c  jal         func_225830
    ctx->pc = 0x27FF60u;
    SET_GPR_U32(ctx, 31, 0x27FF68u);
    ctx->pc = 0x27FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF60u;
    // 0x27ff64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225830u, 0x27FF60u, 0x27FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF68u;
label_27ff68:
    // 0x27ff68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27FF68u;
    {
        const bool branch_taken_0x27ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF68u;
        // 0x27ff6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ff68) {
            ctx->pc = 0x27FF7Cu;
            goto label_27ff7c;
        }
    }
    ctx->pc = 0x27FF70u;
    // 0x27ff70: 0xc09b454  jal         func_26D150
    ctx->pc = 0x27FF70u;
    SET_GPR_U32(ctx, 31, 0x27FF78u);
    ctx->pc = 0x27FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27FF70u;
    // 0x27ff74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26D150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26D150u, 0x27FF70u, 0x27FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FF78u;
label_27ff78:
    // 0x27ff78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ff7c:
    // 0x27ff7c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x27ff7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27ff80: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x27ff80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27ff84: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x27ff84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ff88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27ff88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ff8c: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x27ff8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27ff90: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x27ff90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27ff94: 0x3e00008  jr          $ra
    ctx->pc = 0x27FF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27FF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27FF94u;
        // 0x27ff98: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FF9Cu;
    // 0x27ff9c: 0x0  nop
    ctx->pc = 0x27ff9cu;
    // NOP
    ctx->pc = 0x27ffa0u;
}
