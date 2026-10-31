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

// Function: sub_0010A008
// Address: 0x10a008 - 0x10a168
void sub_0010A008_0x10a008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A008_0x10a008");
#endif

    switch (ctx->pc) {
        case 0x10a024u: goto label_10a024;
        case 0x10a084u: goto label_10a084;
        case 0x10a094u: goto label_10a094;
        case 0x10a0ccu: goto label_10a0cc;
        case 0x10a0dcu: goto label_10a0dc;
        case 0x10a0ecu: goto label_10a0ec;
        case 0x10a0fcu: goto label_10a0fc;
        case 0x10a110u: goto label_10a110;
        case 0x10a130u: goto label_10a130;
        case 0x10a140u: goto label_10a140;
        default: break;
    }

    ctx->pc = 0x10a008u;

    // 0x10a008: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10a008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10a00c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10a010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10a010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10a014: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10a014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a018: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x10a018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x10a01c: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x10A01Cu;
    SET_GPR_U32(ctx, 31, 0x10A024u);
    ctx->pc = 0x10A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A01Cu;
    // 0x10a020: 0xc60c0028  lwc1        $f12, 0x28($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x10A01Cu, 0x10A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A024u;
label_10a024:
    // 0x10a024: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10A024u;
    {
        const bool branch_taken_0x10a024 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A024u;
        // 0x10a028: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a024) {
            ctx->pc = 0x10A040u;
            goto label_10a040;
        }
    }
    ctx->pc = 0x10A02Cu;
    // 0x10a02c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10a02cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a030: 0x0  nop
    ctx->pc = 0x10a030u;
    // NOP
    // 0x10a034: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10a034u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10a038: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10A038u;
    {
        const bool branch_taken_0x10a038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A038u;
        // 0x10a03c: 0xc6000028  lwc1        $f0, 0x28($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a038) {
            ctx->pc = 0x10A05Cu;
            goto label_10a05c;
        }
    }
    ctx->pc = 0x10A040u;
label_10a040:
    // 0x10a040: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10a044: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x10a044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10a048: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x10a048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10a04c: 0x0  nop
    ctx->pc = 0x10a04cu;
    // NOP
    // 0x10a050: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x10a050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x10a054: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x10a054u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x10a058: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x10a058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_10a05c:
    // 0x10a05c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x10a05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x10a060: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10a060u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10a064: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10a064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10a068: 0x460c0501  sub.s       $f20, $f0, $f12
    ctx->pc = 0x10a068u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x10a06c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x10a06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a070: 0x0  nop
    ctx->pc = 0x10a070u;
    // NOP
    // 0x10a074: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x10A074u;
    {
        const bool branch_taken_0x10a074 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a074) {
            ctx->pc = 0x10A0A4u;
            goto label_10a0a4;
        }
    }
    ctx->pc = 0x10A07Cu;
    // 0x10a07c: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10A07Cu;
    SET_GPR_U32(ctx, 31, 0x10A084u);
    ctx->pc = 0x10A080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A07Cu;
    // 0x10a080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10A07Cu, 0x10A084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A084u;
label_10a084:
    // 0x10a084: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a084u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a088: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10a088u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10a08c: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10A08Cu;
    SET_GPR_U32(ctx, 31, 0x10A094u);
    ctx->pc = 0x10A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A08Cu;
    // 0x10a090: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10A08Cu, 0x10A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A094u;
