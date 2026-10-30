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

// Function: sub_00149E58
// Address: 0x149e58 - 0x149ef0
void sub_00149E58_0x149e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149E58_0x149e58");
#endif

    switch (ctx->pc) {
        case 0x149e84u: goto label_149e84;
        case 0x149eccu: goto label_149ecc;
        case 0x149edcu: goto label_149edc;
        default: break;
    }

    ctx->pc = 0x149e58u;

    // 0x149e58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149e5c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x149e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x149e60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x149e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x149e64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x149e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x149e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x149e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149e70: 0x2451e388  addiu       $s1, $v0, -0x1C78
    ctx->pc = 0x149e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960008));
    // 0x149e74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x149e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149e78: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149e7c: 0xc11348c  jal         func_44D230
    ctx->pc = 0x149E7Cu;
    SET_GPR_U32(ctx, 31, 0x149E84u);
    ctx->pc = 0x149E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149E7Cu;
    // 0x149e80: 0x8e050108  lw          $a1, 0x108($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D230u, 0x149E7Cu, 0x149E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149E84u;
label_149e84:
    // 0x149e84: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x149E84u;
    {
        const bool branch_taken_0x149e84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149E84u;
        // 0x149e88: 0x26060122  addiu       $a2, $s0, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149e84) {
            ctx->pc = 0x149ED4u;
            goto label_149ed4;
        }
    }
    ctx->pc = 0x149E8Cu;
    // 0x149e8c: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x149e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x149e90: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x149e90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x149e94: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x149e94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x149e98: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x149e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x149e9c: 0x621827  nor         $v1, $v1, $v0
    ctx->pc = 0x149e9cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 3) | GPR_U64(ctx, 2)));
    // 0x149ea0: 0x8e050108  lw          $a1, 0x108($s0)
    ctx->pc = 0x149ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x149ea4: 0xa6030114  sh          $v1, 0x114($s0)
    ctx->pc = 0x149ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 276), (uint16_t)GPR_U32(ctx, 3));
    // 0x149ea8: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x149ea8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x149eac: 0xa2020110  sb          $v0, 0x110($s0)
    ctx->pc = 0x149eacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 272), (uint8_t)GPR_U32(ctx, 2));
    // 0x149eb0: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x149eb0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x149eb4: 0xa2030111  sb          $v1, 0x111($s0)
    ctx->pc = 0x149eb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 273), (uint8_t)GPR_U32(ctx, 3));
    // 0x149eb8: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x149eb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x149ebc: 0xa2020112  sb          $v0, 0x112($s0)
    ctx->pc = 0x149ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 274), (uint8_t)GPR_U32(ctx, 2));
    // 0x149ec0: 0x92230005  lbu         $v1, 0x5($s1)
    ctx->pc = 0x149ec0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
    // 0x149ec4: 0xc1135f4  jal         func_44D7D0
    ctx->pc = 0x149EC4u;
    SET_GPR_U32(ctx, 31, 0x149ECCu);
    ctx->pc = 0x149EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149EC4u;
    // 0x149ec8: 0xa2030113  sb          $v1, 0x113($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 275), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44D7D0u, 0x149EC4u, 0x149ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149ECCu;
label_149ecc:
    // 0x149ecc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149ECCu;
    {
        const bool branch_taken_0x149ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149ECCu;
        // 0x149ed0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149ecc) {
            ctx->pc = 0x149EE0u;
            goto label_149ee0;
        }
    }
    ctx->pc = 0x149ED4u;
label_149ed4:
    // 0x149ed4: 0xc0525c8  jal         func_149720
    ctx->pc = 0x149ED4u;
    SET_GPR_U32(ctx, 31, 0x149EDCu);
    ctx->pc = 0x149ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149ED4u;
    // 0x149ed8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149720u, 0x149ED4u, 0x149EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149EDCu;
label_149edc:
    // 0x149edc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x149edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_149ee0:
    // 0x149ee0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x149ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x149ee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x149EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149EE8u;
        // 0x149eec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149EE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149EF0u;
}
