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

// Function: sub_0027AA38
// Address: 0x27aa38 - 0x27ac30
void sub_0027AA38_0x27aa38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AA38_0x27aa38");
#endif

    switch (ctx->pc) {
        case 0x27aa6cu: goto label_27aa6c;
        case 0x27aaa4u: goto label_27aaa4;
        case 0x27aae0u: goto label_27aae0;
        case 0x27ab14u: goto label_27ab14;
        case 0x27abf0u: goto label_27abf0;
        case 0x27ac00u: goto label_27ac00;
        default: break;
    }

    ctx->pc = 0x27aa38u;

    // 0x27aa38: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x27aa38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x27aa3c: 0x30a50780  andi        $a1, $a1, 0x780
    ctx->pc = 0x27aa3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1920);
    // 0x27aa40: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x27aa40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x27aa44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x27aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x27aa48: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x27aa48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x27aa4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27aa4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa50: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x27aa50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x27aa54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x27aa54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27aa58: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x27aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x27aa5c: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27AA5Cu;
    {
        const bool branch_taken_0x27aa5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA5Cu;
        // 0x27aa60: 0xffbf0100  sd          $ra, 0x100($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa5c) {
            ctx->pc = 0x27AA78u;
            goto label_27aa78;
        }
    }
    ctx->pc = 0x27AA64u;
    // 0x27aa64: 0xc087468  jal         func_21D1A0
    ctx->pc = 0x27AA64u;
    SET_GPR_U32(ctx, 31, 0x27AA6Cu);
    ctx->pc = 0x27AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA64u;
    // 0x27aa68: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D1A0u, 0x27AA64u, 0x27AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AA6Cu;
label_27aa6c:
    // 0x27aa6c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x27aa70: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x27AA70u;
    {
        const bool branch_taken_0x27aa70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA70u;
        // 0x27aa74: 0x3c110071  lui         $s1, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa70) {
            ctx->pc = 0x27AB28u;
            goto label_27ab28;
        }
    }
    ctx->pc = 0x27AA78u;
label_27aa78:
    // 0x27aa78: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x27aa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x27aa7c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x27AA7Cu;
    {
        const bool branch_taken_0x27aa7c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AA7Cu;
        // 0x27aa80: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aa7c) {
            ctx->pc = 0x27AABCu;
            goto label_27aabc;
        }
    }
    ctx->pc = 0x27AA84u;
    // 0x27aa84: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x27aa84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x27aa88: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x27aa88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x27aa8c: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x27aa8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27aa90: 0x26224b00  addiu       $v0, $s1, 0x4B00
    ctx->pc = 0x27aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x27aa94: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27aa98: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27aa98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27aa9c: 0xc0cd7dc  jal         func_335F70
    ctx->pc = 0x27AA9Cu;
    SET_GPR_U32(ctx, 31, 0x27AAA4u);
    ctx->pc = 0x27AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AA9Cu;
    // 0x27aaa0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F70u, 0x27AA9Cu, 0x27AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAA4u;
label_27aaa4:
    // 0x27aaa4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x27aaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x27aaa8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27aaa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27aaac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27aaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27aab0: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27aab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x27aab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x27AAB4u;
    {
        const bool branch_taken_0x27aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAB4u;
        // 0x27aab8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aab4) {
            ctx->pc = 0x27AB28u;
            goto label_27ab28;
        }
    }
    ctx->pc = 0x27AABCu;
label_27aabc:
    // 0x27aabc: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27AABCu;
    {
        const bool branch_taken_0x27aabc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x27AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AABCu;
        // 0x27aac0: 0x26500090  addiu       $s0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aabc) {
            ctx->pc = 0x27AAF8u;
            goto label_27aaf8;
        }
    }
    ctx->pc = 0x27AAC4u;
    // 0x27aac4: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x27aac4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x27aac8: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x27aac8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27aacc: 0x26224b00  addiu       $v0, $s1, 0x4B00
    ctx->pc = 0x27aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x27aad0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27aad0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27aad4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27aad8: 0xc0cd7dc  jal         func_335F70
    ctx->pc = 0x27AAD8u;
    SET_GPR_U32(ctx, 31, 0x27AAE0u);
    ctx->pc = 0x27AADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AAD8u;
    // 0x27aadc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F70u, 0x27AAD8u, 0x27AAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AAE0u;
label_27aae0:
    // 0x27aae0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x27aae4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27aae4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27aae8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27aae8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27aaec: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x27aaf0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27AAF0u;
    {
        const bool branch_taken_0x27aaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAF0u;
        // 0x27aaf4: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaf0) {
            ctx->pc = 0x27AB28u;
            goto label_27ab28;
        }
    }
    ctx->pc = 0x27AAF8u;
label_27aaf8:
    // 0x27aaf8: 0x3c110071  lui         $s1, 0x71
    ctx->pc = 0x27aaf8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)113 << 16));
    // 0x27aafc: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x27aafcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27ab00: 0x26224b00  addiu       $v0, $s1, 0x4B00
    ctx->pc = 0x27ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x27ab04: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x27ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x27ab08: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27ab0c: 0xc0cd7dc  jal         func_335F70
    ctx->pc = 0x27AB0Cu;
    SET_GPR_U32(ctx, 31, 0x27AB14u);
    ctx->pc = 0x27AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB0Cu;
    // 0x27ab10: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F70u, 0x27AB0Cu, 0x27AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AB14u;
