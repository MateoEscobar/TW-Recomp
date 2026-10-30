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

// Function: sub_0048C090
// Address: 0x48c090 - 0x48c508
void sub_0048C090_0x48c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C090_0x48c090");
#endif

    switch (ctx->pc) {
        case 0x48c0e0u: goto label_48c0e0;
        case 0x48c108u: goto label_48c108;
        case 0x48c12cu: goto label_48c12c;
        case 0x48c2f8u: goto label_48c2f8;
        case 0x48c478u: goto label_48c478;
        case 0x48c4a0u: goto label_48c4a0;
        case 0x48c4c4u: goto label_48c4c4;
        default: break;
    }

    ctx->pc = 0x48c090u;

    // 0x48c090: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x48c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x48c094: 0x8f8289f4  lw          $v0, -0x760C($gp)
    ctx->pc = 0x48c094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48c098: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x48c098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x48c09c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x48c09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x48c0a0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x48c0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x48c0a4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x48c0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x48c0a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x48c0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x48c0ac: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x48C0ACu;
    {
        const bool branch_taken_0x48c0ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C0ACu;
        // 0x48c0b0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c0ac) {
            ctx->pc = 0x48C154u;
            goto label_48c154;
        }
    }
    ctx->pc = 0x48C0B4u;
    // 0x48c0b4: 0x97838a10  lhu         $v1, -0x75F0($gp)
    ctx->pc = 0x48c0b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x48c0b8: 0x97828a12  lhu         $v0, -0x75EE($gp)
    ctx->pc = 0x48c0b8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48c0bc: 0x10620109  beq         $v1, $v0, . + 4 + (0x109 << 2)
    ctx->pc = 0x48C0BCu;
    {
        const bool branch_taken_0x48c0bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C0BCu;
        // 0x48c0c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c0bc) {
            ctx->pc = 0x48C4E4u;
            goto label_48c4e4;
        }
    }
    ctx->pc = 0x48C0C4u;
    // 0x48c0c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x48c0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c0c8: 0x10940107  beq         $a0, $s4, . + 4 + (0x107 << 2)
    ctx->pc = 0x48C0C8u;
    {
        const bool branch_taken_0x48c0c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x48C0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C0C8u;
        // 0x48c0cc: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c0c8) {
            ctx->pc = 0x48C4E8u;
            goto label_48c4e8;
        }
    }
    ctx->pc = 0x48C0D0u;
    // 0x48c0d0: 0xa7808a10  sh          $zero, -0x75F0($gp)
    ctx->pc = 0x48c0d0u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937104), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c0d4: 0xa7808a12  sh          $zero, -0x75EE($gp)
    ctx->pc = 0x48c0d4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c0d8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x48c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48c0dc: 0x0  nop
    ctx->pc = 0x48c0dcu;
    // NOP
label_48c0e0:
    // 0x48c0e0: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x48c0e4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x48c0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c0e8: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x48c0e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48c0ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48c0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c0f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48c0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c0f4: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x48c0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48c0f8: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x48C0F8u;
    {
        const bool branch_taken_0x48c0f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x48C0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C0F8u;
        // 0x48c0fc: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c0f8) {
            ctx->pc = 0x48C134u;
            goto label_48c134;
        }
    }
    ctx->pc = 0x48C100u;
    // 0x48c100: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x48c100u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x48c104: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48c104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
label_48c108:
    // 0x48c108: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x48c108u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x48c10c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48c10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c110: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x48c110u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x48c114: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48c114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48c118: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x48c118u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x48c11c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c120: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x48c120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x48c124: 0xc1231de  jal         func_48C778
    ctx->pc = 0x48C124u;
    SET_GPR_U32(ctx, 31, 0x48C12Cu);
    ctx->pc = 0x48C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C124u;
    // 0x48c128: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C778u, 0x48C124u, 0x48C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C12Cu;
