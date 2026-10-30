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

// Function: sub_00358190
// Address: 0x358190 - 0x358228
void sub_00358190_0x358190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358190_0x358190");
#endif

    switch (ctx->pc) {
        case 0x3581b0u: goto label_3581b0;
        case 0x3581c8u: goto label_3581c8;
        case 0x3581dcu: goto label_3581dc;
        case 0x3581f0u: goto label_3581f0;
        case 0x358200u: goto label_358200;
        case 0x358208u: goto label_358208;
        default: break;
    }

    ctx->pc = 0x358190u;

    // 0x358190: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x358194: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x358198: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x358198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x35819c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3581a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3581a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3581a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3581a8: 0xc1024a0  jal         func_409280
    ctx->pc = 0x3581A8u;
    SET_GPR_U32(ctx, 31, 0x3581B0u);
    ctx->pc = 0x3581ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581A8u;
    // 0x3581ac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409280u, 0x3581A8u, 0x3581B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581B0u;
label_3581b0:
    // 0x3581b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3581b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3581b4: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3581B4u;
    {
        const bool branch_taken_0x3581b4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3581B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581B4u;
        // 0x3581b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581b4) {
            ctx->pc = 0x3581CCu;
            goto label_3581cc;
        }
    }
    ctx->pc = 0x3581BCu;
    // 0x3581bc: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3581bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3581c0: 0xc10241a  jal         func_409068
    ctx->pc = 0x3581C0u;
    SET_GPR_U32(ctx, 31, 0x3581C8u);
    ctx->pc = 0x3581C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581C0u;
    // 0x3581c4: 0x24a59200  addiu       $a1, $a1, -0x6E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3581C0u, 0x3581C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581C8u;
label_3581c8:
    // 0x3581c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3581c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3581cc:
    // 0x3581cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3581ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3581d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3581d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3581d4: 0xc10311e  jal         func_40C478
    ctx->pc = 0x3581D4u;
    SET_GPR_U32(ctx, 31, 0x3581DCu);
    ctx->pc = 0x3581D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581D4u;
    // 0x3581d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C478u, 0x3581D4u, 0x3581DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581DCu;
label_3581dc:
    // 0x3581dc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3581DCu;
    {
        const bool branch_taken_0x3581dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3581E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3581DCu;
        // 0x3581e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581dc) {
            ctx->pc = 0x3581F4u;
            goto label_3581f4;
        }
    }
    ctx->pc = 0x3581E4u;
    // 0x3581e4: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x3581e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x3581e8: 0xc10241a  jal         func_409068
    ctx->pc = 0x3581E8u;
    SET_GPR_U32(ctx, 31, 0x3581F0u);
    ctx->pc = 0x3581ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581E8u;
    // 0x3581ec: 0x24a59118  addiu       $a1, $a1, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409068u, 0x3581E8u, 0x3581F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3581F0u;
label_3581f0:
    // 0x3581f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3581f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3581f4:
    // 0x3581f4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3581f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3581f8: 0xc102472  jal         func_4091C8
    ctx->pc = 0x3581F8u;
    SET_GPR_U32(ctx, 31, 0x358200u);
    ctx->pc = 0x3581FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3581F8u;
    // 0x3581fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x3581F8u, 0x358200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358200u;
label_358200:
    // 0x358200: 0xc10b13c  jal         func_42C4F0
    ctx->pc = 0x358200u;
    SET_GPR_U32(ctx, 31, 0x358208u);
    ctx->pc = 0x358204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358200u;
    // 0x358204: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C4F0u, 0x358200u, 0x358208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358208u;
label_358208:
    // 0x358208: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x358208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x35820c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35820cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358210: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x358210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358214: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358214u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x358218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35821c: 0x3e00008  jr          $ra
    ctx->pc = 0x35821Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35821Cu;
        // 0x358220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35821Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358224u;
    // 0x358224: 0x0  nop
    ctx->pc = 0x358224u;
    // NOP
    ctx->pc = 0x358228u;
}
