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

// Function: sub_00178F40
// Address: 0x178f40 - 0x178fd8
void sub_00178F40_0x178f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178F40_0x178f40");
#endif

    switch (ctx->pc) {
        case 0x178f40u: goto label_178f40;
        case 0x178f44u: goto label_178f44;
        case 0x178f48u: goto label_178f48;
        case 0x178f4cu: goto label_178f4c;
        case 0x178f50u: goto label_178f50;
        case 0x178f54u: goto label_178f54;
        case 0x178f58u: goto label_178f58;
        case 0x178f5cu: goto label_178f5c;
        case 0x178f60u: goto label_178f60;
        case 0x178f64u: goto label_178f64;
        case 0x178f68u: goto label_178f68;
        case 0x178f6cu: goto label_178f6c;
        case 0x178f70u: goto label_178f70;
        case 0x178f74u: goto label_178f74;
        case 0x178f78u: goto label_178f78;
        case 0x178f7cu: goto label_178f7c;
        case 0x178f80u: goto label_178f80;
        case 0x178f84u: goto label_178f84;
        case 0x178f88u: goto label_178f88;
        case 0x178f8cu: goto label_178f8c;
        case 0x178f90u: goto label_178f90;
        case 0x178f94u: goto label_178f94;
        case 0x178f98u: goto label_178f98;
        case 0x178f9cu: goto label_178f9c;
        case 0x178fa0u: goto label_178fa0;
        case 0x178fa4u: goto label_178fa4;
        case 0x178fa8u: goto label_178fa8;
        case 0x178facu: goto label_178fac;
        case 0x178fb0u: goto label_178fb0;
        case 0x178fb4u: goto label_178fb4;
        case 0x178fb8u: goto label_178fb8;
        case 0x178fbcu: goto label_178fbc;
        case 0x178fc0u: goto label_178fc0;
        case 0x178fc4u: goto label_178fc4;
        case 0x178fc8u: goto label_178fc8;
        case 0x178fccu: goto label_178fcc;
        case 0x178fd0u: goto label_178fd0;
        case 0x178fd4u: goto label_178fd4;
        default: break;
    }

    ctx->pc = 0x178f40u;

label_178f40:
    // 0x178f40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_178f44:
    // 0x178f44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_178f48:
    // 0x178f48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178f48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178f4c:
    // 0x178f4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_178f50:
    // 0x178f50: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x178f50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178f54:
    // 0x178f54: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x178f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_178f58:
    // 0x178f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_178f5c:
    // 0x178f5c: 0xc050fda  jal         func_143F68
label_178f60:
    if (ctx->pc == 0x178F60u) {
        ctx->pc = 0x178F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F5Cu;
        // 0x178f60: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F64u;
        goto label_178f64;
    }
    ctx->pc = 0x178F5Cu;
    SET_GPR_U32(ctx, 31, 0x178F64u);
    ctx->pc = 0x178F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178F5Cu;
    // 0x178f60: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x178F5Cu, 0x178F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178F64u;
label_178f64:
    // 0x178f64: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x178f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178f68:
    // 0x178f68: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x178f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_178f6c:
    // 0x178f6c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_178f70:
    if (ctx->pc == 0x178F70u) {
        ctx->pc = 0x178F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F6Cu;
        // 0x178f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F74u;
        goto label_178f74;
    }
    ctx->pc = 0x178F6Cu;
    {
        const bool branch_taken_0x178f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F6Cu;
        // 0x178f70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f6c) {
            ctx->pc = 0x178FA0u;
            goto label_178fa0;
        }
    }
    ctx->pc = 0x178F74u;
label_178f74:
    // 0x178f74: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x178f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_178f78:
    // 0x178f78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x178f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_178f7c:
    // 0x178f7c: 0x0  nop
    ctx->pc = 0x178f7cu;
    // NOP
label_178f80:
    // 0x178f80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178f84:
    // 0x178f84: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
label_178f88:
    if (ctx->pc == 0x178F88u) {
        ctx->pc = 0x178F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F84u;
        // 0x178f88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F8Cu;
        goto label_178f8c;
    }
    ctx->pc = 0x178F84u;
    {
        const bool branch_taken_0x178f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x178F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F84u;
        // 0x178f88: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f84) {
            ctx->pc = 0x178F94u;
            goto label_178f94;
        }
    }
    ctx->pc = 0x178F8Cu;
label_178f8c:
    // 0x178f8c: 0x1000000d  b           . + 4 + (0xD << 2)
label_178f90:
    if (ctx->pc == 0x178F90u) {
        ctx->pc = 0x178F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F8Cu;
        // 0x178f90: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178F94u;
        goto label_178f94;
    }
    ctx->pc = 0x178F8Cu;
    {
        const bool branch_taken_0x178f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F8Cu;
        // 0x178f90: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f8c) {
            ctx->pc = 0x178FC4u;
            goto label_178fc4;
        }
    }
    ctx->pc = 0x178F94u;
label_178f94:
    // 0x178f94: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x178f94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_178f98:
    // 0x178f98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_178f9c:
    if (ctx->pc == 0x178F9Cu) {
        ctx->pc = 0x178F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F98u;
        // 0x178f9c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FA0u;
        goto label_178fa0;
    }
    ctx->pc = 0x178F98u;
    {
        const bool branch_taken_0x178f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178F98u;
        // 0x178f9c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178f98) {
            ctx->pc = 0x178F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178f80;
        }
    }
    ctx->pc = 0x178FA0u;
label_178fa0:
    // 0x178fa0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x178fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_178fa4:
    // 0x178fa4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_178fa8:
    // 0x178fa8: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x178fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_178fac:
    // 0x178fac: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x178facu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_178fb0:
    // 0x178fb0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x178fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178fb4:
    // 0x178fb4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x178fb4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_178fb8:
    // 0x178fb8: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x178fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_178fbc:
    // 0x178fbc: 0x40f809  jalr        $v0
label_178fc0:
    if (ctx->pc == 0x178FC0u) {
        ctx->pc = 0x178FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FBCu;
        // 0x178fc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FC4u;
        goto label_178fc4;
    }
    ctx->pc = 0x178FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178FC4u);
        ctx->pc = 0x178FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FBCu;
        // 0x178fc0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FBCu, 0x178FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178FC4u;
label_178fc4:
    // 0x178fc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178fc8:
    // 0x178fc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178fc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_178fcc:
    // 0x178fcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178fccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178fd0:
    // 0x178fd0: 0x3e00008  jr          $ra
label_178fd4:
    if (ctx->pc == 0x178FD4u) {
        ctx->pc = 0x178FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FD0u;
        // 0x178fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178FD8u;
        goto label_fallthrough_0x178fd0;
    }
    ctx->pc = 0x178FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178FD0u;
        // 0x178fd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x178fd0:
    ctx->pc = 0x178FD8u;
}
