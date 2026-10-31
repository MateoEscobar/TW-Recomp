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

// Function: sub_0014C140
// Address: 0x14c140 - 0x14c250
void sub_0014C140_0x14c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014C140_0x14c140");
#endif

    switch (ctx->pc) {
        case 0x14c140u: goto label_14c140;
        case 0x14c144u: goto label_14c144;
        case 0x14c148u: goto label_14c148;
        case 0x14c14cu: goto label_14c14c;
        case 0x14c150u: goto label_14c150;
        case 0x14c154u: goto label_14c154;
        case 0x14c158u: goto label_14c158;
        case 0x14c15cu: goto label_14c15c;
        case 0x14c160u: goto label_14c160;
        case 0x14c164u: goto label_14c164;
        case 0x14c168u: goto label_14c168;
        case 0x14c16cu: goto label_14c16c;
        case 0x14c170u: goto label_14c170;
        case 0x14c174u: goto label_14c174;
        case 0x14c178u: goto label_14c178;
        case 0x14c17cu: goto label_14c17c;
        case 0x14c180u: goto label_14c180;
        case 0x14c184u: goto label_14c184;
        case 0x14c188u: goto label_14c188;
        case 0x14c18cu: goto label_14c18c;
        case 0x14c190u: goto label_14c190;
        case 0x14c194u: goto label_14c194;
        case 0x14c198u: goto label_14c198;
        case 0x14c19cu: goto label_14c19c;
        case 0x14c1a0u: goto label_14c1a0;
        case 0x14c1a4u: goto label_14c1a4;
        case 0x14c1a8u: goto label_14c1a8;
        case 0x14c1acu: goto label_14c1ac;
        case 0x14c1b0u: goto label_14c1b0;
        case 0x14c1b4u: goto label_14c1b4;
        case 0x14c1b8u: goto label_14c1b8;
        case 0x14c1bcu: goto label_14c1bc;
        case 0x14c1c0u: goto label_14c1c0;
        case 0x14c1c4u: goto label_14c1c4;
        case 0x14c1c8u: goto label_14c1c8;
        case 0x14c1ccu: goto label_14c1cc;
        case 0x14c1d0u: goto label_14c1d0;
        case 0x14c1d4u: goto label_14c1d4;
        case 0x14c1d8u: goto label_14c1d8;
        case 0x14c1dcu: goto label_14c1dc;
        case 0x14c1e0u: goto label_14c1e0;
        case 0x14c1e4u: goto label_14c1e4;
        case 0x14c1e8u: goto label_14c1e8;
        case 0x14c1ecu: goto label_14c1ec;
        case 0x14c1f0u: goto label_14c1f0;
        case 0x14c1f4u: goto label_14c1f4;
        case 0x14c1f8u: goto label_14c1f8;
        case 0x14c1fcu: goto label_14c1fc;
        case 0x14c200u: goto label_14c200;
        case 0x14c204u: goto label_14c204;
        case 0x14c208u: goto label_14c208;
        case 0x14c20cu: goto label_14c20c;
        case 0x14c210u: goto label_14c210;
        case 0x14c214u: goto label_14c214;
        case 0x14c218u: goto label_14c218;
        case 0x14c21cu: goto label_14c21c;
        case 0x14c220u: goto label_14c220;
        case 0x14c224u: goto label_14c224;
        case 0x14c228u: goto label_14c228;
        case 0x14c22cu: goto label_14c22c;
        case 0x14c230u: goto label_14c230;
        case 0x14c234u: goto label_14c234;
        case 0x14c238u: goto label_14c238;
        case 0x14c23cu: goto label_14c23c;
        case 0x14c240u: goto label_14c240;
        case 0x14c244u: goto label_14c244;
        case 0x14c248u: goto label_14c248;
        case 0x14c24cu: goto label_14c24c;
        default: break;
    }

    ctx->pc = 0x14c140u;