label_48c12c:
    // 0x48c12c: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48C12Cu;
    {
        const bool branch_taken_0x48c12c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x48C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C12Cu;
        // 0x48c130: 0x8f828a0c  lw          $v0, -0x75F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c12c) {
            ctx->pc = 0x48C108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c108;
        }
    }
    ctx->pc = 0x48C134u;
label_48c134:
    // 0x48c134: 0x97828682  lhu         $v0, -0x797E($gp)
    ctx->pc = 0x48c134u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
    // 0x48c138: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x48c138u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x48c13c: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x48c13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x48c140: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x48c140u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x48c144: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x48C144u;
    {
        const bool branch_taken_0x48c144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x48C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C144u;
        // 0x48c148: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c144) {
            ctx->pc = 0x48C0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c0e0;
        }
    }
    ctx->pc = 0x48C14Cu;
    // 0x48c14c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x48C14Cu;
    {
        const bool branch_taken_0x48c14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C14Cu;
        // 0x48c150: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c14c) {
            ctx->pc = 0x48C4E8u;
            goto label_48c4e8;
        }
    }
    ctx->pc = 0x48C154u;
label_48c154:
    // 0x48c154: 0x4410021  bgez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x48C154u;
    {
        const bool branch_taken_0x48c154 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x48C158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C154u;
        // 0x48c158: 0x8f848990  lw          $a0, -0x7670($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c154) {
            ctx->pc = 0x48C1DCu;
            goto label_48c1dc;
        }
    }
    ctx->pc = 0x48C15Cu;
    // 0x48c15c: 0x8f8489a8  lw          $a0, -0x7658($gp)
    ctx->pc = 0x48c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48c160: 0x8f8589ac  lw          $a1, -0x7654($gp)
    ctx->pc = 0x48c160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48c164: 0x8f8689f0  lw          $a2, -0x7610($gp)
    ctx->pc = 0x48c164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937072)));
    // 0x48c168: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48c168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c16c: 0xa61823  subu        $v1, $a1, $a2
    ctx->pc = 0x48c16cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x48c170: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x48c170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x48c174: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48c174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c178: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x48c178u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x48c17c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x48c17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x48c180: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x48C180u;
    {
        const bool branch_taken_0x48c180 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C180u;
        // 0x48c184: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c180) {
            ctx->pc = 0x48C1B8u;
            goto label_48c1b8;
        }
    }
    ctx->pc = 0x48C188u;
    // 0x48c188: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x48c188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x48c18c: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x48c18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x48c190: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x48c190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x48c194: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48c194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48c198: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48c198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48c19c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x48c19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x48c1a0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x48c1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x48c1a4: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x48c1a4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48c1a8: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x48c1a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x48c1ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48C1ACu;
    {
        const bool branch_taken_0x48c1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C1ACu;
        // 0x48c1b0: 0x7c830000  sq          $v1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c1ac) {
            ctx->pc = 0x48C1C0u;
            goto label_48c1c0;
        }
    }
    ctx->pc = 0x48C1B4u;
    // 0x48c1b4: 0x0  nop
    ctx->pc = 0x48c1b4u;
    // NOP
label_48c1b8:
    // 0x48c1b8: 0x24a2fff0  addiu       $v0, $a1, -0x10
    ctx->pc = 0x48c1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x48c1bc: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
label_48c1c0:
    // 0x48c1c0: 0xaf8089f0  sw          $zero, -0x7610($gp)
    ctx->pc = 0x48c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937072), GPR_U32(ctx, 0));
    // 0x48c1c4: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x48c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48c1c8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x48c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x48c1cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x48c1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x48c1d0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48c1d4: 0xaf8389f4  sw          $v1, -0x760C($gp)
    ctx->pc = 0x48c1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 3));
    // 0x48c1d8: 0x8f848990  lw          $a0, -0x7670($gp)
    ctx->pc = 0x48c1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936976)));
