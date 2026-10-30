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

// Function: sub_0010C100
// Address: 0x10c100 - 0x10cc70
void sub_0010C100_0x10c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C100_0x10c100");
#endif

    switch (ctx->pc) {
        case 0x10c154u: goto label_10c154;
        case 0x10c16cu: goto label_10c16c;
        case 0x10c190u: goto label_10c190;
        case 0x10c1d8u: goto label_10c1d8;
        case 0x10c1f8u: goto label_10c1f8;
        case 0x10c208u: goto label_10c208;
        case 0x10c258u: goto label_10c258;
        case 0x10c268u: goto label_10c268;
        case 0x10c304u: goto label_10c304;
        case 0x10c320u: goto label_10c320;
        case 0x10c378u: goto label_10c378;
        case 0x10c394u: goto label_10c394;
        case 0x10c3a4u: goto label_10c3a4;
        case 0x10c3d4u: goto label_10c3d4;
        case 0x10c414u: goto label_10c414;
        case 0x10c43cu: goto label_10c43c;
        case 0x10c44cu: goto label_10c44c;
        case 0x10c478u: goto label_10c478;
        case 0x10c4acu: goto label_10c4ac;
        case 0x10c544u: goto label_10c544;
        case 0x10c570u: goto label_10c570;
        case 0x10c584u: goto label_10c584;
        case 0x10c5b8u: goto label_10c5b8;
        case 0x10c5c4u: goto label_10c5c4;
        case 0x10c5c8u: goto label_10c5c8;
        case 0x10c5d0u: goto label_10c5d0;
        case 0x10c5e4u: goto label_10c5e4;
        case 0x10c5f8u: goto label_10c5f8;
        case 0x10c600u: goto label_10c600;
        case 0x10c634u: goto label_10c634;
        case 0x10c668u: goto label_10c668;
        case 0x10c6f0u: goto label_10c6f0;
        case 0x10c728u: goto label_10c728;
        case 0x10c758u: goto label_10c758;
        case 0x10c770u: goto label_10c770;
        case 0x10c7a4u: goto label_10c7a4;
        case 0x10c814u: goto label_10c814;
        case 0x10c830u: goto label_10c830;
        case 0x10c850u: goto label_10c850;
        case 0x10c900u: goto label_10c900;
        case 0x10c92cu: goto label_10c92c;
        case 0x10c940u: goto label_10c940;
        case 0x10c974u: goto label_10c974;
        case 0x10c9acu: goto label_10c9ac;
        case 0x10c9d0u: goto label_10c9d0;
        case 0x10c9e4u: goto label_10c9e4;
        case 0x10c9f8u: goto label_10c9f8;
        case 0x10ca10u: goto label_10ca10;
        case 0x10cab4u: goto label_10cab4;
        case 0x10cac8u: goto label_10cac8;
        case 0x10cae4u: goto label_10cae4;
        case 0x10cafcu: goto label_10cafc;
        case 0x10cb64u: goto label_10cb64;
        case 0x10cb7cu: goto label_10cb7c;
        case 0x10cba4u: goto label_10cba4;
        case 0x10cbb0u: goto label_10cbb0;
        case 0x10cbf8u: goto label_10cbf8;
        case 0x10cc0cu: goto label_10cc0c;
        default: break;
    }

    ctx->pc = 0x10c100u;

    // 0x10c100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x10c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x10c104: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c108: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x10c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x10c10c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c10cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c110: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x10c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x10c114: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x10c114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c118: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x10c118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x10c11c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c120: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x10c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x10c124: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x10c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x10c128: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x10c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x10c12c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x10c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x10c130: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x10c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x10c134: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x10c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x10c138: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c13c: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x10c13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x10c140: 0x8c433784  lw          $v1, 0x3784($v0)
    ctx->pc = 0x10c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14212)));
    // 0x10c144: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C144u;
    {
        const bool branch_taken_0x10c144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C144u;
        // 0x10c148: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c144) {
            ctx->pc = 0x10C158u;
            goto label_10c158;
        }
    }
    ctx->pc = 0x10C14Cu;
    // 0x10c14c: 0xc04359a  jal         func_10D668
    ctx->pc = 0x10C14Cu;
    SET_GPR_U32(ctx, 31, 0x10C154u);
    ctx->pc = 0x10D668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D668u, 0x10C14Cu, 0x10C154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C154u;
label_10c154:
    // 0x10c154: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10c154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10c158:
    // 0x10c158: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10c158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10c15c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x10c160: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c164: 0xc042f9e  jal         func_10BE78
    ctx->pc = 0x10C164u;
    SET_GPR_U32(ctx, 31, 0x10C16Cu);
    ctx->pc = 0x10C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C164u;
    // 0x10c168: 0x8c700038  lw          $s0, 0x38($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BE78u, 0x10C164u, 0x10C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C16Cu;
label_10c16c:
    // 0x10c16c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x10c16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x10c170: 0x244203e8  addiu       $v0, $v0, 0x3E8
    ctx->pc = 0x10c170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1000));
    // 0x10c174: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10c174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10c178: 0x104002b0  beqz        $v0, . + 4 + (0x2B0 << 2)
    ctx->pc = 0x10C178u;
    {
        const bool branch_taken_0x10c178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C178u;
        // 0x10c17c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c178) {
            ctx->pc = 0x10CC3Cu;
            goto label_10cc3c;
        }
    }
    ctx->pc = 0x10C180u;
    // 0x10c180: 0xae900004  sw          $s0, 0x4($s4)
    ctx->pc = 0x10c180u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 16));
    // 0x10c184: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x10c184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x10c188: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C188u;
    SET_GPR_U32(ctx, 31, 0x10C190u);
    ctx->pc = 0x10C18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C188u;
    // 0x10c18c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C188u, 0x10C190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C190u;
label_10c190:
    // 0x10c190: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c194: 0x544002aa  bnel        $v0, $zero, . + 4 + (0x2AA << 2)
    ctx->pc = 0x10C194u;
    {
        const bool branch_taken_0x10c194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c194) {
            ctx->pc = 0x10C198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C194u;
            // 0x10c198: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC40u;
            goto label_10cc40;
        }
    }
    ctx->pc = 0x10C19Cu;
    // 0x10c19c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10c1a0: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x10c1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x10c1a4: 0x8c62aa84  lw          $v0, -0x557C($v1)
    ctx->pc = 0x10c1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50AA84u));
    // 0x10c1a8: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x10c1a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c1b0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x10c1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10c1b4: 0x8c434270  lw          $v1, 0x4270($v0)
    ctx->pc = 0x10c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17008)));
    // 0x10c1b8: 0x106402a0  beq         $v1, $a0, . + 4 + (0x2A0 << 2)
    ctx->pc = 0x10C1B8u;
    {
        const bool branch_taken_0x10c1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1B8u;
        // 0x10c1bc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1b8) {
            ctx->pc = 0x10CC3Cu;
            goto label_10cc3c;
        }
    }
    ctx->pc = 0x10C1C0u;
    // 0x10c1c0: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10c1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x10c1c4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x10c1c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10c1c8: 0x1840029c  blez        $v0, . + 4 + (0x29C << 2)
    ctx->pc = 0x10C1C8u;
    {
        const bool branch_taken_0x10c1c8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10C1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1C8u;
        // 0x10c1cc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1c8) {
            ctx->pc = 0x10CC3Cu;
            goto label_10cc3c;
        }
    }
    ctx->pc = 0x10C1D0u;
    // 0x10c1d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10c1d4: 0x0  nop
    ctx->pc = 0x10c1d4u;
    // NOP
label_10c1d8:
    // 0x10c1d8: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x10c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x10c1dc: 0x8c62489c  lw          $v0, 0x489C($v1)
    ctx->pc = 0x10c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    // 0x10c1e0: 0x24840228  addiu       $a0, $a0, 0x228
    ctx->pc = 0x10c1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    // 0x10c1e4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x10c1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x10c1e8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x10c1e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c1ec: 0xafb00024  sw          $s0, 0x24($sp)
    ctx->pc = 0x10c1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 16));
    // 0x10c1f0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x10C1F0u;
    SET_GPR_U32(ctx, 31, 0x10C1F8u);
    ctx->pc = 0x10C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1F0u;
    // 0x10c1f4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10C1F0u, 0x10C1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1F8u;
