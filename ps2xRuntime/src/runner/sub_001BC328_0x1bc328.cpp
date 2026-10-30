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

// Function: sub_001BC328
// Address: 0x1bc328 - 0x1bc3b8
void sub_001BC328_0x1bc328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC328_0x1bc328");
#endif

    switch (ctx->pc) {
        case 0x1bc368u: goto label_1bc368;
        case 0x1bc3a0u: goto label_1bc3a0;
        default: break;
    }

    ctx->pc = 0x1bc328u;

    // 0x1bc328: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc32c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x1bc32cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x1bc330: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc334: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x1bc334u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x1bc338: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc33c: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x1bc33cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
    // 0x1bc340: 0x8c66e894  lw          $a2, -0x176C($v1)
    ctx->pc = 0x1bc340u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x50E894u));
    // 0x1bc344: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc348: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bc348u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1bc34c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x1bc34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x1bc350: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1bc350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1bc354: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc354u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x1bc358: 0x46280b  movn        $a1, $v0, $a2
    ctx->pc = 0x1bc358u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x1bc35c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc360: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1BC360u;
    SET_GPR_U32(ctx, 31, 0x1BC368u);
    ctx->pc = 0x1BC364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC360u;
    // 0x1bc364: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BC360u, 0x1BC368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC368u;
label_1bc368:
    // 0x1bc368: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc36c: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1bc370: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc374: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1bc374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1bc378: 0x3c014607  lui         $at, 0x4607
    ctx->pc = 0x1bc378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17927 << 16));
    // 0x1bc37c: 0x3421f000  ori         $at, $at, 0xF000
    ctx->pc = 0x1bc37cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61440);
    // 0x1bc380: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc384: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc384u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc388: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc38c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc38cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc390: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc390u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc394: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1bc394u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc398: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1BC398u;
    SET_GPR_U32(ctx, 31, 0x1BC3A0u);
    ctx->pc = 0x1BC39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC398u;
    // 0x1bc39c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BC398u, 0x1BC3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC3A0u;
label_1bc3a0:
    // 0x1bc3a0: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1bc3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x1bc3a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc3a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc3ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC3B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC3B0u;
        // 0x1bc3b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC3B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC3B8u;
}
