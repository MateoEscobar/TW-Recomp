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

// Function: sub_0014D340
// Address: 0x14d340 - 0x14d398
void sub_0014D340_0x14d340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D340_0x14d340");
#endif

    switch (ctx->pc) {
        case 0x14d38cu: goto label_14d38c;
        default: break;
    }

    ctx->pc = 0x14d340u;

    // 0x14d340: 0x3c0146ff  lui         $at, 0x46FF
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18175 << 16));
    // 0x14d344: 0x3421fe00  ori         $at, $at, 0xFE00
    ctx->pc = 0x14d344u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65024);
    // 0x14d348: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d34c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d34cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d350: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d358: 0xac820b88  sw          $v0, 0xB88($a0)
    ctx->pc = 0x14d358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2952), GPR_U32(ctx, 2));
    // 0x14d35c: 0x46006b42  mul.s       $f13, $f13, $f0
    ctx->pc = 0x14d35cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    // 0x14d360: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x14d360u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x14d364: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x14d364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d368: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x14d368u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d36c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x14d36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d370: 0x46006824  .word       0x46006824                   # cvt.w.s     $f0, $f13 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[13]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d374: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x14d374u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x14d378: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x14d378u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d37c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x14d37cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14d380: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x14d380u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x14d384: 0xc053f36  jal         func_14FCD8
    ctx->pc = 0x14D384u;
    SET_GPR_U32(ctx, 31, 0x14D38Cu);
    ctx->pc = 0x14D388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D384u;
    // 0x14d388: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FCD8u, 0x14D384u, 0x14D38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D38Cu;
label_14d38c:
    // 0x14d38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d390: 0x3e00008  jr          $ra
    ctx->pc = 0x14D390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D390u;
        // 0x14d394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D398u;
}