label_10c1f8:
    // 0x10c1f8: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x10c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x10c1fc: 0x10600289  beqz        $v1, . + 4 + (0x289 << 2)
    ctx->pc = 0x10C1FCu;
    {
        const bool branch_taken_0x10c1fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1FCu;
        // 0x10c200: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1fc) {
            ctx->pc = 0x10CC24u;
            goto label_10cc24;
        }
    }
    ctx->pc = 0x10C204u;
    // 0x10c204: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10c204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_10c208:
    // 0x10c208: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c20c: 0x8c43489c  lw          $v1, 0x489C($v0)
    ctx->pc = 0x10c20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x10c210: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10c210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10c214: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x10c214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10c218: 0x54440002  bnel        $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C218u;
    {
        const bool branch_taken_0x10c218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x10c218) {
            ctx->pc = 0x10C21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C218u;
            // 0x10c21c: 0xafa40004  sw          $a0, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C224u;
            goto label_10c224;
        }
    }
    ctx->pc = 0x10C220u;
    // 0x10c220: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x10c220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_10c224:
    // 0x10c224: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10c224u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x10c228: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x10c228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x10c22c: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10c230: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x10c230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x10c234: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x10c234u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10c238: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x10C238u;
    {
        const bool branch_taken_0x10c238 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10C23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C238u;
        // 0x10c23c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c238) {
            ctx->pc = 0x10C2C4u;
            goto label_10c2c4;
        }
    }
    ctx->pc = 0x10C240u;
    // 0x10c240: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x10c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10c244: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x10c244u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c248: 0x2c21818  mult        $v1, $s6, $v0
    ctx->pc = 0x10c248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c24c: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x10c24cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c250: 0x24120228  addiu       $s2, $zero, 0x228
    ctx->pc = 0x10c250u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 552));
    // 0x10c254: 0x74a821  addu        $s5, $v1, $s4
    ctx->pc = 0x10c254u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_10c258:
    // 0x10c258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10c258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10c25c: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x10c25cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51489Cu));
    // 0x10c260: 0xc0e409a  jal         func_390268
    ctx->pc = 0x10C260u;
    SET_GPR_U32(ctx, 31, 0x10C268u);
    ctx->pc = 0x10C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C260u;
    // 0x10c264: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x10C260u, 0x10C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C268u;
label_10c268:
    // 0x10c268: 0x904305b7  lbu         $v1, 0x5B7($v0)
    ctx->pc = 0x10c268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1463)));
    // 0x10c26c: 0x92a400a0  lbu         $a0, 0xA0($s5)
    ctx->pc = 0x10c26cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 160)));
    // 0x10c270: 0x1093000a  beq         $a0, $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x10C270u;
    {
        const bool branch_taken_0x10c270 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        ctx->pc = 0x10C274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C270u;
        // 0x10c274: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c270) {
            ctx->pc = 0x10C29Cu;
            goto label_10c29c;
        }
    }
    ctx->pc = 0x10C278u;
    // 0x10c278: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x10c278u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c27c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x10C27Cu;
    {
        const bool branch_taken_0x10c27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c27c) {
            ctx->pc = 0x10C280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C27Cu;
            // 0x10c280: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C2A8u;
            goto label_10c2a8;
        }
    }
    ctx->pc = 0x10C284u;
    // 0x10c284: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C284u;
    {
        const bool branch_taken_0x10c284 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C284u;
        // 0x10c288: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c284) {
            ctx->pc = 0x10C2A8u;
            goto label_10c2a8;
        }
    }
    ctx->pc = 0x10C28Cu;
    // 0x10c28c: 0x54730007  bnel        $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C28Cu;
    {
        const bool branch_taken_0x10c28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x10c28c) {
            ctx->pc = 0x10C290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C28Cu;
            // 0x10c290: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C2ACu;
            goto label_10c2ac;
        }
    }
    ctx->pc = 0x10C294u;
    // 0x10c294: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C294u;
    {
        const bool branch_taken_0x10c294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C294u;
        // 0x10c298: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c294) {
            ctx->pc = 0x10C2A8u;
            goto label_10c2a8;
        }
    }
    ctx->pc = 0x10C29Cu;
label_10c29c:
    // 0x10c29c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10C29Cu;
    {
        const bool branch_taken_0x10c29c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c29c) {
            ctx->pc = 0x10C2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C29Cu;
            // 0x10c2a0: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C2A4u;
            goto label_10c2a4;
        }
    }
    ctx->pc = 0x10C2A4u;
label_10c2a4:
    // 0x10c2a4: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10c2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10c2a8:
    // 0x10c2a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x10c2a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_10c2ac:
    // 0x10c2ac: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x10c2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x10c2b0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x10c2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x10c2b4: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x10c2b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10c2b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x10c2b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10c2bc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10C2BCu;
    {
        const bool branch_taken_0x10c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2BCu;
        // 0x10c2c0: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2bc) {
            ctx->pc = 0x10C258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c258;
        }
    }
    ctx->pc = 0x10C2C4u;
label_10c2c4:
    // 0x10c2c4: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x10c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x10c2c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10c2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c2cc: 0x2c21018  mult        $v0, $s6, $v0
    ctx->pc = 0x10c2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10c2d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x10c2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x10c2d4: 0x2829021  addu        $s2, $s4, $v0
    ctx->pc = 0x10c2d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c2d8: 0x8e43007c  lw          $v1, 0x7C($s2)
    ctx->pc = 0x10c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
    // 0x10c2dc: 0x14640244  bne         $v1, $a0, . + 4 + (0x244 << 2)
    ctx->pc = 0x10C2DCu;
    {
        const bool branch_taken_0x10c2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2DCu;
        // 0x10c2e0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2dc) {
            ctx->pc = 0x10CBF0u;
            goto label_10cbf0;
        }
    }
    ctx->pc = 0x10C2E4u;
    // 0x10c2e4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C2E4u;
    {
        const bool branch_taken_0x10c2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c2e4) {
            ctx->pc = 0x10C2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C2E4u;
            // 0x10c2e8: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C2FCu;
            goto label_10c2fc;
        }
    }
    ctx->pc = 0x10C2ECu;
    // 0x10c2ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x10c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x10c2f0: 0x1040023f  beqz        $v0, . + 4 + (0x23F << 2)
    ctx->pc = 0x10C2F0u;
    {
        const bool branch_taken_0x10c2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c2f0) {
            ctx->pc = 0x10CBF0u;
            goto label_10cbf0;
        }
    }
    ctx->pc = 0x10C2F8u;
    // 0x10c2f8: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x10c2f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_10c2fc:
    // 0x10c2fc: 0xc042ff0  jal         func_10BFC0
    ctx->pc = 0x10C2FCu;
    SET_GPR_U32(ctx, 31, 0x10C304u);
    ctx->pc = 0x10C300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2FCu;
    // 0x10c300: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BFC0u, 0x10C2FCu, 0x10C304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C304u;
label_10c304:
    // 0x10c304: 0x924300ac  lbu         $v1, 0xAC($s2)
    ctx->pc = 0x10c304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x10c308: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c30c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C30Cu;
    {
        const bool branch_taken_0x10c30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c30c) {
            ctx->pc = 0x10C310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C30Cu;
            // 0x10c310: 0x9242008d  lbu         $v0, 0x8D($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 141)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C324u;
            goto label_10c324;
        }
    }
    ctx->pc = 0x10C314u;
    // 0x10c314: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x10c314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x10c318: 0xc043008  jal         func_10C020
    ctx->pc = 0x10C318u;
    SET_GPR_U32(ctx, 31, 0x10C320u);
    ctx->pc = 0x10C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C318u;
    // 0x10c31c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C020u, 0x10C318u, 0x10C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C320u;
label_10c320:
    // 0x10c320: 0x9242008d  lbu         $v0, 0x8D($s2)
    ctx->pc = 0x10c320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 141)));
label_10c324:
    // 0x10c324: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10c324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x10c328: 0x8c83b734  lw          $v1, -0x48CC($a0)
    ctx->pc = 0x10c328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x10c32c: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x10c32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x10c330: 0x8e530080  lw          $s3, 0x80($s2)
    ctx->pc = 0x10c330u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x10c334: 0x8c7e0038  lw          $fp, 0x38($v1)
    ctx->pc = 0x10c334u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10c338: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x10c338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x10c33c: 0x10400233  beqz        $v0, . + 4 + (0x233 << 2)
    ctx->pc = 0x10C33Cu;
    {
        const bool branch_taken_0x10c33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C33Cu;
        // 0x10c340: 0x96510084  lhu         $s1, 0x84($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c33c) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C344u;
    // 0x10c344: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x10c344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x10c348: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10c348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10c34c: 0x24426cb0  addiu       $v0, $v0, 0x6CB0
    ctx->pc = 0x10c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27824));
    // 0x10c350: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c354: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10c354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c358: 0x800008  jr          $a0
    ctx->pc = 0x10C358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10C360u: goto label_10c360;
            case 0x10C45Cu: goto label_10c45c;
            case 0x10C618u: goto label_10c618;
            case 0x10C7F8u: goto label_10c7f8;
            case 0x10CA00u: goto label_10ca00;
            case 0x10CC0Cu: goto label_10cc0c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C358u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10C360u;
label_10c360:
    // 0x10c360: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x10c360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x10c364: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10c364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c368: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c36c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c36cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c370: 0xc044454  jal         func_111150
    ctx->pc = 0x10C370u;
    SET_GPR_U32(ctx, 31, 0x10C378u);
    ctx->pc = 0x10C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C370u;
    // 0x10c374: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10C370u, 0x10C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C378u;
