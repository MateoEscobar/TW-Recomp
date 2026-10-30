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

// Function: sub_0011DCF0
// Address: 0x11dcf0 - 0x11dd78
void sub_0011DCF0_0x11dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DCF0_0x11dcf0");
#endif

    switch (ctx->pc) {
        case 0x11dd1cu: goto label_11dd1c;
        case 0x11dd48u: goto label_11dd48;
        case 0x11dd58u: goto label_11dd58;
        default: break;
    }

    ctx->pc = 0x11dcf0u;

    // 0x11dcf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11dcf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11dcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11dcf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11dcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11dcfc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11dcfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd00: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x11dd00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x11dd04: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11dd04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dd08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dd10: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x11dd10u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x11dd14: 0xc047e78  jal         func_11F9E0
    ctx->pc = 0x11DD14u;
    SET_GPR_U32(ctx, 31, 0x11DD1Cu);
    ctx->pc = 0x11DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD14u;
    // 0x11dd18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11DD14u, 0x11DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD1Cu;
label_11dd1c:
    // 0x11dd1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11dd1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd20: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x11DD20u;
    {
        const bool branch_taken_0x11dd20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD20u;
        // 0x11dd24: 0x3c03006f  lui         $v1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd20) {
            ctx->pc = 0x11DD5Cu;
            goto label_11dd5c;
        }
    }
    ctx->pc = 0x11DD28u;
    // 0x11dd28: 0xe49403fc  swc1        $f20, 0x3FC($a0)
    ctx->pc = 0x11dd28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1020), bits); }
    // 0x11dd2c: 0xac910320  sw          $s1, 0x320($a0)
    ctx->pc = 0x11dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 17));
    // 0x11dd30: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
    // 0x11dd34: 0x52220001  beql        $s1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x11DD34u;
    {
        const bool branch_taken_0x11dd34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x11dd34) {
            ctx->pc = 0x11DD38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11DD34u;
            // 0x11dd38: 0xac8003fc  sw          $zero, 0x3FC($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1020), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11DD3Cu;
            goto label_11dd3c;
        }
    }
    ctx->pc = 0x11DD3Cu;
label_11dd3c:
    // 0x11dd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11dd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dd40: 0xc047f60  jal         func_11FD80
    ctx->pc = 0x11DD40u;
    SET_GPR_U32(ctx, 31, 0x11DD48u);
    ctx->pc = 0x11DD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD40u;
    // 0x11dd44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x11DD40u, 0x11DD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD48u;
label_11dd48:
    // 0x11dd48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11DD48u;
    {
        const bool branch_taken_0x11dd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD48u;
        // 0x11dd4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd48) {
            ctx->pc = 0x11DD5Cu;
            goto label_11dd5c;
        }
    }
    ctx->pc = 0x11DD50u;
    // 0x11dd50: 0xc047f60  jal         func_11FD80
    ctx->pc = 0x11DD50u;
    SET_GPR_U32(ctx, 31, 0x11DD58u);
    ctx->pc = 0x11DD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11DD50u;
    // 0x11dd54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FD80u, 0x11DD50u, 0x11DD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11DD58u;
label_11dd58:
    // 0x11dd58: 0xac5101e8  sw          $s1, 0x1E8($v0)
    ctx->pc = 0x11dd58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 488), GPR_U32(ctx, 17));
label_11dd5c:
    // 0x11dd5c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11dd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dd60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11dd60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dd68: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x11dd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11dd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11DD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD6Cu;
        // 0x11dd70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11DD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11DD74u;
    // 0x11dd74: 0x0  nop
    ctx->pc = 0x11dd74u;
    // NOP
    ctx->pc = 0x11dd78u;
}