label_14c140:
    // 0x14c140: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_14c144:
    // 0x14c144: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14c144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_14c148:
    // 0x14c148: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14c14c:
    // 0x14c14c: 0x24900854  addiu       $s0, $a0, 0x854
    ctx->pc = 0x14c14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 2132));
label_14c150:
    // 0x14c150: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14c150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_14c154:
    // 0x14c154: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14c154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c158:
    // 0x14c158: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14c15c:
    // 0x14c15c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x14c15cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_14c160:
    // 0x14c160: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14c160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_14c164:
    // 0x14c164: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_14c168:
    if (ctx->pc == 0x14C168u) {
        ctx->pc = 0x14C168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C164u;
        // 0x14c168: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C16Cu;
        goto label_14c16c;
    }
    ctx->pc = 0x14C164u;
    {
        const bool branch_taken_0x14c164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c164) {
            ctx->pc = 0x14C168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14C164u;
            // 0x14c168: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14C178u;
            goto label_14c178;
        }
    }
    ctx->pc = 0x14C16Cu;
label_14c16c:
    // 0x14c16c: 0xc0543c6  jal         func_150F18
label_14c170:
    if (ctx->pc == 0x14C170u) {
        ctx->pc = 0x14C170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C16Cu;
        // 0x14c170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C174u;
        goto label_14c174;
    }
    ctx->pc = 0x14C16Cu;
    SET_GPR_U32(ctx, 31, 0x14C174u);
    ctx->pc = 0x14C170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C16Cu;
    // 0x14c170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F18u, 0x14C16Cu, 0x14C174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C174u;
label_14c174:
    // 0x14c174: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x14c174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_14c178:
    // 0x14c178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14c178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14c17c:
    // 0x14c17c: 0x2a22002f  slti        $v0, $s1, 0x2F
    ctx->pc = 0x14c17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)47) ? 1 : 0);
label_14c180:
    // 0x14c180: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_14c184:
    if (ctx->pc == 0x14C184u) {
        ctx->pc = 0x14C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C180u;
        // 0x14c184: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C188u;
        goto label_14c188;
    }
    ctx->pc = 0x14C180u;
    {
        const bool branch_taken_0x14c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C180u;
        // 0x14c184: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c180) {
            ctx->pc = 0x14C160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14c160;
        }
    }
    ctx->pc = 0x14C188u;
label_14c188:
    // 0x14c188: 0xc05433c  jal         func_150CF0
label_14c18c:
    if (ctx->pc == 0x14C18Cu) {
        ctx->pc = 0x14C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C188u;
        // 0x14c18c: 0xae40bcf4  sw          $zero, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C190u;
        goto label_14c190;
    }
    ctx->pc = 0x14C188u;
    SET_GPR_U32(ctx, 31, 0x14C190u);
    ctx->pc = 0x14C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C188u;
    // 0x14c18c: 0xae40bcf4  sw          $zero, -0x430C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150CF0u, 0x14C188u, 0x14C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C190u;
label_14c190:
    // 0x14c190: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14c190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c194:
    // 0x14c194: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_14c198:
    if (ctx->pc == 0x14C198u) {
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C19Cu;
        goto label_14c19c;
    }
    ctx->pc = 0x14C194u;
    {
        const bool branch_taken_0x14c194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C194u;
        // 0x14c198: 0x3c060051  lui         $a2, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c194) {
            ctx->pc = 0x14C1F0u;
            goto label_14c1f0;
        }
    }
    ctx->pc = 0x14C19Cu;
label_14c19c:
    // 0x14c19c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c1a0:
    // 0x14c1a0: 0x90c4bcf0  lbu         $a0, -0x4310($a2)
    ctx->pc = 0x14c1a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294950128)));
label_14c1a4:
    // 0x14c1a4: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x14c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_14c1a8:
    // 0x14c1a8: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_14c1ac:
    if (ctx->pc == 0x14C1ACu) {
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0xae43bcf4  sw          $v1, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1B0u;
        goto label_14c1b0;
    }
    ctx->pc = 0x14C1A8u;
    {
        const bool branch_taken_0x14c1a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1A8u;
        // 0x14c1ac: 0xae43bcf4  sw          $v1, -0x430C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294950132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1a8) {
            ctx->pc = 0x14C1B8u;
            goto label_14c1b8;
        }
    }
    ctx->pc = 0x14C1B0u;