label_10c378:
    // 0x10c378: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x10c378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c37c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c37cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c380: 0x0  nop
    ctx->pc = 0x10c380u;
    // NOP
    // 0x10c384: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x10C384u;
    {
        const bool branch_taken_0x10c384 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c384) {
            ctx->pc = 0x10C444u;
            goto label_10c444;
        }
    }
    ctx->pc = 0x10C38Cu;
    // 0x10c38c: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C38Cu;
    SET_GPR_U32(ctx, 31, 0x10C394u);
    ctx->pc = 0x10C390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C38Cu;
    // 0x10c390: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C38Cu, 0x10C394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C394u;
label_10c394:
    // 0x10c394: 0x5440021e  bnel        $v0, $zero, . + 4 + (0x21E << 2)
    ctx->pc = 0x10C394u;
    {
        const bool branch_taken_0x10c394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c394) {
            ctx->pc = 0x10C398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C394u;
            // 0x10c398: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C39Cu;
    // 0x10c39c: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10C39Cu;
    SET_GPR_U32(ctx, 31, 0x10C3A4u);
    ctx->pc = 0x10C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C39Cu;
    // 0x10c3a0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10C39Cu, 0x10C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3A4u;
label_10c3a4:
    // 0x10c3a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c3a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c3a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10c3a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10c3ac: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10c3acu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10c3b0: 0x4601a032  c.eq.s      $f20, $f1
    ctx->pc = 0x10c3b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c3b4: 0x0  nop
    ctx->pc = 0x10c3b4u;
    // NOP
    // 0x10c3b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x10C3B8u;
    {
        const bool branch_taken_0x10c3b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3B8u;
        // 0x10c3bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3b8) {
            ctx->pc = 0x10C3D8u;
            goto label_10c3d8;
        }
    }
    ctx->pc = 0x10C3C0u;
    // 0x10c3c0: 0x924300ac  lbu         $v1, 0xAC($s2)
    ctx->pc = 0x10c3c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x10c3c4: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C3C4u;
    {
        const bool branch_taken_0x10c3c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c3c4) {
            ctx->pc = 0x10C3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C3C4u;
            // 0x10c3c8: 0x8643008a  lh          $v1, 0x8A($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C3DCu;
            goto label_10c3dc;
        }
    }
    ctx->pc = 0x10C3CCu;
    // 0x10c3cc: 0xc043026  jal         func_10C098
    ctx->pc = 0x10C3CCu;
    SET_GPR_U32(ctx, 31, 0x10C3D4u);
    ctx->pc = 0x10C3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C3CCu;
    // 0x10c3d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C098u, 0x10C3CCu, 0x10C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C3D4u;
label_10c3d4:
    // 0x10c3d4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10c3d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_10c3d8:
    // 0x10c3d8: 0x8643008a  lh          $v1, 0x8A($s2)
    ctx->pc = 0x10c3d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
label_10c3dc:
    // 0x10c3dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c3e0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C3E0u;
    {
        const bool branch_taken_0x10c3e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C3E0u;
        // 0x10c3e4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c3e0) {
            ctx->pc = 0x10C40Cu;
            goto label_10c40c;
        }
    }
    ctx->pc = 0x10C3E8u;
    // 0x10c3e8: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c3ec: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10c3ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10c3f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x10c3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x10c3f4: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x10c3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10c3f8: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x10c3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c400: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c404: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x10C404u;
    {
        const bool branch_taken_0x10c404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C404u;
        // 0x10c408: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c404) {
            ctx->pc = 0x10C434u;
            goto label_10c434;
        }
    }
    ctx->pc = 0x10C40Cu;
label_10c40c:
    // 0x10c40c: 0xc043508  jal         func_10D420
    ctx->pc = 0x10C40Cu;
    SET_GPR_U32(ctx, 31, 0x10C414u);
    ctx->pc = 0x10C410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C40Cu;
    // 0x10c410: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D420u, 0x10C40Cu, 0x10C414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C414u;
label_10c414:
    // 0x10c414: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c418: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10c418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c41c: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x10c41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c420: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10c420u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10c424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c428: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c42c: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x10c42cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10c430: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10c430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10c434:
    // 0x10c434: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10C434u;
    SET_GPR_U32(ctx, 31, 0x10C43Cu);
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10C434u, 0x10C43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C43Cu;
label_10c43c:
    // 0x10c43c: 0x100001f3  b           . + 4 + (0x1F3 << 2)
    ctx->pc = 0x10C43Cu;
    {
        const bool branch_taken_0x10c43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C43Cu;
        // 0x10c440: 0xae420070  sw          $v0, 0x70($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c43c) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C444u;
label_10c444:
    // 0x10c444: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C444u;
    SET_GPR_U32(ctx, 31, 0x10C44Cu);
    ctx->pc = 0x10C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C444u;
    // 0x10c448: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C444u, 0x10C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C44Cu;
label_10c44c:
    // 0x10c44c: 0x504001f0  beql        $v0, $zero, . + 4 + (0x1F0 << 2)
    ctx->pc = 0x10C44Cu;
    {
        const bool branch_taken_0x10c44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c44c) {
            ctx->pc = 0x10C450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C44Cu;
            // 0x10c450: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C454u;
    // 0x10c454: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x10C454u;
    {
        const bool branch_taken_0x10c454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C454u;
        // 0x10c458: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c454) {
            ctx->pc = 0x10C9ECu;
            goto label_10c9ec;
        }
    }
    ctx->pc = 0x10C45Cu;
label_10c45c:
    // 0x10c45c: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x10c45cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x10c460: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c464: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c468: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c46c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x10c46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x10c470: 0xc044454  jal         func_111150
    ctx->pc = 0x10C470u;
    SET_GPR_U32(ctx, 31, 0x10C478u);
    ctx->pc = 0x10C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C470u;
    // 0x10c474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10C470u, 0x10C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C478u;
label_10c478:
    // 0x10c478: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10c478u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10c47c: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x10c47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c480: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10c480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c484: 0x0  nop
    ctx->pc = 0x10c484u;
    // NOP
    // 0x10c488: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
    ctx->pc = 0x10C488u;
    {
        const bool branch_taken_0x10c488 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C488u;
        // 0x10c48c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c488) {
            ctx->pc = 0x10C5C4u;
            goto label_10c5c4;
        }
    }
    ctx->pc = 0x10C490u;
    // 0x10c490: 0x8c4347c8  lw          $v1, 0x47C8($v0)
    ctx->pc = 0x10c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18376)));
    // 0x10c494: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x10C494u;
    {
        const bool branch_taken_0x10c494 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c494) {
            ctx->pc = 0x10C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C494u;
            // 0x10c498: 0x26500070  addiu       $s0, $s2, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C5C8u;
            goto label_10c5c8;
        }
    }
    ctx->pc = 0x10C49Cu;
    // 0x10c49c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10c4a0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c4a4: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C4A4u;
    SET_GPR_U32(ctx, 31, 0x10C4ACu);
    ctx->pc = 0x10C4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C4A4u;
    // 0x10c4a8: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C4A4u, 0x10C4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C4ACu;
