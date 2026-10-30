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

// Function: sub_003E71A0
// Address: 0x3e71a0 - 0x3e7248
void sub_003E71A0_0x3e71a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E71A0_0x3e71a0");
#endif

    switch (ctx->pc) {
        case 0x3e71d4u: goto label_3e71d4;
        case 0x3e71dcu: goto label_3e71dc;
        case 0x3e71e8u: goto label_3e71e8;
        case 0x3e71f4u: goto label_3e71f4;
        case 0x3e7214u: goto label_3e7214;
        case 0x3e7224u: goto label_3e7224;
        default: break;
    }

    ctx->pc = 0x3e71a0u;

    // 0x3e71a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e71a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e71a4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3e71a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3e71a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3e71a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3e71ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e71acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3e71b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3e71b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e71b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3e71b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3e71bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3e71bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e71c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e71c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e71c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71c8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3e71c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3e71cc: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E71CCu;
    SET_GPR_U32(ctx, 31, 0x3E71D4u);
    ctx->pc = 0x3E71D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71CCu;
    // 0x3e71d0: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E71CCu, 0x3E71D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71D4u;
label_3e71d4:
    // 0x3e71d4: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E71D4u;
    SET_GPR_U32(ctx, 31, 0x3E71DCu);
    ctx->pc = 0x3E71D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71D4u;
    // 0x3e71d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E71D4u, 0x3E71DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71DCu;
label_3e71dc:
    // 0x3e71dc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e71dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e71e0: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E71E0u;
    SET_GPR_U32(ctx, 31, 0x3E71E8u);
    ctx->pc = 0x3E71E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71E0u;
    // 0x3e71e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E71E0u, 0x3E71E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71E8u;
label_3e71e8:
    // 0x3e71e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3e71e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e71ec: 0xc0e6ec6  jal         func_39BB18
    ctx->pc = 0x3E71ECu;
    SET_GPR_U32(ctx, 31, 0x3E71F4u);
    ctx->pc = 0x3E71F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E71ECu;
    // 0x3e71f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BB18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BB18u, 0x3E71ECu, 0x3E71F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E71F4u;
label_3e71f4:
    // 0x3e71f4: 0xc62000bc  lwc1        $f0, 0xBC($s1)
    ctx->pc = 0x3e71f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e71f8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3e71f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3e71fc: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e71fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e7200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e7204: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3e7204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3e7208: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x3e7208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x3e720c: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E720Cu;
    SET_GPR_U32(ctx, 31, 0x3E7214u);
    ctx->pc = 0x3E7210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E720Cu;
    // 0x3e7210: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E720Cu, 0x3E7214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7214u;
label_3e7214:
    // 0x3e7214: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e7214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e7218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e7218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e721c: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E721Cu;
    SET_GPR_U32(ctx, 31, 0x3E7224u);
    ctx->pc = 0x3E7220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E721Cu;
    // 0x3e7220: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E721Cu, 0x3E7224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E7224u;
label_3e7224:
    // 0x3e7224: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3e7224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e7228: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3e7228u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e722c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3e722cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e7230: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3e7230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e7234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e7234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e7238: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x3e7238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e723c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E723Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E723Cu;
        // 0x3e7240: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E723Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7244u;
    // 0x3e7244: 0x0  nop
    ctx->pc = 0x3e7244u;
    // NOP
    ctx->pc = 0x3e7248u;
}
