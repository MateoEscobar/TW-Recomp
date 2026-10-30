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

// Function: sub_00214E68
// Address: 0x214e68 - 0x214ee0
void sub_00214E68_0x214e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00214E68_0x214e68");
#endif

    switch (ctx->pc) {
        case 0x214e8cu: goto label_214e8c;
        case 0x214ec4u: goto label_214ec4;
        default: break;
    }

    ctx->pc = 0x214e68u;

    // 0x214e68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x214e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x214e6c: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x214e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x214e70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x214e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x214e74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x214e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x214e78: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x214e78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x214e7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x214e7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214e80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x214e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x214e84: 0xc060a30  jal         func_1828C0
    ctx->pc = 0x214E84u;
    SET_GPR_U32(ctx, 31, 0x214E8Cu);
    ctx->pc = 0x214E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214E84u;
    // 0x214e88: 0x8e04cd4c  lw          $a0, -0x32B4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x214E84u, 0x214E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214E8Cu;
label_214e8c:
    // 0x214e8c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x214e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x214e90: 0x8e04cd4c  lw          $a0, -0x32B4($s0)
    ctx->pc = 0x214e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294954316)));
    // 0x214e94: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x214e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x214e98: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x214e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x214e9c: 0x3c014604  lui         $at, 0x4604
    ctx->pc = 0x214e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17924 << 16));
    // 0x214ea0: 0x3421d000  ori         $at, $at, 0xD000
    ctx->pc = 0x214ea0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53248);
    // 0x214ea4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x214ea4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x214ea8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x214ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x214eac: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x214eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x214eb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x214eb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214eb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x214eb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x214eb8: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x214eb8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x214ebc: 0xc062bb0  jal         func_18AEC0
    ctx->pc = 0x214EBCu;
    SET_GPR_U32(ctx, 31, 0x214EC4u);
    ctx->pc = 0x214EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x214EBCu;
    // 0x214ec0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18AEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18AEC0u, 0x214EBCu, 0x214EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x214EC4u;
label_214ec4:
    // 0x214ec4: 0xae220070  sw          $v0, 0x70($s1)
    ctx->pc = 0x214ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
    // 0x214ec8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x214ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x214ecc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x214eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x214ed0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x214ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x214ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x214ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214ED4u;
        // 0x214ed8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214EDCu;
    // 0x214edc: 0x0  nop
    ctx->pc = 0x214edcu;
    // NOP
    ctx->pc = 0x214ee0u;
}