label_10c4ac:
    // 0x10c4ac: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10c4b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c4b4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x10C4B4u;
    {
        const bool branch_taken_0x10c4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4B4u;
        // 0x10c4b8: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4b4) {
            ctx->pc = 0x10C5C4u;
            goto label_10c5c4;
        }
    }
    ctx->pc = 0x10C4BCu;
    // 0x10c4bc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x10c4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c4c0: 0x104001d2  beqz        $v0, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x10C4C0u;
    {
        const bool branch_taken_0x10c4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4C0u;
        // 0x10c4c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4c0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C4C8u;
    // 0x10c4c8: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x10c4c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x10c4cc: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C4CCu;
    {
        const bool branch_taken_0x10c4cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4CCu;
        // 0x10c4d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4cc) {
            ctx->pc = 0x10C4F8u;
            goto label_10c4f8;
        }
    }
    ctx->pc = 0x10C4D4u;
    // 0x10c4d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c4d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c4d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c4dc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c4e0: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x10c4e4: 0x506001ca  beql        $v1, $zero, . + 4 + (0x1CA << 2)
    ctx->pc = 0x10C4E4u;
    {
        const bool branch_taken_0x10c4e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c4e4) {
            ctx->pc = 0x10C4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C4E4u;
            // 0x10c4e8: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C4ECu;
    // 0x10c4ec: 0x8c423790  lw          $v0, 0x3790($v0)
    ctx->pc = 0x10c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c4f0: 0x104401c6  beq         $v0, $a0, . + 4 + (0x1C6 << 2)
    ctx->pc = 0x10C4F0u;
    {
        const bool branch_taken_0x10c4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C4F0u;
        // 0x10c4f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c4f0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C4F8u;
label_10c4f8:
    // 0x10c4f8: 0x54820008  bnel        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C4F8u;
    {
        const bool branch_taken_0x10c4f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x10c4f8) {
            ctx->pc = 0x10C4FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C4F8u;
            // 0x10c4fc: 0x8242008c  lb          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C51Cu;
            goto label_10c51c;
        }
    }
    ctx->pc = 0x10C500u;
    // 0x10c500: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c504: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c508: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c50c: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x10c50cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c510: 0x506001bf  beql        $v1, $zero, . + 4 + (0x1BF << 2)
    ctx->pc = 0x10C510u;
    {
        const bool branch_taken_0x10c510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c510) {
            ctx->pc = 0x10C514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C510u;
            // 0x10c514: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C518u;
    // 0x10c518: 0x8242008c  lb          $v0, 0x8C($s2)
    ctx->pc = 0x10c518u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_10c51c:
    // 0x10c51c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C51Cu;
    {
        const bool branch_taken_0x10c51c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C51Cu;
        // 0x10c520: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c51c) {
            ctx->pc = 0x10C53Cu;
            goto label_10c53c;
        }
    }
    ctx->pc = 0x10C524u;
    // 0x10c524: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10c528: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10c528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c52c: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x10c52cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x10c530: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10c530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x10c534: 0x10640078  beq         $v1, $a0, . + 4 + (0x78 << 2)
    ctx->pc = 0x10C534u;
    {
        const bool branch_taken_0x10c534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C534u;
        // 0x10c538: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c534) {
            ctx->pc = 0x10C718u;
            goto label_10c718;
        }
    }
    ctx->pc = 0x10C53Cu;
label_10c53c:
    // 0x10c53c: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10C53Cu;
    SET_GPR_U32(ctx, 31, 0x10C544u);
    ctx->pc = 0x10C540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C53Cu;
    // 0x10c540: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10C53Cu, 0x10C544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C544u;
label_10c544:
    // 0x10c544: 0x8643008a  lh          $v1, 0x8A($s2)
    ctx->pc = 0x10c544u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x10c548: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c54c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C54Cu;
    {
        const bool branch_taken_0x10c54c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C54Cu;
        // 0x10c550: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c54c) {
            ctx->pc = 0x10C564u;
            goto label_10c564;
        }
    }
    ctx->pc = 0x10C554u;
    // 0x10c554: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c558: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x10c558u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x10c55c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C55Cu;
    {
        const bool branch_taken_0x10c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C55Cu;
        // 0x10c560: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c55c) {
            ctx->pc = 0x10C57Cu;
            goto label_10c57c;
        }
    }
    ctx->pc = 0x10C564u;
label_10c564:
    // 0x10c564: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10c564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c568: 0xc043508  jal         func_10D420
    ctx->pc = 0x10C568u;
    SET_GPR_U32(ctx, 31, 0x10C570u);
    ctx->pc = 0x10C56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C568u;
    // 0x10c56c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D420u, 0x10C568u, 0x10C570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C570u;
label_10c570:
    // 0x10c570: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x10c570u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x10c574: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c574u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c578: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c57c:
    // 0x10c57c: 0xc0cd526  jal         func_335498
    ctx->pc = 0x10C57Cu;
    SET_GPR_U32(ctx, 31, 0x10C584u);
    ctx->pc = 0x10C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C57Cu;
    // 0x10c580: 0x2604b8b0  addiu       $a0, $s0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x10C57Cu, 0x10C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C584u;
label_10c584:
    // 0x10c584: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10c584u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c588: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x10c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c58c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10c58cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10c590: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c594: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x10c594u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c598: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c59c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c5a0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c5a4: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x10c5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c5a8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x10c5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x10c5ac: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10c5acu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10c5b0: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10C5B0u;
    SET_GPR_U32(ctx, 31, 0x10C5B8u);
    ctx->pc = 0x10C5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5B0u;
    // 0x10c5b4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10C5B0u, 0x10C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5B8u;
label_10c5b8:
    // 0x10c5b8: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x10c5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x10c5bc: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x10C5BCu;
    {
        const bool branch_taken_0x10c5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5BCu;
        // 0x10c5c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5bc) {
            ctx->pc = 0x10C97Cu;
            goto label_10c97c;
        }
    }
    ctx->pc = 0x10C5C4u;
label_10c5c4:
    // 0x10c5c4: 0x26500070  addiu       $s0, $s2, 0x70
    ctx->pc = 0x10c5c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_10c5c8:
    // 0x10c5c8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C5C8u;
    SET_GPR_U32(ctx, 31, 0x10C5D0u);
    ctx->pc = 0x10C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5C8u;
    // 0x10c5cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C5C8u, 0x10C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5D0u;
label_10c5d0:
    // 0x10c5d0: 0x1040018e  beqz        $v0, . + 4 + (0x18E << 2)
    ctx->pc = 0x10C5D0u;
    {
        const bool branch_taken_0x10c5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C5D0u;
        // 0x10c5d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c5d0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C5D8u;
    // 0x10c5d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c5dc: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C5DCu;
    SET_GPR_U32(ctx, 31, 0x10C5E4u);
    ctx->pc = 0x10C5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5DCu;
    // 0x10c5e0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C5DCu, 0x10C5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5E4u;
label_10c5e4:
    // 0x10c5e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c5e8: 0x54400100  bnel        $v0, $zero, . + 4 + (0x100 << 2)
    ctx->pc = 0x10C5E8u;
    {
        const bool branch_taken_0x10c5e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c5e8) {
            ctx->pc = 0x10C5ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5E8u;
            // 0x10c5ec: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C9ECu;
            goto label_10c9ec;
        }
    }
    ctx->pc = 0x10C5F0u;
    // 0x10c5f0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C5F0u;
    SET_GPR_U32(ctx, 31, 0x10C5F8u);
    ctx->pc = 0x10C5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5F0u;
    // 0x10c5f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C5F0u, 0x10C5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C5F8u;
label_10c5f8:
    // 0x10c5f8: 0xc043c7a  jal         func_10F1E8
    ctx->pc = 0x10C5F8u;
    SET_GPR_U32(ctx, 31, 0x10C600u);
    ctx->pc = 0x10C5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C5F8u;
    // 0x10c5fc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F1E8u, 0x10C5F8u, 0x10C600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C600u;
label_10c600:
    // 0x10c600: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10c600u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c604: 0x0  nop
    ctx->pc = 0x10c604u;
    // NOP
    // 0x10c608: 0x45020181  bc1fl       . + 4 + (0x181 << 2)
    ctx->pc = 0x10C608u;
    {
        const bool branch_taken_0x10c608 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c608) {
            ctx->pc = 0x10C60Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C608u;
            // 0x10c60c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C610u;
    // 0x10c610: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x10C610u;
    {
        const bool branch_taken_0x10c610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C610u;
        // 0x10c614: 0x8e450070  lw          $a1, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c610) {
            ctx->pc = 0x10C9ECu;
            goto label_10c9ec;
        }
    }
    ctx->pc = 0x10C618u;
label_10c618:
    // 0x10c618: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x10c618u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x10c61c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10c61cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c620: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c628: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x10c628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x10c62c: 0xc044454  jal         func_111150
    ctx->pc = 0x10C62Cu;
    SET_GPR_U32(ctx, 31, 0x10C634u);
    ctx->pc = 0x10C630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C62Cu;
    // 0x10c630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10C62Cu, 0x10C634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C634u;
label_10c634:
    // 0x10c634: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x10c634u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x10c638: 0xc6400074  lwc1        $f0, 0x74($s2)
    ctx->pc = 0x10c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c63c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x10c63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c640: 0x0  nop
    ctx->pc = 0x10c640u;
    // NOP
    // 0x10c644: 0x4500ffdf  bc1f        . + 4 + (-0x21 << 2)
    ctx->pc = 0x10C644u;
    {
        const bool branch_taken_0x10c644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C644u;
        // 0x10c648: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c644) {
            ctx->pc = 0x10C5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c5c4;
        }
    }
    ctx->pc = 0x10C64Cu;
    // 0x10c64c: 0x8c4347c8  lw          $v1, 0x47C8($v0)
    ctx->pc = 0x10c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18376)));
    // 0x10c650: 0x5460ffdd  bnel        $v1, $zero, . + 4 + (-0x23 << 2)
    ctx->pc = 0x10C650u;
    {
        const bool branch_taken_0x10c650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c650) {
            ctx->pc = 0x10C654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C650u;
            // 0x10c654: 0x26500070  addiu       $s0, $s2, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C5C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c5c8;
        }
    }
    ctx->pc = 0x10C658u;
    // 0x10c658: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10c65c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c660: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C660u;
    SET_GPR_U32(ctx, 31, 0x10C668u);
    ctx->pc = 0x10C664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C660u;
    // 0x10c664: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C660u, 0x10C668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C668u;