label_10a094:
    // 0x10a094: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x10A094u;
    {
        const bool branch_taken_0x10a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A094u;
        // 0x10a098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a094) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A09Cu;
    // 0x10a09c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x10A09Cu;
    {
        const bool branch_taken_0x10a09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A09Cu;
        // 0x10a0a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a09c) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A0A4u;
label_10a0a4:
    // 0x10a0a4: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x10a0a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x10a0a8: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x10a0a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x10a0ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10a0acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10a0b0: 0x0  nop
    ctx->pc = 0x10a0b0u;
    // NOP
    // 0x10a0b4: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x10a0b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a0b8: 0x0  nop
    ctx->pc = 0x10a0b8u;
    // NOP
    // 0x10a0bc: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x10A0BCu;
    {
        const bool branch_taken_0x10a0bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a0bc) {
            ctx->pc = 0x10A118u;
            goto label_10a118;
        }
    }
    ctx->pc = 0x10A0C4u;
    // 0x10a0c4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10A0C4u;
    SET_GPR_U32(ctx, 31, 0x10A0CCu);
    ctx->pc = 0x10A0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0C4u;
    // 0x10a0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10A0C4u, 0x10A0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0CCu;
label_10a0cc:
    // 0x10a0cc: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x10a0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x10a0d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10a0d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10a0d4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10A0D4u;
    SET_GPR_U32(ctx, 31, 0x10A0DCu);
    ctx->pc = 0x10A0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0D4u;
    // 0x10a0d8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10A0D4u, 0x10A0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0DCu;
label_10a0dc:
    // 0x10a0dc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x10A0DCu;
    {
        const bool branch_taken_0x10a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0DCu;
        // 0x10a0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0dc) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A0E4u;
    // 0x10a0e4: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10A0E4u;
    SET_GPR_U32(ctx, 31, 0x10A0ECu);
    ctx->pc = 0x10A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0E4u;
    // 0x10a0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10A0E4u, 0x10A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0ECu;
label_10a0ec:
    // 0x10a0ec: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x10a0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x10a0f0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10a0f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10a0f4: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10A0F4u;
    SET_GPR_U32(ctx, 31, 0x10A0FCu);
    ctx->pc = 0x10A0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A0F4u;
    // 0x10a0f8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10A0F4u, 0x10A0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A0FCu;
label_10a0fc:
    // 0x10a0fc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x10A0FCu;
    {
        const bool branch_taken_0x10a0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A0FCu;
        // 0x10a100: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a0fc) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A104u;
    // 0x10a104: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10a104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a108: 0xc04152a  jal         func_1054A8
    ctx->pc = 0x10A108u;
    SET_GPR_U32(ctx, 31, 0x10A110u);
    ctx->pc = 0x10A10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A108u;
    // 0x10a10c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054A8u, 0x10A108u, 0x10A110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A110u;
label_10a110:
    // 0x10a110: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x10A110u;
    {
        const bool branch_taken_0x10a110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A110u;
        // 0x10a114: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a110) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A118u;
label_10a118:
    // 0x10a118: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10a118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10a11c: 0x0  nop
    ctx->pc = 0x10a11cu;
    // NOP
    // 0x10a120: 0x4502000b  bc1fl       . + 4 + (0xB << 2)
    ctx->pc = 0x10A120u;
    {
        const bool branch_taken_0x10a120 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10a120) {
            ctx->pc = 0x10A124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A120u;
            // 0x10a124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A128u;
    // 0x10a128: 0xc0420dc  jal         func_108370
    ctx->pc = 0x10A128u;
    SET_GPR_U32(ctx, 31, 0x10A130u);
    ctx->pc = 0x10A12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A128u;
    // 0x10a12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108370u, 0x10A128u, 0x10A130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A130u;
label_10a130:
    // 0x10a130: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10a130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10a134: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10a134u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10a138: 0xc041338  jal         func_104CE0
    ctx->pc = 0x10A138u;
    SET_GPR_U32(ctx, 31, 0x10A140u);
    ctx->pc = 0x10A13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A138u;
    // 0x10a13c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104CE0u, 0x10A138u, 0x10A140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10A140u;
label_10a140:
    // 0x10a140: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10a140u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10a144: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10A144u;
    {
        const bool branch_taken_0x10a144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A144u;
        // 0x10a148: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a144) {
            ctx->pc = 0x10A150u;
            goto label_10a150;
        }
    }
    ctx->pc = 0x10A14Cu;
    // 0x10a14c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a14cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a150:
    // 0x10a150: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10a150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10a154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10a154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10a158: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x10a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10a15c: 0x3e00008  jr          $ra
    ctx->pc = 0x10A15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A15Cu;
        // 0x10a160: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A164u;
    // 0x10a164: 0x0  nop
    ctx->pc = 0x10a164u;
    // NOP
    ctx->pc = 0x10a168u;
}
