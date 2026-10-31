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

// Function: sub_002F4C68
// Address: 0x2f4c68 - 0x2f4cf0
void sub_002F4C68_0x2f4c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F4C68_0x2f4c68");
#endif

    switch (ctx->pc) {
        case 0x2f4ce0u: goto label_2f4ce0;
        default: break;
    }

    ctx->pc = 0x2f4c68u;

    // 0x2f4c68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f4c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f4c6c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2f4c6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f4c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f4c74: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f4c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f4c78: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2F4C78u;
    {
        const bool branch_taken_0x2f4c78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C78u;
        // 0x2f4c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c78) {
            ctx->pc = 0x2F4CACu;
            goto label_2f4cac;
        }
    }
    ctx->pc = 0x2F4C80u;
    // 0x2f4c80: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x2f4c80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2f4c84: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C84u;
    {
        const bool branch_taken_0x2f4c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c84) {
            ctx->pc = 0x2F4C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4C84u;
            // 0x2f4c88: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4C9Cu;
            goto label_2f4c9c;
        }
    }
    ctx->pc = 0x2F4C8Cu;
    // 0x2f4c8c: 0x4c00015  bltz        $a2, . + 4 + (0x15 << 2)
    ctx->pc = 0x2F4C8Cu;
    {
        const bool branch_taken_0x2f4c8c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2F4C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C8Cu;
        // 0x2f4c90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c8c) {
            ctx->pc = 0x2F4CE4u;
            goto label_2f4ce4;
        }
    }
    ctx->pc = 0x2F4C94u;
    // 0x2f4c94: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4C94u;
    {
        const bool branch_taken_0x2f4c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4c94) {
            ctx->pc = 0x2F4CB8u;
            goto label_2f4cb8;
        }
    }
    ctx->pc = 0x2F4C9Cu;
label_2f4c9c:
    // 0x2f4c9c: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F4C9Cu;
    {
        const bool branch_taken_0x2f4c9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4C9Cu;
        // 0x2f4ca0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4c9c) {
            ctx->pc = 0x2F4CB4u;
            goto label_2f4cb4;
        }
    }
    ctx->pc = 0x2F4CA4u;
    // 0x2f4ca4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2F4CA4u;
    {
        const bool branch_taken_0x2f4ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4ca4) {
            ctx->pc = 0x2F4CE4u;
            goto label_2f4ce4;
        }
    }
    ctx->pc = 0x2F4CACu;
label_2f4cac:
    // 0x2f4cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F4CACu;
    {
        const bool branch_taken_0x2f4cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CACu;
        // 0x2f4cb0: 0x24050011  addiu       $a1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cac) {
            ctx->pc = 0x2F4CB8u;
            goto label_2f4cb8;
        }
    }
    ctx->pc = 0x2F4CB4u;
label_2f4cb4:
    // 0x2f4cb4: 0x2405008f  addiu       $a1, $zero, 0x8F
    ctx->pc = 0x2f4cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 143));
label_2f4cb8:
    // 0x2f4cb8: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4CB8u;
    {
        const bool branch_taken_0x2f4cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CB8u;
        // 0x2f4cbc: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4cb8) {
            ctx->pc = 0x2F4CE0u;
            goto label_2f4ce0;
        }
    }
    ctx->pc = 0x2F4CC0u;
    // 0x2f4cc0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f4cc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2f4cc4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2f4cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f4cc8: 0x8c49bd30  lw          $t1, -0x42D0($v0)
    ctx->pc = 0x2f4cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2f4ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4cd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cd4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4cd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4cd8: 0xc088178  jal         func_2205E0
    ctx->pc = 0x2F4CD8u;
    SET_GPR_U32(ctx, 31, 0x2F4CE0u);
    ctx->pc = 0x2F4CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4CD8u;
    // 0x2f4cdc: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2205E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2205E0u, 0x2F4CD8u, 0x2F4CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4CE0u;
label_2f4ce0:
    // 0x2f4ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f4ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f4ce4:
    // 0x2f4ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4CE4u;
        // 0x2f4ce8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4CECu;
    // 0x2f4cec: 0x0  nop
    ctx->pc = 0x2f4cecu;
    // NOP
    ctx->pc = 0x2f4cf0u;
}