label_10c668:
    // 0x10c668: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10c66c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c670: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x10C670u;
    {
        const bool branch_taken_0x10c670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C670u;
        // 0x10c674: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c670) {
            ctx->pc = 0x10C5C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c5c4;
        }
    }
    ctx->pc = 0x10C678u;
    // 0x10c678: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x10c678u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c67c: 0x10400163  beqz        $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x10C67Cu;
    {
        const bool branch_taken_0x10c67c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C67Cu;
        // 0x10c680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c67c) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C684u;
    // 0x10c684: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x10c684u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x10c688: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C688u;
    {
        const bool branch_taken_0x10c688 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C688u;
        // 0x10c68c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c688) {
            ctx->pc = 0x10C6B4u;
            goto label_10c6b4;
        }
    }
    ctx->pc = 0x10C690u;
    // 0x10c690: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c694: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c698: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c69c: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x10c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x10c6a0: 0x5060015b  beql        $v1, $zero, . + 4 + (0x15B << 2)
    ctx->pc = 0x10C6A0u;
    {
        const bool branch_taken_0x10c6a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c6a0) {
            ctx->pc = 0x10C6A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C6A0u;
            // 0x10c6a4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C6A8u;
    // 0x10c6a8: 0x8c423790  lw          $v0, 0x3790($v0)
    ctx->pc = 0x10c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c6ac: 0x10440157  beq         $v0, $a0, . + 4 + (0x157 << 2)
    ctx->pc = 0x10C6ACu;
    {
        const bool branch_taken_0x10c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6ACu;
        // 0x10c6b0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6ac) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C6B4u;
label_10c6b4:
    // 0x10c6b4: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C6B4u;
    {
        const bool branch_taken_0x10c6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6B4u;
        // 0x10c6b8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6b4) {
            ctx->pc = 0x10C6D4u;
            goto label_10c6d4;
        }
    }
    ctx->pc = 0x10C6BCu;
    // 0x10c6bc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c6c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c6c4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c6c8: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x10c6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c6cc: 0x1060014f  beqz        $v1, . + 4 + (0x14F << 2)
    ctx->pc = 0x10C6CCu;
    {
        const bool branch_taken_0x10c6cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6CCu;
        // 0x10c6d0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6cc) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C6D4u;
label_10c6d4:
    // 0x10c6d4: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x10c6d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c6d8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x10c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10c6dc: 0x5e102b  sltu        $v0, $v0, $fp
    ctx->pc = 0x10c6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x10c6e0: 0x5040014b  beql        $v0, $zero, . + 4 + (0x14B << 2)
    ctx->pc = 0x10C6E0u;
    {
        const bool branch_taken_0x10c6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c6e0) {
            ctx->pc = 0x10C6E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C6E0u;
            // 0x10c6e4: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C6E8u;
    // 0x10c6e8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C6E8u;
    SET_GPR_U32(ctx, 31, 0x10C6F0u);
    ctx->pc = 0x10C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6E8u;
    // 0x10c6ec: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C6E8u, 0x10C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6F0u;
label_10c6f0:
    // 0x10c6f0: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x10C6F0u;
    {
        const bool branch_taken_0x10c6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6F0u;
        // 0x10c6f4: 0x8242008c  lb          $v0, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f0) {
            ctx->pc = 0x10C7B8u;
            goto label_10c7b8;
        }
    }
    ctx->pc = 0x10C6F8u;
    // 0x10c6f8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C6F8u;
    {
        const bool branch_taken_0x10c6f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6F8u;
        // 0x10c6fc: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6f8) {
            ctx->pc = 0x10C720u;
            goto label_10c720;
        }
    }
    ctx->pc = 0x10C700u;
    // 0x10c700: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10c700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10c704: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10c704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c708: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x10c708u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x10c70c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10c70cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x10c710: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C710u;
    {
        const bool branch_taken_0x10c710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10C714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C710u;
        // 0x10c714: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c710) {
            ctx->pc = 0x10C720u;
            goto label_10c720;
        }
    }
    ctx->pc = 0x10C718u;
label_10c718:
    // 0x10c718: 0x1000013c  b           . + 4 + (0x13C << 2)
    ctx->pc = 0x10C718u;
    {
        const bool branch_taken_0x10c718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C718u;
        // 0x10c71c: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c718) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C720u;
label_10c720:
    // 0x10c720: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10C720u;
    SET_GPR_U32(ctx, 31, 0x10C728u);
    ctx->pc = 0x10C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C720u;
    // 0x10c724: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10C720u, 0x10C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C728u;
label_10c728:
    // 0x10c728: 0x8643008a  lh          $v1, 0x8A($s2)
    ctx->pc = 0x10c728u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x10c72c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c730: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C730u;
    {
        const bool branch_taken_0x10c730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C730u;
        // 0x10c734: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c730) {
            ctx->pc = 0x10C74Cu;
            goto label_10c74c;
        }
    }
    ctx->pc = 0x10C738u;
    // 0x10c738: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c738u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c73c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10c740: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x10c740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
    // 0x10c744: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x10C744u;
    {
        const bool branch_taken_0x10c744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C744u;
        // 0x10c748: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c744) {
            ctx->pc = 0x10C768u;
            goto label_10c768;
        }
    }
    ctx->pc = 0x10C74Cu;
label_10c74c:
    // 0x10c74c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10c74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c750: 0xc043508  jal         func_10D420
    ctx->pc = 0x10C750u;
    SET_GPR_U32(ctx, 31, 0x10C758u);
    ctx->pc = 0x10C754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C750u;
    // 0x10c754: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D420u, 0x10C750u, 0x10C758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C758u;
label_10c758:
    // 0x10c758: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c758u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c75c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10c760: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10c760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c764: 0x2484b8b0  addiu       $a0, $a0, -0x4750
    ctx->pc = 0x10c764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
label_10c768:
    // 0x10c768: 0xc0cd526  jal         func_335498
    ctx->pc = 0x10C768u;
    SET_GPR_U32(ctx, 31, 0x10C770u);
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x10C768u, 0x10C770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C770u;
label_10c770:
    // 0x10c770: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10c770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c774: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x10c774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c778: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10c778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10c77c: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c780: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x10c780u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c784: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c788: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c78c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c78cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c790: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x10c790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c794: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x10c794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x10c798: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10c798u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10c79c: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10C79Cu;
    SET_GPR_U32(ctx, 31, 0x10C7A4u);
    ctx->pc = 0x10C7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C79Cu;
    // 0x10c7a0: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10C79Cu, 0x10C7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C7A4u;
label_10c7a4:
    // 0x10c7a4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x10c7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x10c7a8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x10c7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c7ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x10c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10c7b0: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x10c7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x10c7b4: 0x8242008c  lb          $v0, 0x8C($s2)
    ctx->pc = 0x10c7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
label_10c7b8:
    // 0x10c7b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C7B8u;
    {
        const bool branch_taken_0x10c7b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7B8u;
        // 0x10c7bc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7b8) {
            ctx->pc = 0x10C7DCu;
            goto label_10c7dc;
        }
    }
    ctx->pc = 0x10C7C0u;
    // 0x10c7c0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10c7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10c7c4: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x10c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x10c7c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x10c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c7cc: 0x8c440038  lw          $a0, 0x38($v0)
    ctx->pc = 0x10c7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10c7d0: 0xa6430084  sh          $v1, 0x84($s2)
    ctx->pc = 0x10c7d0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x10c7d4: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x10C7D4u;
    {
        const bool branch_taken_0x10c7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7D4u;
        // 0x10c7d8: 0xae440080  sw          $a0, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7d4) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C7DCu;
label_10c7dc:
    // 0x10c7dc: 0x96450086  lhu         $a1, 0x86($s2)
    ctx->pc = 0x10c7dcu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x10c7e0: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x10c7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x10c7e4: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x10c7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x10c7e8: 0x96460088  lhu         $a2, 0x88($s2)
    ctx->pc = 0x10c7e8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x10c7ec: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x10c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10c7f0: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x10C7F0u;
    {
        const bool branch_taken_0x10c7f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C7F0u;
        // 0x10c7f4: 0x2484b8b0  addiu       $a0, $a0, -0x4750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c7f0) {
            ctx->pc = 0x10C9A4u;
            goto label_10c9a4;
        }
    }
    ctx->pc = 0x10C7F8u;
label_10c7f8:
    // 0x10c7f8: 0x7a420060  lq          $v0, 0x60($s2)
    ctx->pc = 0x10c7f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x10c7fc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x10c7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c800: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c804: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10c804u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c808: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x10c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x10c80c: 0xc044454  jal         func_111150
    ctx->pc = 0x10C80Cu;
    SET_GPR_U32(ctx, 31, 0x10C814u);
    ctx->pc = 0x10C810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C80Cu;
    // 0x10c810: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10C80Cu, 0x10C814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C814u;