label_48c1dc:
    // 0x48c1dc: 0x1080002d  beqz        $a0, . + 4 + (0x2D << 2)
    ctx->pc = 0x48C1DCu;
    {
        const bool branch_taken_0x48c1dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C1DCu;
        // 0x48c1e0: 0x8f8389f4  lw          $v1, -0x760C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c1dc) {
            ctx->pc = 0x48C294u;
            goto label_48c294;
        }
    }
    ctx->pc = 0x48C1E4u;
    // 0x48c1e4: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x48c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x48c1e8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x48C1E8u;
    {
        const bool branch_taken_0x48c1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C1E8u;
        // 0x48c1ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c1e8) {
            ctx->pc = 0x48C27Cu;
            goto label_48c27c;
        }
    }
    ctx->pc = 0x48C1F0u;
    // 0x48c1f0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x48c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x48c1f4: 0x71024b89  pcpyld      $t1, $t0, $v0
    ctx->pc = 0x48c1f4u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x48c1f8: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x48c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x48c1fc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x48c1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x48c200: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48c200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x48c204: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x48c204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x48c208: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48c208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x48c20c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x48c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x48c210: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x48c210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x48c214: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x48c214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x48c218: 0x70624b89  pcpyld      $t1, $v1, $v0
    ctx->pc = 0x48c218u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48c21c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x48c21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48c220: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48c220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c224: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48c224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48c228: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x48c228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x48c22c: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x48c22cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x48c230: 0x2405007f  addiu       $a1, $zero, 0x7F
    ctx->pc = 0x48c230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48c234: 0x3c070600  lui         $a3, 0x600
    ctx->pc = 0x48c234u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1536 << 16));
    // 0x48c238: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x48c238u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x48c23c: 0x3c061300  lui         $a2, 0x1300
    ctx->pc = 0x48c23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4864 << 16));
    // 0x48c240: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48c240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48c244: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x48c244u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x48c248: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48c248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
    // 0x48c24c: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x48c24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48c250: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x48c250u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
    // 0x48c254: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x48c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x48c258: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48c258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48c25c: 0x70a84b89  pcpyld      $t1, $a1, $t0
    ctx->pc = 0x48c25cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x48c260: 0x7c490010  sq          $t1, 0x10($v0)
    ctx->pc = 0x48c260u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 9));
    // 0x48c264: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x48c264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x48c268: 0xaf84898c  sw          $a0, -0x7674($gp)
    ctx->pc = 0x48c268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 4));
    // 0x48c26c: 0x70e64b89  pcpyld      $t1, $a3, $a2
    ctx->pc = 0x48c26cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x48c270: 0x7c490020  sq          $t1, 0x20($v0)
    ctx->pc = 0x48c270u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 9));
    // 0x48c274: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x48C274u;
    {
        const bool branch_taken_0x48c274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C274u;
        // 0x48c278: 0xaf83898c  sw          $v1, -0x7674($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c274) {
            ctx->pc = 0x48C2B0u;
            goto label_48c2b0;
        }
    }
    ctx->pc = 0x48C27Cu;
label_48c27c:
    // 0x48c27c: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c280: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48c280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c284: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x48c284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x48c288: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x48c288u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x48c28c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x48C28Cu;
    {
        const bool branch_taken_0x48c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C28Cu;
        // 0x48c290: 0x7c490000  sq          $t1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c28c) {
            ctx->pc = 0x48C2A8u;
            goto label_48c2a8;
        }
    }
    ctx->pc = 0x48C294u;
label_48c294:
    // 0x48c294: 0x8f82898c  lw          $v0, -0x7674($gp)
    ctx->pc = 0x48c294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c298: 0x3c040600  lui         $a0, 0x600
    ctx->pc = 0x48c298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1536 << 16));
    // 0x48c29c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x48c29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x48c2a0: 0x70834b89  pcpyld      $t1, $a0, $v1
    ctx->pc = 0x48c2a0u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x48c2a4: 0x7c490000  sq          $t1, 0x0($v0)
    ctx->pc = 0x48c2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 9));
label_48c2a8:
    // 0x48c2a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x48c2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x48c2ac: 0xaf82898c  sw          $v0, -0x7674($gp)
    ctx->pc = 0x48c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 2));
