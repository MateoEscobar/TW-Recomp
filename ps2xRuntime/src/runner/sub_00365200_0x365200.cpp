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

// Function: sub_00365200
// Address: 0x365200 - 0x3652b0
void sub_00365200_0x365200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00365200_0x365200");
#endif

    switch (ctx->pc) {
        case 0x36522cu: goto label_36522c;
        case 0x365234u: goto label_365234;
        case 0x365248u: goto label_365248;
        case 0x365250u: goto label_365250;
        case 0x365264u: goto label_365264;
        case 0x365278u: goto label_365278;
        case 0x36528cu: goto label_36528c;
        default: break;
    }

    ctx->pc = 0x365200u;

    // 0x365200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x365200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x365204: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x365204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x365208: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x365208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x36520c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x36520cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x365210: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x365210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365214: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x365214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365218: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x365218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x36521c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x36521cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x365220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x365220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x365224: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365224u;
    SET_GPR_U32(ctx, 31, 0x36522Cu);
    ctx->pc = 0x365228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365224u;
    // 0x365228: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365224u, 0x36522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36522Cu;
label_36522c:
    // 0x36522c: 0xc10b108  jal         func_42C420
    ctx->pc = 0x36522Cu;
    SET_GPR_U32(ctx, 31, 0x365234u);
    ctx->pc = 0x365230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36522Cu;
    // 0x365230: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x36522Cu, 0x365234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365234u;
label_365234:
    // 0x365234: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x365234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365238: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x365238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36523c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x36523cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x365240: 0xc102472  jal         func_4091C8
    ctx->pc = 0x365240u;
    SET_GPR_U32(ctx, 31, 0x365248u);
    ctx->pc = 0x365244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365240u;
    // 0x365244: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4091C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4091C8u, 0x365240u, 0x365248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365248u;
label_365248:
    // 0x365248: 0xc10b108  jal         func_42C420
    ctx->pc = 0x365248u;
    SET_GPR_U32(ctx, 31, 0x365250u);
    ctx->pc = 0x36524Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365248u;
    // 0x36524c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C420u, 0x365248u, 0x365250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365250u;
label_365250:
    // 0x365250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x365250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365258: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x365258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36525c: 0xc102488  jal         func_409220
    ctx->pc = 0x36525Cu;
    SET_GPR_U32(ctx, 31, 0x365264u);
    ctx->pc = 0x365260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36525Cu;
    // 0x365260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x36525Cu, 0x365264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365264u;
label_365264:
    // 0x365264: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x365264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365268: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x365268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36526c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x36526cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x365270: 0xc102488  jal         func_409220
    ctx->pc = 0x365270u;
    SET_GPR_U32(ctx, 31, 0x365278u);
    ctx->pc = 0x365274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365270u;
    // 0x365274: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x409220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x409220u, 0x365270u, 0x365278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365278u;
label_365278:
    // 0x365278: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x365278u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36527c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36527cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x365280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365284: 0xc08e20a  jal         func_238828
    ctx->pc = 0x365284u;
    SET_GPR_U32(ctx, 31, 0x36528Cu);
    ctx->pc = 0x365288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365284u;
    // 0x365288: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238828u, 0x365284u, 0x36528Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36528Cu;
label_36528c:
    // 0x36528c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x36528cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x365290: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x365290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365294: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x365294u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x365298: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x365298u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36529c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x36529cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3652a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3652a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3652a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3652A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3652A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3652A4u;
        // 0x3652a8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3652A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3652ACu;
    // 0x3652ac: 0x0  nop
    ctx->pc = 0x3652acu;
    // NOP
    ctx->pc = 0x3652b0u;
}