label_10c814:
    // 0x10c814: 0xc6410074  lwc1        $f1, 0x74($s2)
    ctx->pc = 0x10c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c818: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x10c818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c81c: 0x0  nop
    ctx->pc = 0x10c81cu;
    // NOP
    // 0x10c820: 0x45000069  bc1f        . + 4 + (0x69 << 2)
    ctx->pc = 0x10C820u;
    {
        const bool branch_taken_0x10c820 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C820u;
        // 0x10c824: 0x26550070  addiu       $s5, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c820) {
            ctx->pc = 0x10C9C8u;
            goto label_10c9c8;
        }
    }
    ctx->pc = 0x10C828u;
    // 0x10c828: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C828u;
    SET_GPR_U32(ctx, 31, 0x10C830u);
    ctx->pc = 0x10C82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C828u;
    // 0x10c82c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C828u, 0x10C830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C830u;
label_10c830:
    // 0x10c830: 0x14400065  bnez        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x10C830u;
    {
        const bool branch_taken_0x10c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C830u;
        // 0x10c834: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c830) {
            ctx->pc = 0x10C9C8u;
            goto label_10c9c8;
        }
    }
    ctx->pc = 0x10C838u;
    // 0x10c838: 0x8c4347c8  lw          $v1, 0x47C8($v0)
    ctx->pc = 0x10c838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18376)));
    // 0x10c83c: 0x14600062  bnez        $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x10C83Cu;
    {
        const bool branch_taken_0x10c83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C83Cu;
        // 0x10c840: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c83c) {
            ctx->pc = 0x10C9C8u;
            goto label_10c9c8;
        }
    }
    ctx->pc = 0x10C844u;
    // 0x10c844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c848: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C848u;
    SET_GPR_U32(ctx, 31, 0x10C850u);
    ctx->pc = 0x10C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C848u;
    // 0x10c84c: 0x8c64489c  lw          $a0, 0x489C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C848u, 0x10C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C850u;
label_10c850:
    // 0x10c850: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x10c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x10c854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c858: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x10C858u;
    {
        const bool branch_taken_0x10c858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C858u;
        // 0x10c85c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c858) {
            ctx->pc = 0x10C9C8u;
            goto label_10c9c8;
        }
    }
    ctx->pc = 0x10C860u;
    // 0x10c860: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x10c860u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x10c864: 0x104000e9  beqz        $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x10C864u;
    {
        const bool branch_taken_0x10c864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C864u;
        // 0x10c868: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c864) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C86Cu;
    // 0x10c86c: 0x924400ac  lbu         $a0, 0xAC($s2)
    ctx->pc = 0x10c86cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 172)));
    // 0x10c870: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C870u;
    {
        const bool branch_taken_0x10c870 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C870u;
        // 0x10c874: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c870) {
            ctx->pc = 0x10C89Cu;
            goto label_10c89c;
        }
    }
    ctx->pc = 0x10C878u;
    // 0x10c878: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c87c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c87cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c880: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c884: 0x8c433788  lw          $v1, 0x3788($v0)
    ctx->pc = 0x10c884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14216)));
    // 0x10c888: 0x506000e1  beql        $v1, $zero, . + 4 + (0xE1 << 2)
    ctx->pc = 0x10C888u;
    {
        const bool branch_taken_0x10c888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c888) {
            ctx->pc = 0x10C88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C888u;
            // 0x10c88c: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10C890u;
    // 0x10c890: 0x8c423790  lw          $v0, 0x3790($v0)
    ctx->pc = 0x10c890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c894: 0x104400dd  beq         $v0, $a0, . + 4 + (0xDD << 2)
    ctx->pc = 0x10C894u;
    {
        const bool branch_taken_0x10c894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x10C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C894u;
        // 0x10c898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c894) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C89Cu;
label_10c89c:
    // 0x10c89c: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C89Cu;
    {
        const bool branch_taken_0x10c89c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C89Cu;
        // 0x10c8a0: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c89c) {
            ctx->pc = 0x10C8BCu;
            goto label_10c8bc;
        }
    }
    ctx->pc = 0x10C8A4u;
    // 0x10c8a4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10c8a8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c8ac: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x10c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x10c8b0: 0x8c433790  lw          $v1, 0x3790($v0)
    ctx->pc = 0x10c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14224)));
    // 0x10c8b4: 0x106000d5  beqz        $v1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x10C8B4u;
    {
        const bool branch_taken_0x10c8b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8B4u;
        // 0x10c8b8: 0x240203e8  addiu       $v0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8b4) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C8BCu;
label_10c8bc:
    // 0x10c8bc: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x10c8bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10c8c0: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x10c8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x10c8c4: 0x3c2102b  sltu        $v0, $fp, $v0
    ctx->pc = 0x10c8c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10c8c8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x10C8C8u;
    {
        const bool branch_taken_0x10c8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8C8u;
        // 0x10c8cc: 0x3c040051  lui         $a0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8c8) {
            ctx->pc = 0x10C9B4u;
            goto label_10c9b4;
        }
    }
    ctx->pc = 0x10C8D0u;
    // 0x10c8d0: 0x8242008c  lb          $v0, 0x8C($s2)
    ctx->pc = 0x10c8d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10c8d4: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C8D4u;
    {
        const bool branch_taken_0x10c8d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x10C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D4u;
        // 0x10c8d8: 0x9243008c  lbu         $v1, 0x8C($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d4) {
            ctx->pc = 0x10C8F8u;
            goto label_10c8f8;
        }
    }
    ctx->pc = 0x10C8DCu;
    // 0x10c8dc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x10c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10c8e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10c8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c8e4: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x10c8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x10c8e8: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x10c8e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x10c8ec: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C8ECu;
    {
        const bool branch_taken_0x10c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x10C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8ECu;
        // 0x10c8f0: 0xa242008c  sb          $v0, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8ec) {
            ctx->pc = 0x10C8F8u;
            goto label_10c8f8;
        }
    }
    ctx->pc = 0x10C8F4u;
    // 0x10c8f4: 0xae40007c  sw          $zero, 0x7C($s2)
    ctx->pc = 0x10c8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
label_10c8f8:
    // 0x10c8f8: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10C8F8u;
    SET_GPR_U32(ctx, 31, 0x10C900u);
    ctx->pc = 0x10C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8F8u;
    // 0x10c8fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10C8F8u, 0x10C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C900u;
label_10c900:
    // 0x10c900: 0x8643008a  lh          $v1, 0x8A($s2)
    ctx->pc = 0x10c900u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x10c904: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10c908: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C908u;
    {
        const bool branch_taken_0x10c908 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C908u;
        // 0x10c90c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c908) {
            ctx->pc = 0x10C920u;
            goto label_10c920;
        }
    }
    ctx->pc = 0x10C910u;
    // 0x10c910: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c910u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c914: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x10c914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x10c918: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x10C918u;
    {
        const bool branch_taken_0x10c918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C918u;
        // 0x10c91c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c918) {
            ctx->pc = 0x10C938u;
            goto label_10c938;
        }
    }
    ctx->pc = 0x10C920u;
label_10c920:
    // 0x10c920: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x10c920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c924: 0xc043508  jal         func_10D420
    ctx->pc = 0x10C924u;
    SET_GPR_U32(ctx, 31, 0x10C92Cu);
    ctx->pc = 0x10C928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C924u;
    // 0x10c928: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D420u, 0x10C924u, 0x10C92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C92Cu;
label_10c92c:
    // 0x10c92c: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x10c92cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x10c930: 0x9245008e  lbu         $a1, 0x8E($s2)
    ctx->pc = 0x10c930u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 142)));
    // 0x10c934: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x10c934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10c938:
    // 0x10c938: 0xc0cd526  jal         func_335498
    ctx->pc = 0x10C938u;
    SET_GPR_U32(ctx, 31, 0x10C940u);
    ctx->pc = 0x10C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C938u;
    // 0x10c93c: 0x2604b8b0  addiu       $a0, $s0, -0x4750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x10C938u, 0x10C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C940u;
label_10c940:
    // 0x10c940: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10c940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10c944: 0xc64c0078  lwc1        $f12, 0x78($s2)
    ctx->pc = 0x10c944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c948: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x10c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x10c94c: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10c94cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10c950: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x10c950u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x10c954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x10c954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c958: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c95c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c95cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c960: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x10c960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c964: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x10c964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x10c968: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x10c968u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x10c96c: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10C96Cu;
    SET_GPR_U32(ctx, 31, 0x10C974u);
    ctx->pc = 0x10C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C96Cu;
    // 0x10c970: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10C96Cu, 0x10C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C974u;