label_27ab14:
    // 0x27ab14: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x27ab14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x27ab18: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ab18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ab1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ab1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27ab20: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x27ab24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27ab24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27ab28:
    // 0x27ab28: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x27ab28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x27ab2c: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27ab2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x27ab30: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x27ab30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x27ab34: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ab34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ab38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ab38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab3c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x27ab3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ab40: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27ab40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ab44: 0x0  nop
    ctx->pc = 0x27ab44u;
    // NOP
    // 0x27ab48: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x27AB48u;
    {
        const bool branch_taken_0x27ab48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ab48) {
            ctx->pc = 0x27AB6Cu;
            goto label_27ab6c;
        }
    }
    ctx->pc = 0x27AB50u;
    // 0x27ab50: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x27ab50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x27ab54: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ab54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ab58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ab58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab5c: 0x0  nop
    ctx->pc = 0x27ab5cu;
    // NOP
    // 0x27ab60: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27ab60u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x27ab64: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x27ab64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x27ab68: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27ab6c:
    // 0x27ab6c: 0x3c01c049  lui         $at, 0xC049
    ctx->pc = 0x27ab6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49225 << 16));
    // 0x27ab70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ab70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ab74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ab74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab78: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x27ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27ab7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27ab7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27ab80: 0x0  nop
    ctx->pc = 0x27ab80u;
    // NOP
    // 0x27ab84: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x27AB84u;
    {
        const bool branch_taken_0x27ab84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27ab84) {
            ctx->pc = 0x27AB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AB84u;
            // 0x27ab88: 0x8e4200d4  lw          $v0, 0xD4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27ABA8u;
            goto label_27aba8;
        }
    }
    ctx->pc = 0x27AB8Cu;
    // 0x27ab8c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x27ab8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x27ab90: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27ab90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27ab94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ab94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ab98: 0x0  nop
    ctx->pc = 0x27ab98u;
    // NOP
    // 0x27ab9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27ab9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x27aba0: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x27aba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x27aba4: 0x8e4200d4  lw          $v0, 0xD4($s2)
    ctx->pc = 0x27aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_27aba8:
    // 0x27aba8: 0x26294b00  addiu       $t1, $s1, 0x4B00
    ctx->pc = 0x27aba8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 19200));
    // 0x27abac: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x27abacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x27abb0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27abb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x27abb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27abb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27abb8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x27abb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x27abbc: 0xac4000d8  sw          $zero, 0xD8($v0)
    ctx->pc = 0x27abbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 0));
    // 0x27abc0: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x27abc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
    // 0x27abc4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x27abc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x27abc8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27abc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27abcc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x27abccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abd0: 0x86070002  lh          $a3, 0x2($s0)
    ctx->pc = 0x27abd0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27abd4: 0x25089410  addiu       $t0, $t0, -0x6BF0
    ctx->pc = 0x27abd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939664));
    // 0x27abd8: 0xe460096c  swc1        $f0, 0x96C($v1)
    ctx->pc = 0x27abd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x51096Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x51096Cu, _value); } while (0); }
    // 0x27abdc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27abdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27abe0: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x27abe0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x27abe4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27abe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27abe8: 0xc089d66  jal         func_227598
    ctx->pc = 0x27ABE8u;
    SET_GPR_U32(ctx, 31, 0x27ABF0u);
    ctx->pc = 0x27ABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABE8u;
    // 0x27abec: 0xe93821  addu        $a3, $a3, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227598u, 0x27ABE8u, 0x27ABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ABF0u;
label_27abf0:
    // 0x27abf0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27ABF0u;
    {
        const bool branch_taken_0x27abf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27ABF0u;
        // 0x27abf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27abf0) {
            ctx->pc = 0x27AC04u;
            goto label_27ac04;
        }
    }
    ctx->pc = 0x27ABF8u;
    // 0x27abf8: 0xc0e1a34  jal         func_3868D0
    ctx->pc = 0x27ABF8u;
    SET_GPR_U32(ctx, 31, 0x27AC00u);
    ctx->pc = 0x27ABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27ABF8u;
    // 0x27abfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3868D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3868D0u, 0x27ABF8u, 0x27AC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC00u;
label_27ac00:
    // 0x27ac00: 0x8fb30000  lw          $s3, 0x0($sp)
    ctx->pc = 0x27ac00u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_27ac04:
    // 0x27ac04: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x27ac04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac08: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x27ac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x27ac0c: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x27ac0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27ac10: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x27ac10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x27ac14: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x27ac14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x27ac18: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x27ac18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x27ac1c: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC1Cu;
        // 0x27ac20: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC24u;
    // 0x27ac24: 0x0  nop
    ctx->pc = 0x27ac24u;
    // NOP
    // 0x27ac28: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x27ac2c: 0x0  nop
    ctx->pc = 0x27ac2cu;
    // NOP
    ctx->pc = 0x27ac30u;
}
