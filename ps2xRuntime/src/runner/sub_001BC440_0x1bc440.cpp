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

// Function: sub_001BC440
// Address: 0x1bc440 - 0x1bc4b8
void sub_001BC440_0x1bc440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC440_0x1bc440");
#endif

    switch (ctx->pc) {
        case 0x1bc464u: goto label_1bc464;
        case 0x1bc49cu: goto label_1bc49c;
        default: break;
    }

    ctx->pc = 0x1bc440u;

    // 0x1bc440: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bc440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1bc444: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1bc444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1bc448: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1bc448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1bc44c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1bc44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1bc450: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1bc450u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x1bc454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bc454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc458: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bc45c: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x1BC45Cu;
    SET_GPR_U32(ctx, 31, 0x1BC464u);
    ctx->pc = 0x1BC460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC45Cu;
    // 0x1bc460: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x1BC45Cu, 0x1BC464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC464u;
label_1bc464:
    // 0x1bc464: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1bc464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1bc468: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x1bc468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x1bc46c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1bc46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1bc470: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1bc470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc474: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x1bc474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x1bc478: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x1bc478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x1bc47c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc47cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1bc480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc484: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1bc484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bc488: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bc488u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc48c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1bc48cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc490: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1bc490u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bc494: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x1BC494u;
    SET_GPR_U32(ctx, 31, 0x1BC49Cu);
    ctx->pc = 0x1BC498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC494u;
    // 0x1bc498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x1BC494u, 0x1BC49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC49Cu;
label_1bc49c:
    // 0x1bc49c: 0xae220094  sw          $v0, 0x94($s1)
    ctx->pc = 0x1bc49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 2));
    // 0x1bc4a0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1bc4a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bc4a4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1bc4a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc4a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bc4a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bc4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1BC4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BC4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC4ACu;
        // 0x1bc4b0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BC4B4u;
    // 0x1bc4b4: 0x0  nop
    ctx->pc = 0x1bc4b4u;
    // NOP
    ctx->pc = 0x1bc4b8u;
}