label_10c974:
    // 0x10c974: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x10c974u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x10c978: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10c978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10c97c:
    // 0x10c97c: 0x96450086  lhu         $a1, 0x86($s2)
    ctx->pc = 0x10c97cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 134)));
    // 0x10c980: 0xa242008d  sb          $v0, 0x8D($s2)
    ctx->pc = 0x10c980u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 141), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c984: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x10c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x10c988: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x10c988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c98c: 0x2604b8b0  addiu       $a0, $s0, -0x4750
    ctx->pc = 0x10c98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294949040));
    // 0x10c990: 0x96460088  lhu         $a2, 0x88($s2)
    ctx->pc = 0x10c990u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x10c994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c998: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x10c998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x10c99c: 0x8c62b734  lw          $v0, -0x48CC($v1)
    ctx->pc = 0x10c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50B734u));
    // 0x10c9a0: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x10c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_10c9a4:
    // 0x10c9a4: 0xc0cd4fc  jal         func_3353F0
    ctx->pc = 0x10C9A4u;
    SET_GPR_U32(ctx, 31, 0x10C9ACu);
    ctx->pc = 0x10C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9A4u;
    // 0x10c9a8: 0xae430080  sw          $v1, 0x80($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353F0u, 0x10C9A4u, 0x10C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9ACu;
label_10c9ac:
    // 0x10c9ac: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x10C9ACu;
    {
        const bool branch_taken_0x10c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9ACu;
        // 0x10c9b0: 0xa6420084  sh          $v0, 0x84($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9ac) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C9B4u;
label_10c9b4:
    // 0x10c9b4: 0x8c82b734  lw          $v0, -0x48CC($a0)
    ctx->pc = 0x10c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x10c9b8: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x10c9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x10c9bc: 0xa6400084  sh          $zero, 0x84($s2)
    ctx->pc = 0x10c9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 132), (uint16_t)GPR_U32(ctx, 0));
    // 0x10c9c0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x10C9C0u;
    {
        const bool branch_taken_0x10c9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9C0u;
        // 0x10c9c4: 0xae430080  sw          $v1, 0x80($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9c0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C9C8u;
label_10c9c8:
    // 0x10c9c8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10C9C8u;
    SET_GPR_U32(ctx, 31, 0x10C9D0u);
    ctx->pc = 0x10C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9C8u;
    // 0x10c9cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10C9C8u, 0x10C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9D0u;
label_10c9d0:
    // 0x10c9d0: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
    ctx->pc = 0x10C9D0u;
    {
        const bool branch_taken_0x10c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9D0u;
        // 0x10c9d4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9d0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10C9D8u;
    // 0x10c9d8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x10c9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c9dc: 0xc1073cc  jal         func_41CF30
    ctx->pc = 0x10C9DCu;
    SET_GPR_U32(ctx, 31, 0x10C9E4u);
    ctx->pc = 0x10C9E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9DCu;
    // 0x10c9e0: 0x8c44489c  lw          $a0, 0x489C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x10C9DCu, 0x10C9E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9E4u;
label_10c9e4:
    // 0x10c9e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10c9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10c9e8: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x10c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_10c9ec:
    // 0x10c9ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c9f0: 0xc0440c6  jal         func_110318
    ctx->pc = 0x10C9F0u;
    SET_GPR_U32(ctx, 31, 0x10C9F8u);
    ctx->pc = 0x10C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C9F0u;
    // 0x10c9f4: 0x8ee4aa84  lw          $a0, -0x557C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x10C9F0u, 0x10C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C9F8u;
label_10c9f8:
    // 0x10c9f8: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x10C9F8u;
    {
        const bool branch_taken_0x10c9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C9F8u;
        // 0x10c9fc: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c9f8) {
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10CA00u;
label_10ca00:
    // 0x10ca00: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x10ca00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    // 0x10ca04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca08: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10CA08u;
    SET_GPR_U32(ctx, 31, 0x10CA10u);
    ctx->pc = 0x10CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CA08u;
    // 0x10ca0c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10CA08u, 0x10CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CA10u;
label_10ca10:
    // 0x10ca10: 0x5440007f  bnel        $v0, $zero, . + 4 + (0x7F << 2)
    ctx->pc = 0x10CA10u;
    {
        const bool branch_taken_0x10ca10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ca10) {
            ctx->pc = 0x10CA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CA10u;
            // 0x10ca14: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10CA18u;
    // 0x10ca18: 0x8642008a  lh          $v0, 0x8A($s2)
    ctx->pc = 0x10ca18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x10ca1c: 0x24080014  addiu       $t0, $zero, 0x14
    ctx->pc = 0x10ca1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x10ca20: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x10ca20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x10ca24: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10ca24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10ca28: 0x9245008c  lbu         $a1, 0x8C($s2)
    ctx->pc = 0x10ca28u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x10ca2c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10CA2Cu;
    {
        const bool branch_taken_0x10ca2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA2Cu;
        // 0x10ca30: 0x8253008c  lb          $s3, 0x8C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca2c) {
            ctx->pc = 0x10CA44u;
            goto label_10ca44;
        }
    }
    ctx->pc = 0x10CA34u;
    // 0x10ca34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10ca34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10ca38: 0x26510098  addiu       $s1, $s2, 0x98
    ctx->pc = 0x10ca38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x10ca3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10CA3Cu;
    {
        const bool branch_taken_0x10ca3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA3Cu;
        // 0x10ca40: 0xa642008a  sh          $v0, 0x8A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca3c) {
            ctx->pc = 0x10CA94u;
            goto label_10ca94;
        }
    }
    ctx->pc = 0x10CA44u;
label_10ca44:
    // 0x10ca44: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x10ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x10ca48: 0x26480098  addiu       $t0, $s2, 0x98
    ctx->pc = 0x10ca48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 152));
    // 0x10ca4c: 0xa640008a  sh          $zero, 0x8A($s2)
    ctx->pc = 0x10ca4cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 138), (uint16_t)GPR_U32(ctx, 0));
    // 0x10ca50: 0x2409026d  addiu       $t1, $zero, 0x26D
    ctx->pc = 0x10ca50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 621));
    // 0x10ca54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ca54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ca58: 0x8ee6aa84  lw          $a2, -0x557C($s7)
    ctx->pc = 0x10ca58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10ca5c: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x10ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x10ca60: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10ca60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x10ca64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10ca68: 0x52600  sll         $a0, $a1, 24
    ctx->pc = 0x10ca68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x10ca6c: 0x8cc70214  lw          $a3, 0x214($a2)
    ctx->pc = 0x10ca6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
    // 0x10ca70: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x10ca70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca74: 0x691818  mult        $v1, $v1, $t1
    ctx->pc = 0x10ca74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10ca78: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x10ca78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x10ca7c: 0x24080015  addiu       $t0, $zero, 0x15
    ctx->pc = 0x10ca7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x10ca80: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x10ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x10ca84: 0x90620040  lbu         $v0, 0x40($v1)
    ctx->pc = 0x10ca84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x10ca88: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CA88u;
    {
        const bool branch_taken_0x10ca88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10CA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CA88u;
        // 0x10ca8c: 0xa245008c  sb          $a1, 0x8C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ca88) {
            ctx->pc = 0x10CA94u;
            goto label_10ca94;
        }
    }
    ctx->pc = 0x10CA90u;
    // 0x10ca90: 0xa240008c  sb          $zero, 0x8C($s2)
    ctx->pc = 0x10ca90u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 140), (uint8_t)GPR_U32(ctx, 0));
label_10ca94:
    // 0x10ca94: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x10ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x10ca98: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x10ca98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ca9c: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10ca9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10caa0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x10caa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10caa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10caa8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10caac: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x10CAACu;
    SET_GPR_U32(ctx, 31, 0x10CAB4u);
    ctx->pc = 0x10CAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAACu;
    // 0x10cab0: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x10CAACu, 0x10CAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAB4u;
label_10cab4:
    // 0x10cab4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10cab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cab8: 0x12000054  beqz        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x10CAB8u;
    {
        const bool branch_taken_0x10cab8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CAB8u;
        // 0x10cabc: 0x8ee4aa84  lw          $a0, -0x557C($s7) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cab8) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10CAC0u;
    // 0x10cac0: 0xc044382  jal         func_110E08
    ctx->pc = 0x10CAC0u;
    SET_GPR_U32(ctx, 31, 0x10CAC8u);
    ctx->pc = 0x10CAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAC0u;
    // 0x10cac4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E08u, 0x10CAC0u, 0x10CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAC8u;
label_10cac8:
    // 0x10cac8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x10cac8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x10cacc: 0x46140501  sub.s       $f20, $f0, $f20
    ctx->pc = 0x10caccu;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x10cad0: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10cad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10cad4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10cad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10cad8: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x10cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x10cadc: 0xc044454  jal         func_111150
    ctx->pc = 0x10CADCu;
    SET_GPR_U32(ctx, 31, 0x10CAE4u);
    ctx->pc = 0x10CAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CADCu;
    // 0x10cae0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111150u, 0x10CADCu, 0x10CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAE4u;
label_10cae4:
    // 0x10cae4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x10cae4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cae8: 0x0  nop
    ctx->pc = 0x10cae8u;
    // NOP
    // 0x10caec: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x10CAECu;
    {
        const bool branch_taken_0x10caec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x10caec) {
            ctx->pc = 0x10CAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CAECu;
            // 0x10caf0: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CB34u;
            goto label_10cb34;
        }
    }
    ctx->pc = 0x10CAF4u;
    // 0x10caf4: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10CAF4u;
    SET_GPR_U32(ctx, 31, 0x10CAFCu);
    ctx->pc = 0x10CAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CAF4u;
    // 0x10caf8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10CAF4u, 0x10CAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CAFCu;