label_48c2b0:
    // 0x48c2b0: 0xaf808994  sw          $zero, -0x766C($gp)
    ctx->pc = 0x48c2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 0));
    // 0x48c2b4: 0x8f83898c  lw          $v1, -0x7674($gp)
    ctx->pc = 0x48c2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c2b8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C2B8u;
    {
        const bool branch_taken_0x48c2b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C2B8u;
        // 0x48c2bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c2b8) {
            ctx->pc = 0x48C2C8u;
            goto label_48c2c8;
        }
    }
    ctx->pc = 0x48C2C0u;
    // 0x48c2c0: 0x8f8289a8  lw          $v0, -0x7658($gp)
    ctx->pc = 0x48c2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48c2c4: 0x624823  subu        $t1, $v1, $v0
    ctx->pc = 0x48c2c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_48c2c8:
    // 0x48c2c8: 0x1120003c  beqz        $t1, . + 4 + (0x3C << 2)
    ctx->pc = 0x48C2C8u;
    {
        const bool branch_taken_0x48c2c8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C2C8u;
        // 0x48c2cc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c2c8) {
            ctx->pc = 0x48C3BCu;
            goto label_48c3bc;
        }
    }
    ctx->pc = 0x48C2D0u;
    // 0x48c2d0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x48c2d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x48c2d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x48c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x48c2d8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x48c2d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x48c2dc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x48C2DCu;
    {
        const bool branch_taken_0x48c2dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C2DCu;
        // 0x48c2e0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c2dc) {
            ctx->pc = 0x48C318u;
            goto label_48c318;
        }
    }
    ctx->pc = 0x48C2E4u;
    // 0x48c2e4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x48c2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48c2e8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x48c2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x48c2ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x48c2ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x48c2f0: 0xf  sync
    ctx->pc = 0x48c2f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c2f4: 0x40f  sync.p
    ctx->pc = 0x48c2f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_48c2f8:
    // 0x48c2f8: 0x0  nop
    ctx->pc = 0x48c2f8u;
    // NOP
    // 0x48c2fc: 0x0  nop
    ctx->pc = 0x48c2fcu;
    // NOP
    // 0x48c300: 0x0  nop
    ctx->pc = 0x48c300u;
    // NOP
    // 0x48c304: 0x0  nop
    ctx->pc = 0x48c304u;
    // NOP
    // 0x48c308: 0x0  nop
    ctx->pc = 0x48c308u;
    // NOP
    // 0x48c30c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x48C30Cu;
    {
        const bool branch_taken_0x48c30c = (false);
        if (branch_taken_0x48c30c) {
            ctx->pc = 0x48C2F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c2f8;
        }
    }
    ctx->pc = 0x48C314u;
    // 0x48c314: 0x0  nop
    ctx->pc = 0x48c314u;
    // NOP
label_48c318:
    // 0x48c318: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48c318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48c31c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x48c31cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x48c320: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x48c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x48c324: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x48c324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x48c328: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x48c328u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x48c32c: 0x3484d080  ori         $a0, $a0, 0xD080
    ctx->pc = 0x48c32cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)53376);
    // 0x48c330: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48c330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48c334: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x48c334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x48c338: 0x8f8889a8  lw          $t0, -0x7658($gp)
    ctx->pc = 0x48c338u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48c33c: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x48c33cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x48c340: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x48c340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x48c344: 0x92902  srl         $a1, $t1, 4
    ctx->pc = 0x48c344u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x48c348: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x48c348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x48c34c: 0x8f8789ac  lw          $a3, -0x7654($gp)
    ctx->pc = 0x48c34cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x48c350: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x48c350u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x48c354: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x48c354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x48c358: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x48c358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x48c35c: 0xac26d000  sw          $a2, -0x3000($at)
    ctx->pc = 0x48c35cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 6)); // MMIO: 0x1000d000
    // 0x48c360: 0xf  sync
    ctx->pc = 0x48c360u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c364: 0x40f  sync.p
    ctx->pc = 0x48c364u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c368: 0x8f848994  lw          $a0, -0x766C($gp)
    ctx->pc = 0x48c368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936980)));
    // 0x48c36c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x48C36Cu;
    {
        const bool branch_taken_0x48c36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C36Cu;
        // 0x48c370: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c36c) {
            ctx->pc = 0x48C3A0u;
            goto label_48c3a0;
        }
    }
    ctx->pc = 0x48C374u;
    // 0x48c374: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x48c374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x48c378: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x48c378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x48c37c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x48c37cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x48c380: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x48C380u;
    {
        const bool branch_taken_0x48c380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x48C384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C380u;
        // 0x48c384: 0x8f8289ac  lw          $v0, -0x7654($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c380) {
            ctx->pc = 0x48C3A4u;
            goto label_48c3a4;
        }
    }
    ctx->pc = 0x48C388u;
    // 0x48c388: 0x881023  subu        $v0, $a0, $t0
    ctx->pc = 0x48c388u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x48c38c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x48c38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x48c390: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x48c390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x48c394: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x48c394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x48c398: 0xaf828994  sw          $v0, -0x766C($gp)
    ctx->pc = 0x48c398u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936980), GPR_U32(ctx, 2));
    // 0x48c39c: 0x0  nop
    ctx->pc = 0x48c39cu;
    // NOP
