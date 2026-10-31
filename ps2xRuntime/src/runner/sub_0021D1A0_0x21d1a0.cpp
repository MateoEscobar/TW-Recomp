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

// Function: sub_0021D1A0
// Address: 0x21d1a0 - 0x21d228
void sub_0021D1A0_0x21d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D1A0_0x21d1a0");
#endif

    switch (ctx->pc) {
        case 0x21d1b4u: goto label_21d1b4;
        case 0x21d1f8u: goto label_21d1f8;
        case 0x21d208u: goto label_21d208;
        default: break;
    }

    ctx->pc = 0x21d1a0u;

    // 0x21d1a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21d1a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21d1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21d1a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d1ac: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D1ACu;
    SET_GPR_U32(ctx, 31, 0x21D1B4u);
    ctx->pc = 0x21D1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1ACu;
    // 0x21d1b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D1ACu, 0x21D1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1B4u;
label_21d1b4:
    // 0x21d1b4: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d1b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d1b8: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x21d1bc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x21d1bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x21d1c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x21d1c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d1c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d1c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d1cc: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x21d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d1d0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21d1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d1d4: 0x0  nop
    ctx->pc = 0x21d1d4u;
    // NOP
    // 0x21d1d8: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x21D1D8u;
    {
        const bool branch_taken_0x21d1d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1D8u;
        // 0x21d1dc: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1d8) {
            ctx->pc = 0x21D200u;
            goto label_21d200;
        }
    }
    ctx->pc = 0x21D1E0u;
    // 0x21d1e0: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x21d1e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x21d1e4: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x21d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x21d1e8: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x21d1ec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d1f0: 0xc0cd7dc  jal         func_335F70
    ctx->pc = 0x21D1F0u;
    SET_GPR_U32(ctx, 31, 0x21D1F8u);
    ctx->pc = 0x21D1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D1F0u;
    // 0x21d1f4: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335F70u, 0x21D1F0u, 0x21D1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D1F8u;
label_21d1f8:
    // 0x21d1f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x21D1F8u;
    {
        const bool branch_taken_0x21d1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D1F8u;
        // 0x21d1fc: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1f8) {
            ctx->pc = 0x21D21Cu;
            goto label_21d21c;
        }
    }
    ctx->pc = 0x21D200u;
label_21d200:
    // 0x21d200: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x21D200u;
    SET_GPR_U32(ctx, 31, 0x21D208u);
    ctx->pc = 0x21D204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D200u;
    // 0x21d204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x21D200u, 0x21D208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D208u;
label_21d208:
    // 0x21d208: 0x90430018  lbu         $v1, 0x18($v0)
    ctx->pc = 0x21d208u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x21d20c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d210: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d214: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21d214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21d218: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21d218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21d21c:
    // 0x21d21c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d21cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d220: 0x3e00008  jr          $ra
    ctx->pc = 0x21D220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D220u;
        // 0x21d224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D228u;
}