label_14c1b0:
    // 0x14c1b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c1b4:
    if (ctx->pc == 0x14C1B4u) {
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B0u;
        // 0x14c1b4: 0xa0c0bcf0  sb          $zero, -0x4310($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294950128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1B8u;
        goto label_14c1b8;
    }
    ctx->pc = 0x14C1B0u;
    {
        const bool branch_taken_0x14c1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1B0u;
        // 0x14c1b4: 0xa0c0bcf0  sb          $zero, -0x4310($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 4294950128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1b0) {
            ctx->pc = 0x14C1C0u;
            goto label_14c1c0;
        }
    }
    ctx->pc = 0x14C1B8u;
label_14c1b8:
    // 0x14c1b8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_14c1bc:
    // 0x14c1bc: 0xa0c2bcf0  sb          $v0, -0x4310($a2)
    ctx->pc = 0x14c1bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294950128), (uint8_t)GPR_U32(ctx, 2));
label_14c1c0:
    // 0x14c1c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14c1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_14c1c4:
    // 0x14c1c4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_14c1c8:
    if (ctx->pc == 0x14C1C8u) {
        ctx->pc = 0x14C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1C4u;
        // 0x14c1c8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1CCu;
        goto label_14c1cc;
    }
    ctx->pc = 0x14C1C4u;
    {
        const bool branch_taken_0x14c1c4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1C4u;
        // 0x14c1c8: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1c4) {
            ctx->pc = 0x14C1D8u;
            goto label_14c1d8;
        }
    }
    ctx->pc = 0x14C1CCu;
label_14c1cc:
    // 0x14c1cc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x14c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_14c1d0:
    // 0x14c1d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_14c1d4:
    if (ctx->pc == 0x14C1D4u) {
        ctx->pc = 0x14C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D0u;
        // 0x14c1d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1D8u;
        goto label_14c1d8;
    }
    ctx->pc = 0x14C1D0u;
    {
        const bool branch_taken_0x14c1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D0u;
        // 0x14c1d4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d0) {
            ctx->pc = 0x14C1ECu;
            goto label_14c1ec;
        }
    }
    ctx->pc = 0x14C1D8u;
label_14c1d8:
    // 0x14c1d8: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
label_14c1dc:
    if (ctx->pc == 0x14C1DCu) {
        ctx->pc = 0x14C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D8u;
        // 0x14c1dc: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1E0u;
        goto label_14c1e0;
    }
    ctx->pc = 0x14C1D8u;
    {
        const bool branch_taken_0x14c1d8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x14C1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1D8u;
        // 0x14c1dc: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1d8) {
            ctx->pc = 0x14C1E8u;
            goto label_14c1e8;
        }
    }
    ctx->pc = 0x14C1E0u;
label_14c1e0:
    // 0x14c1e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_14c1e4:
    if (ctx->pc == 0x14C1E4u) {
        ctx->pc = 0x14C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E0u;
        // 0x14c1e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1E8u;
        goto label_14c1e8;
    }
    ctx->pc = 0x14C1E0u;
    {
        const bool branch_taken_0x14c1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1E0u;
        // 0x14c1e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1e0) {
            ctx->pc = 0x14C1ECu;
            goto label_14c1ec;
        }
    }
    ctx->pc = 0x14C1E8u;
label_14c1e8:
    // 0x14c1e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14c1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14c1ec:
    // 0x14c1ec: 0xac625580  sw          $v0, 0x5580($v1)
    ctx->pc = 0x14c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21888), GPR_U32(ctx, 2));
label_14c1f0:
    // 0x14c1f0: 0xc053eba  jal         func_14FAE8