label_48c3a0:
    // 0x48c3a0: 0x8f8289ac  lw          $v0, -0x7654($gp)
    ctx->pc = 0x48c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937004)));
label_48c3a4:
    // 0x48c3a4: 0x8f8389a8  lw          $v1, -0x7658($gp)
    ctx->pc = 0x48c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937000)));
    // 0x48c3a8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x48c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48c3ac: 0x38632000  xori        $v1, $v1, 0x2000
    ctx->pc = 0x48c3acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8192);
    // 0x48c3b0: 0xaf8289ac  sw          $v0, -0x7654($gp)
    ctx->pc = 0x48c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937004), GPR_U32(ctx, 2));
    // 0x48c3b4: 0xaf83898c  sw          $v1, -0x7674($gp)
    ctx->pc = 0x48c3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 3));
    // 0x48c3b8: 0xaf8389a8  sw          $v1, -0x7658($gp)
    ctx->pc = 0x48c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937000), GPR_U32(ctx, 3));
label_48c3bc:
    // 0x48c3bc: 0x8f8489b8  lw          $a0, -0x7648($gp)
    ctx->pc = 0x48c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937016)));
    // 0x48c3c0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x48C3C0u;
    {
        const bool branch_taken_0x48c3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C3C0u;
        // 0x48c3c4: 0x8f8789b4  lw          $a3, -0x764C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c3c0) {
            ctx->pc = 0x48C404u;
            goto label_48c404;
        }
    }
    ctx->pc = 0x48C3C8u;
    // 0x48c3c8: 0x10e0000b  beqz        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x48C3C8u;
    {
        const bool branch_taken_0x48c3c8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C3C8u;
        // 0x48c3cc: 0x8f8289bc  lw          $v0, -0x7644($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c3c8) {
            ctx->pc = 0x48C3F8u;
            goto label_48c3f8;
        }
    }
    ctx->pc = 0x48C3D0u;
    // 0x48c3d0: 0x24041121  addiu       $a0, $zero, 0x1121
    ctx->pc = 0x48c3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4385));
    // 0x48c3d4: 0x8f8589b0  lw          $a1, -0x7650($gp)
    ctx->pc = 0x48c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48c3d8: 0x24060122  addiu       $a2, $zero, 0x122
    ctx->pc = 0x48c3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x48c3dc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x48c3e0: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x48c3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x48c3e4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x48c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x48c3e8: 0xaf8389bc  sw          $v1, -0x7644($gp)
    ctx->pc = 0x48c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 3));
    // 0x48c3ec: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x48c3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x48c3f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x48C3F0u;
    {
        const bool branch_taken_0x48c3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C3F0u;
        // 0x48c3f4: 0xac670004  sw          $a3, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c3f0) {
            ctx->pc = 0x48C404u;
            goto label_48c404;
        }
    }
    ctx->pc = 0x48C3F8u;
