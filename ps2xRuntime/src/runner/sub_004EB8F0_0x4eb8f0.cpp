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

// Function: sub_004EB8F0
// Address: 0x4eb8f0 - 0x4eb988
void sub_004EB8F0_0x4eb8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EB8F0_0x4eb8f0");
#endif

    switch (ctx->pc) {
        case 0x4eb8f0u: goto label_4eb8f0;
        case 0x4eb8f4u: goto label_4eb8f4;
        case 0x4eb8f8u: goto label_4eb8f8;
        case 0x4eb8fcu: goto label_4eb8fc;
        case 0x4eb900u: goto label_4eb900;
        case 0x4eb904u: goto label_4eb904;
        case 0x4eb908u: goto label_4eb908;
        case 0x4eb90cu: goto label_4eb90c;
        case 0x4eb910u: goto label_4eb910;
        case 0x4eb914u: goto label_4eb914;
        case 0x4eb918u: goto label_4eb918;
        case 0x4eb91cu: goto label_4eb91c;
        case 0x4eb920u: goto label_4eb920;
        case 0x4eb924u: goto label_4eb924;
        case 0x4eb928u: goto label_4eb928;
        case 0x4eb92cu: goto label_4eb92c;
        case 0x4eb930u: goto label_4eb930;
        case 0x4eb934u: goto label_4eb934;
        case 0x4eb938u: goto label_4eb938;
        case 0x4eb93cu: goto label_4eb93c;
        case 0x4eb940u: goto label_4eb940;
        case 0x4eb944u: goto label_4eb944;
        case 0x4eb948u: goto label_4eb948;
        case 0x4eb94cu: goto label_4eb94c;
        case 0x4eb950u: goto label_4eb950;
        case 0x4eb954u: goto label_4eb954;
        case 0x4eb958u: goto label_4eb958;
        case 0x4eb95cu: goto label_4eb95c;
        case 0x4eb960u: goto label_4eb960;
        case 0x4eb964u: goto label_4eb964;
        case 0x4eb968u: goto label_4eb968;
        case 0x4eb96cu: goto label_4eb96c;
        case 0x4eb970u: goto label_4eb970;
        case 0x4eb974u: goto label_4eb974;
        case 0x4eb978u: goto label_4eb978;
        case 0x4eb97cu: goto label_4eb97c;
        case 0x4eb980u: goto label_4eb980;
        case 0x4eb984u: goto label_4eb984;
        default: break;
    }

    ctx->pc = 0x4eb8f0u;

label_4eb8f0:
    // 0x4eb8f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eb8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eb8f4:
    // 0x4eb8f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eb8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eb8f8:
    // 0x4eb8f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eb8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eb8fc:
    // 0x4eb8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eb8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eb900:
    // 0x4eb900: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eb900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eb904:
    // 0x4eb904: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eb904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eb908:
    // 0x4eb908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eb908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eb90c:
    // 0x4eb90c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_4eb910:
    if (ctx->pc == 0x4EB910u) {
        ctx->pc = 0x4EB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB90Cu;
        // 0x4eb910: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB914u;
        goto label_4eb914;
    }
    ctx->pc = 0x4EB90Cu;
    {
        const bool branch_taken_0x4eb90c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB90Cu;
        // 0x4eb910: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb90c) {
            ctx->pc = 0x4EB96Cu;
            goto label_4eb96c;
        }
    }
    ctx->pc = 0x4EB914u;
label_4eb914:
    // 0x4eb914: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4eb914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4eb918:
    // 0x4eb918: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4eb91c:
    if (ctx->pc == 0x4EB91Cu) {
        ctx->pc = 0x4EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB918u;
        // 0x4eb91c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB920u;
        goto label_4eb920;
    }
    ctx->pc = 0x4EB918u;
    {
        const bool branch_taken_0x4eb918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EB91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB918u;
        // 0x4eb91c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eb918) {
            ctx->pc = 0x4EB944u;
            goto label_4eb944;
        }
    }
    ctx->pc = 0x4EB920u;
label_4eb920:
    // 0x4eb920: 0x3c060056  lui         $a2, 0x56
    ctx->pc = 0x4eb920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)86 << 16));
label_4eb924:
    // 0x4eb924: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4eb924u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4eb928:
    // 0x4eb928: 0x24c681a0  addiu       $a2, $a2, -0x7E60
    ctx->pc = 0x4eb928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934944));
label_4eb92c:
    // 0x4eb92c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eb92cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eb930:
    // 0x4eb930: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb934:
    // 0x4eb934: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb934u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb938:
    // 0x4eb938: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb93c:
    // 0x4eb93c: 0x60f809  jalr        $v1
label_4eb940:
    if (ctx->pc == 0x4EB940u) {
        ctx->pc = 0x4EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB93Cu;
        // 0x4eb940: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB944u;
        goto label_4eb944;
    }
    ctx->pc = 0x4EB93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EB944u);
        ctx->pc = 0x4EB940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB93Cu;
        // 0x4eb940: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB93Cu, 0x4EB944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB944u;
label_4eb944:
    // 0x4eb944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eb944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eb948:
    // 0x4eb948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eb948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eb94c:
    // 0x4eb94c: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eb94cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eb950:
    // 0x4eb950: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eb950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eb954:
    // 0x4eb954: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eb954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eb958:
    // 0x4eb958: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eb958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eb95c:
    // 0x4eb95c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eb95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eb960:
    // 0x4eb960: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eb960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eb964:
    // 0x4eb964: 0x60f809  jalr        $v1
label_4eb968:
    if (ctx->pc == 0x4EB968u) {
        ctx->pc = 0x4EB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB964u;
        // 0x4eb968: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB96Cu;
        goto label_4eb96c;
    }
    ctx->pc = 0x4EB964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EB96Cu);
        ctx->pc = 0x4EB968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB964u;
        // 0x4eb968: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB964u, 0x4EB96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EB96Cu;
label_4eb96c:
    // 0x4eb96c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eb96cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eb970:
    // 0x4eb970: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eb970u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eb974:
    // 0x4eb974: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eb974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eb978:
    // 0x4eb978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eb978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eb97c:
    // 0x4eb97c: 0x3e00008  jr          $ra
label_4eb980:
    if (ctx->pc == 0x4EB980u) {
        ctx->pc = 0x4EB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB97Cu;
        // 0x4eb980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EB984u;
        goto label_4eb984;
    }
    ctx->pc = 0x4EB97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EB980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EB97Cu;
        // 0x4eb980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EB97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EB984u;
label_4eb984:
    // 0x4eb984: 0x0  nop
    ctx->pc = 0x4eb984u;
    // NOP
    ctx->pc = 0x4eb988u;
}