label_10cafc:
    // 0x10cafc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10cafcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10cb00: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x10cb00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10cb04: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x10cb04u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10cb08: 0x0  nop
    ctx->pc = 0x10cb08u;
    // NOP
    // 0x10cb0c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10CB0Cu;
    {
        const bool branch_taken_0x10cb0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB0Cu;
        // 0x10cb10: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb0c) {
            ctx->pc = 0x10CB18u;
            goto label_10cb18;
        }
    }
    ctx->pc = 0x10CB14u;
    // 0x10cb14: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10cb14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10cb18:
    // 0x10cb18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cb18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cb1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x10cb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10cb20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cb20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb24: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10cb28: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x10cb28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x10cb2c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10CB2Cu;
    {
        const bool branch_taken_0x10cb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CB2Cu;
        // 0x10cb30: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cb2c) {
            ctx->pc = 0x10CB9Cu;
            goto label_10cb9c;
        }
    }
    ctx->pc = 0x10CB34u;
label_10cb34:
    // 0x10cb34: 0x2408004e  addiu       $t0, $zero, 0x4E
    ctx->pc = 0x10cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x10cb38: 0x8643008a  lh          $v1, 0x8A($s2)
    ctx->pc = 0x10cb38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 138)));
    // 0x10cb3c: 0x2406004d  addiu       $a2, $zero, 0x4D
    ctx->pc = 0x10cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x10cb40: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10cb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10cb44: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10cb48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10cb4c: 0x103300b  movn        $a2, $t0, $v1
    ctx->pc = 0x10cb4cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
    // 0x10cb50: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x10cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cb54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cb54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cb58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10cb58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10cb5c: 0xc04442a  jal         func_1110A8
    ctx->pc = 0x10CB5Cu;
    SET_GPR_U32(ctx, 31, 0x10CB64u);
    ctx->pc = 0x10CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB5Cu;
    // 0x10cb60: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1110A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110A8u, 0x10CB5Cu, 0x10CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB64u;
label_10cb64:
    // 0x10cb64: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x10CB64u;
    {
        const bool branch_taken_0x10cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10cb64) {
            ctx->pc = 0x10CB68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CB64u;
            // 0x10cb68: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CB74u;
            goto label_10cb74;
        }
    }
    ctx->pc = 0x10CB6Cu;
    // 0x10cb6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x10cb6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x10cb70: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10cb70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_10cb74:
    // 0x10cb74: 0xc042fe4  jal         func_10BF90
    ctx->pc = 0x10CB74u;
    SET_GPR_U32(ctx, 31, 0x10CB7Cu);
    ctx->pc = 0x10CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CB74u;
    // 0x10cb78: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BF90u, 0x10CB74u, 0x10CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CB7Cu;
label_10cb7c:
    // 0x10cb7c: 0x8ee4aa84  lw          $a0, -0x557C($s7)
    ctx->pc = 0x10cb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    // 0x10cb80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x10cb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10cb84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10cb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10cb88: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10cb88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10cb8c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10cb8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10cb90: 0x46000386  mov.s       $f14, $f0
    ctx->pc = 0x10cb90u;
    ctx->f[14] = FPU_MOV_S(ctx->f[0]);
    // 0x10cb94: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x10cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x10cb98: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x10cb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10cb9c:
    // 0x10cb9c: 0xc043f74  jal         func_10FDD0
    ctx->pc = 0x10CB9Cu;
    SET_GPR_U32(ctx, 31, 0x10CBA4u);
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x10CB9Cu, 0x10CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBA4u;
label_10cba4:
    // 0x10cba4: 0xae420070  sw          $v0, 0x70($s2)
    ctx->pc = 0x10cba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 2));
    // 0x10cba8: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10CBA8u;
    SET_GPR_U32(ctx, 31, 0x10CBB0u);
    ctx->pc = 0x10CBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBA8u;
    // 0x10cbac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10CBA8u, 0x10CBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBB0u;
label_10cbb0:
    // 0x10cbb0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10CBB0u;
    {
        const bool branch_taken_0x10cbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBB0u;
        // 0x10cbb4: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbb0) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10CBB8u;
    // 0x10cbb8: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x10cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x10cbbc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10cbc0: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10CBC0u;
    {
        const bool branch_taken_0x10cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10CBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBC0u;
        // 0x10cbc4: 0xae420094  sw          $v0, 0x94($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbc0) {
            ctx->pc = 0x10CBCCu;
            goto label_10cbcc;
        }
    }
    ctx->pc = 0x10CBC8u;
    // 0x10cbc8: 0xae400094  sw          $zero, 0x94($s2)
    ctx->pc = 0x10cbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
label_10cbcc:
    // 0x10cbcc: 0x8e420094  lw          $v0, 0x94($s2)
    ctx->pc = 0x10cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
    // 0x10cbd0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x10cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10cbd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10cbd8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10cbdc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10cbdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10cbe0: 0x5064000a  beql        $v1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x10CBE0u;
    {
        const bool branch_taken_0x10cbe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x10cbe0) {
            ctx->pc = 0x10CBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10CBE0u;
            // 0x10cbe4: 0xae400094  sw          $zero, 0x94($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 148), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10CBE8u;
    // 0x10cbe8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x10CBE8u;
    {
        const bool branch_taken_0x10cbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBE8u;
        // 0x10cbec: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbe8) {
            ctx->pc = 0x10CC10u;
            goto label_10cc10;
        }
    }
    ctx->pc = 0x10CBF0u;
label_10cbf0:
    // 0x10cbf0: 0xc043d5e  jal         func_10F578
    ctx->pc = 0x10CBF0u;
    SET_GPR_U32(ctx, 31, 0x10CBF8u);
    ctx->pc = 0x10CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CBF0u;
    // 0x10cbf4: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F578u, 0x10CBF0u, 0x10CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CBF8u;
label_10cbf8:
    // 0x10cbf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10CBF8u;
    {
        const bool branch_taken_0x10cbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10CBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CBF8u;
        // 0x10cbfc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cbf8) {
            ctx->pc = 0x10CC0Cu;
            goto label_10cc0c;
        }
    }
    ctx->pc = 0x10CC00u;
    // 0x10cc00: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x10cc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x10cc04: 0xc0440c6  jal         func_110318
    ctx->pc = 0x10CC04u;
    SET_GPR_U32(ctx, 31, 0x10CC0Cu);
    ctx->pc = 0x10CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10CC04u;
    // 0x10cc08: 0x8ee4aa84  lw          $a0, -0x557C($s7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110318u, 0x10CC04u, 0x10CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10CC0Cu;
label_10cc0c:
    // 0x10cc0c: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10cc10:
    // 0x10cc10: 0x8fb60028  lw          $s6, 0x28($sp)
    ctx->pc = 0x10cc10u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10cc14: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x10cc14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10cc18: 0x1440fd7b  bnez        $v0, . + 4 + (-0x285 << 2)
    ctx->pc = 0x10CC18u;
    {
        const bool branch_taken_0x10cc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC18u;
        // 0x10cc1c: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc18) {
            ctx->pc = 0x10C208u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c208;
        }
    }
    ctx->pc = 0x10CC20u;
    // 0x10cc20: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x10cc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_10cc24:
    // 0x10cc24: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x10cc24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x10cc28: 0x8c83489c  lw          $v1, 0x489C($a0)
    ctx->pc = 0x10cc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 18588)));
    // 0x10cc2c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x10cc2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x10cc30: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x10cc30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x10cc34: 0x1440fd68  bnez        $v0, . + 4 + (-0x298 << 2)
    ctx->pc = 0x10CC34u;
    {
        const bool branch_taken_0x10cc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC34u;
        // 0x10cc38: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10cc34) {
            ctx->pc = 0x10C1D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10c1d8;
        }
    }
    ctx->pc = 0x10CC3Cu;
label_10cc3c:
    // 0x10cc3c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x10cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_10cc40:
    // 0x10cc40: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x10cc40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x10cc44: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x10cc44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x10cc48: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x10cc48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x10cc4c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x10cc4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x10cc50: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x10cc50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10cc54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x10cc54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x10cc58: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x10cc58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10cc5c: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x10cc5cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10cc60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10cc64: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x10cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10cc68: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10CC68u;
        // 0x10cc6c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC70u;
}
