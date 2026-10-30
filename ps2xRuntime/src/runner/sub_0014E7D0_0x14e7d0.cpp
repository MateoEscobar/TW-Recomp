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

// Function: sub_0014E7D0
// Address: 0x14e7d0 - 0x14e858
void sub_0014E7D0_0x14e7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E7D0_0x14e7d0");
#endif

    switch (ctx->pc) {
        case 0x14e7ecu: goto label_14e7ec;
        case 0x14e810u: goto label_14e810;
        case 0x14e81cu: goto label_14e81c;
        case 0x14e828u: goto label_14e828;
        case 0x14e830u: goto label_14e830;
        case 0x14e840u: goto label_14e840;
        default: break;
    }

    ctx->pc = 0x14e7d0u;

    // 0x14e7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14e7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14e7d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14e7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14e7d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14e7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14e7dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14e7dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e7e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14e7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14e7e4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14E7E4u;
    SET_GPR_U32(ctx, 31, 0x14E7ECu);
    ctx->pc = 0x14E7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E7E4u;
    // 0x14e7e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14E7E4u, 0x14E7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E7ECu;
label_14e7ec:
    // 0x14e7ec: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14e7f0: 0x12050005  beq         $s0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14E7F0u;
    {
        const bool branch_taken_0x14e7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        ctx->pc = 0x14E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E7F0u;
        // 0x14e7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e7f0) {
            ctx->pc = 0x14E808u;
            goto label_14e808;
        }
    }
    ctx->pc = 0x14E7F8u;
    // 0x14e7f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e7fc: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14e7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14e800: 0xac43bd5c  sw          $v1, -0x42A4($v0)
    ctx->pc = 0x14e800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950236), GPR_U32(ctx, 3));
    // 0x14e804: 0xac85bd74  sw          $a1, -0x428C($a0)
    ctx->pc = 0x14e804u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50BD74u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD74u, _value); } while (0);
label_14e808:
    // 0x14e808: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14E808u;
    SET_GPR_U32(ctx, 31, 0x14E810u);
    ctx->pc = 0x14E80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E808u;
    // 0x14e80c: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14E808u, 0x14E810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E810u;
label_14e810:
    // 0x14e810: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14e810u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14e814: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E814u;
    SET_GPR_U32(ctx, 31, 0x14E81Cu);
    ctx->pc = 0x14E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E814u;
    // 0x14e818: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E814u, 0x14E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E81Cu;
label_14e81c:
    // 0x14e81c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x14e81cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x14e820: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14E820u;
    SET_GPR_U32(ctx, 31, 0x14E828u);
    ctx->pc = 0x14E824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E820u;
    // 0x14e824: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14E820u, 0x14E828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E828u;
label_14e828:
    // 0x14e828: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14E828u;
    SET_GPR_U32(ctx, 31, 0x14E830u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14E828u, 0x14E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E830u;
label_14e830:
    // 0x14e830: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14e830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14e834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e838: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14E838u;
    SET_GPR_U32(ctx, 31, 0x14E840u);
    ctx->pc = 0x14E83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E838u;
    // 0x14e83c: 0xa062c210  sb          $v0, -0x3DF0($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294951440), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14E838u, 0x14E840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E840u;
label_14e840:
    // 0x14e840: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14e840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14e844: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14e844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14e848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e84c: 0x3e00008  jr          $ra
    ctx->pc = 0x14E84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E84Cu;
        // 0x14e850: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E854u;
    // 0x14e854: 0x0  nop
    ctx->pc = 0x14e854u;
    // NOP
    ctx->pc = 0x14e858u;
}