label_48c3f8:
    // 0x48c3f8: 0x8f8389b0  lw          $v1, -0x7650($gp)
    ctx->pc = 0x48c3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937008)));
    // 0x48c3fc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x48c3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x48c400: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x48c400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_48c404:
    // 0x48c404: 0x8f8589e4  lw          $a1, -0x761C($gp)
    ctx->pc = 0x48c404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937060)));
    // 0x48c408: 0x8f8289e8  lw          $v0, -0x7618($gp)
    ctx->pc = 0x48c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937064)));
    // 0x48c40c: 0x8f8489ec  lw          $a0, -0x7614($gp)
    ctx->pc = 0x48c40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937068)));
    // 0x48c410: 0x8f8389f4  lw          $v1, -0x760C($gp)
    ctx->pc = 0x48c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937076)));
    // 0x48c414: 0xaf8589bc  sw          $a1, -0x7644($gp)
    ctx->pc = 0x48c414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937020), GPR_U32(ctx, 5));
    // 0x48c418: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x48c418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x48c41c: 0xaf8289b0  sw          $v0, -0x7650($gp)
    ctx->pc = 0x48c41cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937008), GPR_U32(ctx, 2));
    // 0x48c420: 0xaf8389b8  sw          $v1, -0x7648($gp)
    ctx->pc = 0x48c420u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937016), GPR_U32(ctx, 3));
    // 0x48c424: 0xaf8489b4  sw          $a0, -0x764C($gp)
    ctx->pc = 0x48c424u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937012), GPR_U32(ctx, 4));
    // 0x48c428: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48C428u;
    {
        const bool branch_taken_0x48c428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C428u;
        // 0x48c42c: 0xaf8589e4  sw          $a1, -0x761C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c428) {
            ctx->pc = 0x48C438u;
            goto label_48c438;
        }
    }
    ctx->pc = 0x48C430u;
    // 0x48c430: 0x24a20008  addiu       $v0, $a1, 0x8
    ctx->pc = 0x48c430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x48c434: 0xaf8289e4  sw          $v0, -0x761C($gp)
    ctx->pc = 0x48c434u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937060), GPR_U32(ctx, 2));
label_48c438:
    // 0x48c438: 0x97838a10  lhu         $v1, -0x75F0($gp)
    ctx->pc = 0x48c438u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937104)));
    // 0x48c43c: 0x97828a12  lhu         $v0, -0x75EE($gp)
    ctx->pc = 0x48c43cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294937106)));
    // 0x48c440: 0xaf808990  sw          $zero, -0x7670($gp)
    ctx->pc = 0x48c440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936976), GPR_U32(ctx, 0));
    // 0x48c444: 0xaf80898c  sw          $zero, -0x7674($gp)
    ctx->pc = 0x48c444u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 0));
    // 0x48c448: 0xaf8089e8  sw          $zero, -0x7618($gp)
    ctx->pc = 0x48c448u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937064), GPR_U32(ctx, 0));
    // 0x48c44c: 0xaf8089ec  sw          $zero, -0x7614($gp)
    ctx->pc = 0x48c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937068), GPR_U32(ctx, 0));
    // 0x48c450: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x48C450u;
    {
        const bool branch_taken_0x48c450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x48C454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C450u;
        // 0x48c454: 0xaf8089f4  sw          $zero, -0x760C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937076), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c450) {
            ctx->pc = 0x48C4E4u;
            goto label_48c4e4;
        }
    }
    ctx->pc = 0x48C458u;
    // 0x48c458: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x48c458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c45c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x48c45cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c460: 0x10940021  beq         $a0, $s4, . + 4 + (0x21 << 2)
    ctx->pc = 0x48C460u;
    {
        const bool branch_taken_0x48c460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x48C464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C460u;
        // 0x48c464: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c460) {
            ctx->pc = 0x48C4E8u;
            goto label_48c4e8;
        }
    }
    ctx->pc = 0x48C468u;
    // 0x48c468: 0xa7808a10  sh          $zero, -0x75F0($gp)
    ctx->pc = 0x48c468u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937104), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c46c: 0xa7808a12  sh          $zero, -0x75EE($gp)
    ctx->pc = 0x48c46cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294937106), (uint16_t)GPR_U32(ctx, 0));
    // 0x48c470: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x48c470u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x48c474: 0x0  nop
    ctx->pc = 0x48c474u;
    // NOP
