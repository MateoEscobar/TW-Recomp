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

// Function: sub_00250C50
// Address: 0x250c50 - 0x250d00
void sub_00250C50_0x250c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250C50_0x250c50");
#endif

    switch (ctx->pc) {
        case 0x250c98u: goto label_250c98;
        case 0x250cc8u: goto label_250cc8;
        default: break;
    }

    ctx->pc = 0x250c50u;

    // 0x250c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x250c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x250c54: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x250c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x250c58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x250c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x250c5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x250c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x250c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x250c64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x250c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x250c68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x250c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x250c6c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x250c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x250c70: 0x1a60001a  blez        $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x250C70u;
    {
        const bool branch_taken_0x250c70 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x250C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C70u;
        // 0x250c74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c70) {
            ctx->pc = 0x250CDCu;
            goto label_250cdc;
        }
    }
    ctx->pc = 0x250C78u;
    // 0x250c78: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x250c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x250c7c: 0x8c500594  lw          $s0, 0x594($v0)
    ctx->pc = 0x250c7cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x510594u));
    // 0x250c80: 0x1a000016  blez        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x250C80u;
    {
        const bool branch_taken_0x250c80 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x250C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C80u;
        // 0x250c84: 0x3c117fff  lui         $s1, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c80) {
            ctx->pc = 0x250CDCu;
            goto label_250cdc;
        }
    }
    ctx->pc = 0x250C88u;
    // 0x250c88: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x250c88u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
    // 0x250c8c: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x250c8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x250c90: 0x8e830590  lw          $v1, 0x590($s4)
    ctx->pc = 0x250c90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x510590u));
    // 0x250c94: 0x0  nop
    ctx->pc = 0x250c94u;
    // NOP
label_250c98:
    // 0x250c98: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x250c98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x250c9c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x250c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x250ca0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x250ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x250ca4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x250ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x250ca8: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x250ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x250cac: 0x30421fff  andi        $v0, $v0, 0x1FFF
    ctx->pc = 0x250cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8191);
    // 0x250cb0: 0x14530008  bne         $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x250CB0u;
    {
        const bool branch_taken_0x250cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x250CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB0u;
        // 0x250cb4: 0x711024  and         $v0, $v1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cb0) {
            ctx->pc = 0x250CD4u;
            goto label_250cd4;
        }
    }
    ctx->pc = 0x250CB8u;
    // 0x250cb8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x250CB8u;
    {
        const bool branch_taken_0x250cb8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB8u;
        // 0x250cbc: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cb8) {
            ctx->pc = 0x250CD4u;
            goto label_250cd4;
        }
    }
    ctx->pc = 0x250CC0u;
    // 0x250cc0: 0xc09422e  jal         func_2508B8
    ctx->pc = 0x250CC0u;
    SET_GPR_U32(ctx, 31, 0x250CC8u);
    ctx->pc = 0x250CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250CC0u;
    // 0x250cc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2508B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2508B8u, 0x250CC0u, 0x250CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CC8u;
label_250cc8:
    // 0x250cc8: 0x94430048  lhu         $v1, 0x48($v0)
    ctx->pc = 0x250cc8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x250ccc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x250cccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x250cd0: 0xa4430048  sh          $v1, 0x48($v0)
    ctx->pc = 0x250cd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 72), (uint16_t)GPR_U32(ctx, 3));
label_250cd4:
    // 0x250cd4: 0x1e00fff0  bgtz        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x250CD4u;
    {
        const bool branch_taken_0x250cd4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x250CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CD4u;
        // 0x250cd8: 0x8e830590  lw          $v1, 0x590($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cd4) {
            ctx->pc = 0x250C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250c98;
        }
    }
    ctx->pc = 0x250CDCu;
label_250cdc:
    // 0x250cdc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x250cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x250ce0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x250ce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x250ce4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x250ce4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x250ce8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x250ce8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x250cec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x250cecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x250cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x250cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x250cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x250CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x250CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CF4u;
        // 0x250cf8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x250CFCu;
    // 0x250cfc: 0x0  nop
    ctx->pc = 0x250cfcu;
    // NOP
    ctx->pc = 0x250d00u;
}