label_14c1f4:
    if (ctx->pc == 0x14C1F4u) {
        ctx->pc = 0x14C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F0u;
        // 0x14c1f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C1F8u;
        goto label_14c1f8;
    }
    ctx->pc = 0x14C1F0u;
    SET_GPR_U32(ctx, 31, 0x14C1F8u);
    ctx->pc = 0x14C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C1F0u;
    // 0x14c1f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FAE8u, 0x14C1F0u, 0x14C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C1F8u;
label_14c1f8:
    // 0x14c1f8: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_14c1fc:
    if (ctx->pc == 0x14C1FCu) {
        ctx->pc = 0x14C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F8u;
        // 0x14c1fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C200u;
        goto label_14c200;
    }
    ctx->pc = 0x14C1F8u;
    {
        const bool branch_taken_0x14c1f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14C1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C1F8u;
        // 0x14c1fc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c1f8) {
            ctx->pc = 0x14C208u;
            goto label_14c208;
        }
    }
    ctx->pc = 0x14C200u;
label_14c200:
    // 0x14c200: 0xc043dfe  jal         func_10F7F8
label_14c204:
    if (ctx->pc == 0x14C204u) {
        ctx->pc = 0x14C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C200u;
        // 0x14c204: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C208u;
        goto label_14c208;
    }
    ctx->pc = 0x14C200u;
    SET_GPR_U32(ctx, 31, 0x14C208u);
    ctx->pc = 0x14C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14C200u;
    // 0x14c204: 0x8c44aa84  lw          $a0, -0x557C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7F8u, 0x14C200u, 0x14C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C208u;
label_14c208:
    // 0x14c208: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14c208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14c20c:
    // 0x14c20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c210:
    // 0x14c210: 0x8c44bce8  lw          $a0, -0x4318($v0)
    ctx->pc = 0x14c210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950120)));
label_14c214:
    // 0x14c214: 0x14830009  bne         $a0, $v1, . + 4 + (0x9 << 2)
label_14c218:
    if (ctx->pc == 0x14C218u) {
        ctx->pc = 0x14C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C214u;
        // 0x14c218: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C21Cu;
        goto label_14c21c;
    }
    ctx->pc = 0x14C214u;
    {
        const bool branch_taken_0x14c214 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x14C218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C214u;
        // 0x14c218: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c214) {
            ctx->pc = 0x14C23Cu;
            goto label_14c23c;
        }
    }
    ctx->pc = 0x14C21Cu;
label_14c21c:
    // 0x14c21c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14c21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_14c220:
    // 0x14c220: 0x8c45bce4  lw          $a1, -0x431C($v0)
    ctx->pc = 0x14c220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950116)));
label_14c224:
    // 0x14c224: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x14c224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_14c228:
    // 0x14c228: 0x84640118  lh          $a0, 0x118($v1)
    ctx->pc = 0x14c228u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 280)));
label_14c22c:
    // 0x14c22c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x14c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_14c230:
    // 0x14c230: 0x40f809  jalr        $v0
label_14c234:
    if (ctx->pc == 0x14C234u) {
        ctx->pc = 0x14C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C230u;
        // 0x14c234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C238u;
        goto label_14c238;
    }
    ctx->pc = 0x14C230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14C238u);
        ctx->pc = 0x14C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C230u;
        // 0x14c234: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C230u, 0x14C238u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14C238u;
label_14c238:
    // 0x14c238: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14c238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14c23c:
    // 0x14c23c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14c23cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14c240:
    // 0x14c240: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14c240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14c244:
    // 0x14c244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14c244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14c248:
    // 0x14c248: 0x3e00008  jr          $ra
label_14c24c:
    if (ctx->pc == 0x14C24Cu) {
        ctx->pc = 0x14C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C248u;
        // 0x14c24c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14C250u;
        goto label_fallthrough_0x14c248;
    }
    ctx->pc = 0x14C248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14C24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14C248u;
        // 0x14c24c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14C248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14c248:
    ctx->pc = 0x14C250u;
}