label_48c478:
    // 0x48c478: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48c478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
    // 0x48c47c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x48c47cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c480: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x48c480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x48c484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x48c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x48c488: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x48c488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x48c48c: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x48c48cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48c490: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x48C490u;
    {
        const bool branch_taken_0x48c490 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x48C494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C490u;
        // 0x48c494: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c490) {
            ctx->pc = 0x48C4CCu;
            goto label_48c4cc;
        }
    }
    ctx->pc = 0x48C498u;
    // 0x48c498: 0x3411ffff  ori         $s1, $zero, 0xFFFF
    ctx->pc = 0x48c498u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x48c49c: 0x8f828a0c  lw          $v0, -0x75F4($gp)
    ctx->pc = 0x48c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
label_48c4a0:
    // 0x48c4a0: 0x230182a  slt         $v1, $s1, $s0
    ctx->pc = 0x48c4a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x48c4a4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x48c4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c4a8: 0x203280a  movz        $a1, $s0, $v1
    ctx->pc = 0x48c4a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x48c4ac: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x48c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x48c4b0: 0x52b00  sll         $a1, $a1, 12
    ctx->pc = 0x48c4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 12));
    // 0x48c4b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x48c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x48c4b8: 0x34a50042  ori         $a1, $a1, 0x42
    ctx->pc = 0x48c4b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)66);
    // 0x48c4bc: 0xc1231de  jal         func_48C778
    ctx->pc = 0x48C4BCu;
    SET_GPR_U32(ctx, 31, 0x48C4C4u);
    ctx->pc = 0x48C4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C4BCu;
    // 0x48c4c0: 0x2118023  subu        $s0, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C778u, 0x48C4BCu, 0x48C4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C4C4u;
label_48c4c4:
    // 0x48c4c4: 0x1e00fff6  bgtz        $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x48C4C4u;
    {
        const bool branch_taken_0x48c4c4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x48C4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C4C4u;
        // 0x48c4c8: 0x8f828a0c  lw          $v0, -0x75F4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c4c4) {
            ctx->pc = 0x48C4A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c4a0;
        }
    }
    ctx->pc = 0x48C4CCu;
label_48c4cc:
    // 0x48c4cc: 0x97828682  lhu         $v0, -0x797E($gp)
    ctx->pc = 0x48c4ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294936194)));
    // 0x48c4d0: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x48c4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
    // 0x48c4d4: 0x821026  xor         $v0, $a0, $v0
    ctx->pc = 0x48c4d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x48c4d8: 0x2200a  movz        $a0, $zero, $v0
    ctx->pc = 0x48c4d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x48c4dc: 0x1494ffe6  bne         $a0, $s4, . + 4 + (-0x1A << 2)
    ctx->pc = 0x48C4DCu;
    {
        const bool branch_taken_0x48c4dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 20));
        ctx->pc = 0x48C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C4DCu;
        // 0x48c4e0: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c4dc) {
            ctx->pc = 0x48C478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c478;
        }
    }
    ctx->pc = 0x48C4E4u;
label_48c4e4:
    // 0x48c4e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x48c4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_48c4e8:
    // 0x48c4e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x48c4e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x48c4ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x48c4ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x48c4f0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x48c4f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48c4f4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x48c4f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48c4f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48c4f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48c4fc: 0x3e00008  jr          $ra
    ctx->pc = 0x48C4FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48C500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C4FCu;
        // 0x48c500: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48C4FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48C504u;
    // 0x48c504: 0x0  nop
    ctx->pc = 0x48c504u;
    // NOP
    ctx->pc = 0x48c508u;
}
