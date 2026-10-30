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

// Function: sub_0021D228
// Address: 0x21d228 - 0x21d310
void sub_0021D228_0x21d228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D228_0x21d228");
#endif

    switch (ctx->pc) {
        case 0x21d264u: goto label_21d264;
        case 0x21d2a4u: goto label_21d2a4;
        case 0x21d2b8u: goto label_21d2b8;
        case 0x21d2c4u: goto label_21d2c4;
        case 0x21d2d8u: goto label_21d2d8;
        case 0x21d2ecu: goto label_21d2ec;
        default: break;
    }

    ctx->pc = 0x21d228u;

    // 0x21d228: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21d228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21d22c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21d22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21d230: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21d230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21d234: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21d234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d238: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21d23c: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x21d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x21d240: 0x24a54b00  addiu       $a1, $a1, 0x4B00
    ctx->pc = 0x21d240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19200));
    // 0x21d244: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21d244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d248: 0x86030092  lh          $v1, 0x92($s0)
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21d24c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d250: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x21d250u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21d254: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x21d254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x21d258: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x21d258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x21d25c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D25Cu;
    SET_GPR_U32(ctx, 31, 0x21D264u);
    ctx->pc = 0x21D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D25Cu;
    // 0x21d260: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D25Cu, 0x21D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D264u;
label_21d264:
    // 0x21d264: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d264u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d268: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21d268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x21d26c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21d26cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21d270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d278: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d27c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x21d27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d280: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21d280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d284: 0x0  nop
    ctx->pc = 0x21d284u;
    // NOP
    // 0x21d288: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x21D288u;
    {
        const bool branch_taken_0x21d288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D288u;
        // 0x21d28c: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d288) {
            ctx->pc = 0x21D2E0u;
            goto label_21d2e0;
        }
    }
    ctx->pc = 0x21D290u;
    // 0x21d290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d294: 0x246316c0  addiu       $v1, $v1, 0x16C0
    ctx->pc = 0x21d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5824));
    // 0x21d298: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x21d298u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21d29c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D29Cu;
    SET_GPR_U32(ctx, 31, 0x21D2A4u);
    ctx->pc = 0x21D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D29Cu;
    // 0x21d2a0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D29Cu, 0x21D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2A4u;
label_21d2a4:
    // 0x21d2a4: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d2a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d2a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d2ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d2b0: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x21D2B0u;
    SET_GPR_U32(ctx, 31, 0x21D2B8u);
    ctx->pc = 0x21D2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2B0u;
    // 0x21d2b4: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x21D2B0u, 0x21D2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2B8u;
label_21d2b8:
    // 0x21d2b8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x21d2b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21d2bc: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D2BCu;
    SET_GPR_U32(ctx, 31, 0x21D2C4u);
    ctx->pc = 0x21D2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2BCu;
    // 0x21d2c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D2BCu, 0x21D2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2C4u;
label_21d2c4:
    // 0x21d2c4: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d2c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d2c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d2cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d2d0: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x21D2D0u;
    SET_GPR_U32(ctx, 31, 0x21D2D8u);
    ctx->pc = 0x21D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2D0u;
    // 0x21d2d4: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x21D2D0u, 0x21D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2D8u;
label_21d2d8:
    // 0x21d2d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x21D2D8u;
    {
        const bool branch_taken_0x21d2d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D2D8u;
        // 0x21d2dc: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2d8) {
            ctx->pc = 0x21D2ECu;
            goto label_21d2ec;
        }
    }
    ctx->pc = 0x21D2E0u;
label_21d2e0:
    // 0x21d2e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x21d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x21d2e4: 0xc0cd940  jal         func_336500
    ctx->pc = 0x21D2E4u;
    SET_GPR_U32(ctx, 31, 0x21D2ECu);
    ctx->pc = 0x21D2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D2E4u;
    // 0x21d2e8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x21D2E4u, 0x21D2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D2ECu;
label_21d2ec:
    // 0x21d2ec: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x21d2ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d2f0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x21d2f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d2f4: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21d2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d2f8: 0x7e230000  sq          $v1, 0x0($s1)
    ctx->pc = 0x21d2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 3));
    // 0x21d2fc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21d2fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d300: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21d300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d304: 0x3e00008  jr          $ra
    ctx->pc = 0x21D304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D304u;
        // 0x21d308: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D30Cu;
    // 0x21d30c: 0x0  nop
    ctx->pc = 0x21d30cu;
    // NOP
    ctx->pc = 0x21d310u;
}
