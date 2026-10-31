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

// Function: sub_002E3588
// Address: 0x2e3588 - 0x2e3630
void sub_002E3588_0x2e3588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3588_0x2e3588");
#endif

    switch (ctx->pc) {
        case 0x2e35d8u: goto label_2e35d8;
        case 0x2e35ecu: goto label_2e35ec;
        case 0x2e3614u: goto label_2e3614;
        default: break;
    }

    ctx->pc = 0x2e3588u;

    // 0x2e3588: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e3588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e358c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e358cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e3590: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2e3590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2e3594: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2e3594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2e3598: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e3598u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e359c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2e359cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2e35a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2e35a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35a4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e35a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e35a8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e35a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e35ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e35acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e35b0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x2e35b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e35b4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2e35b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e35b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e35bc: 0x0  nop
    ctx->pc = 0x2e35bcu;
    // NOP
    // 0x2e35c0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x2E35C0u;
    {
        const bool branch_taken_0x2e35c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E35C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35C0u;
        // 0x2e35c4: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35c0) {
            ctx->pc = 0x2E3600u;
            goto label_2e3600;
        }
    }
    ctx->pc = 0x2E35C8u;
    // 0x2e35c8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2e35c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2e35cc: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2e35ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2e35d0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2E35D0u;
    SET_GPR_U32(ctx, 31, 0x2E35D8u);
    ctx->pc = 0x2E35D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35D0u;
    // 0x2e35d4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2E35D0u, 0x2E35D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35D8u;
label_2e35d8:
    // 0x2e35d8: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2e35d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2e35dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E35DCu;
    {
        const bool branch_taken_0x2e35dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35DCu;
        // 0x2e35e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35dc) {
            ctx->pc = 0x2E3600u;
            goto label_2e3600;
        }
    }
    ctx->pc = 0x2E35E4u;
    // 0x2e35e4: 0xc0b8cf4  jal         func_2E33D0
    ctx->pc = 0x2E35E4u;
    SET_GPR_U32(ctx, 31, 0x2E35ECu);
    ctx->pc = 0x2E35E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E35E4u;
    // 0x2e35e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E33D0u, 0x2E35E4u, 0x2E35ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E35ECu;
label_2e35ec:
    // 0x2e35ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e35ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e35f0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E35F0u;
    {
        const bool branch_taken_0x2e35f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e35f0) {
            ctx->pc = 0x2E35F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E35F0u;
            // 0x2e35f4: 0xc60c002c  lwc1        $f12, 0x2C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E3604u;
            goto label_2e3604;
        }
    }
    ctx->pc = 0x2E35F8u;
    // 0x2e35f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E35F8u;
    {
        const bool branch_taken_0x2e35f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E35FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E35F8u;
        // 0x2e35fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e35f8) {
            ctx->pc = 0x2E3614u;
            goto label_2e3614;
        }
    }
    ctx->pc = 0x2E3600u;
label_2e3600:
    // 0x2e3600: 0xc60c002c  lwc1        $f12, 0x2C($s0)
    ctx->pc = 0x2e3600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2e3604:
    // 0x2e3604: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e3604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3608: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e3608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e360c: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2E360Cu;
    SET_GPR_U32(ctx, 31, 0x2E3614u);
    ctx->pc = 0x2E3610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E360Cu;
    // 0x2e3610: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2E360Cu, 0x2E3614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E3614u;
label_2e3614:
    // 0x2e3614: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2e3614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e3618: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2e3618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e361c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e361cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e3620: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2e3620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e3624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3628: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3628u;
        // 0x2e362c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3630u;
}
