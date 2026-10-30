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

// Function: sub_003E6400
// Address: 0x3e6400 - 0x3e6498
void sub_003E6400_0x3e6400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6400_0x3e6400");
#endif

    switch (ctx->pc) {
        case 0x3e642cu: goto label_3e642c;
        case 0x3e643cu: goto label_3e643c;
        case 0x3e644cu: goto label_3e644c;
        case 0x3e6468u: goto label_3e6468;
        case 0x3e6478u: goto label_3e6478;
        default: break;
    }

    ctx->pc = 0x3e6400u;

    // 0x3e6400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3e6400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3e6404: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3e6404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3e6408: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3e6408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3e640c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e640cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6410: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3e6410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3e6414: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3e6414u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e6418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e641c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e6420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e6420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e6424: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6424u;
    SET_GPR_U32(ctx, 31, 0x3E642Cu);
    ctx->pc = 0x3E6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6424u;
    // 0x3e6428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6424u, 0x3E642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E642Cu;
label_3e642c:
    // 0x3e642c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x3e642cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x3e6430: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3e6430u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3e6434: 0xc0ea13a  jal         func_3A84E8
    ctx->pc = 0x3E6434u;
    SET_GPR_U32(ctx, 31, 0x3E643Cu);
    ctx->pc = 0x3E6438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6434u;
    // 0x3e6438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3E6434u, 0x3E643Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E643Cu;
label_3e643c:
    // 0x3e643c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x3e643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3e6440: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e6440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6444: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x3E6444u;
    SET_GPR_U32(ctx, 31, 0x3E644Cu);
    ctx->pc = 0x3E6448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6444u;
    // 0x3e6448: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E6444u, 0x3E644Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E644Cu;
label_3e644c:
    // 0x3e644c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3e644cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e6450: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3e6450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3e6454: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e6454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e6458: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e6458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e645c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x3e645cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x3e6460: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E6460u;
    SET_GPR_U32(ctx, 31, 0x3E6468u);
    ctx->pc = 0x3E6464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6460u;
    // 0x3e6464: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E6460u, 0x3E6468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6468u;
label_3e6468:
    // 0x3e6468: 0x8e442c7c  lw          $a0, 0x2C7C($s2)
    ctx->pc = 0x3e6468u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11388)));
    // 0x3e646c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3e646cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6470: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E6470u;
    SET_GPR_U32(ctx, 31, 0x3E6478u);
    ctx->pc = 0x3E6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6470u;
    // 0x3e6474: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E6470u, 0x3E6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6478u;
label_3e6478:
    // 0x3e6478: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3e6478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e647c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3e647cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e6480: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e6480u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6484: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3e6484u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6488: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e6488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e648c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E648Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E648Cu;
        // 0x3e6490: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E648Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E6494u;
    // 0x3e6494: 0x0  nop
    ctx->pc = 0x3e6494u;
    // NOP
    ctx->pc = 0x3e6498u;
}
