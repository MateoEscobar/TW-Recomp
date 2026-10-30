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

// Function: sub_00198220
// Address: 0x198220 - 0x198358
void sub_00198220_0x198220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198220_0x198220");
#endif

    switch (ctx->pc) {
        case 0x198244u: goto label_198244;
        case 0x198290u: goto label_198290;
        case 0x19830cu: goto label_19830c;
        case 0x198328u: goto label_198328;
        default: break;
    }

    ctx->pc = 0x198220u;

    // 0x198220: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198224: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x198224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x198228: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x198228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19822c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19822cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198230: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x198230u;
    {
        const bool branch_taken_0x198230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x198234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198230u;
        // 0x198234: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198230) {
            ctx->pc = 0x1982C8u;
            goto label_1982c8;
        }
    }
    ctx->pc = 0x198238u;
    // 0x198238: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x198238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19823c: 0xc113af2  jal         func_44EBC8
    ctx->pc = 0x19823Cu;
    SET_GPR_U32(ctx, 31, 0x198244u);
    ctx->pc = 0x198240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19823Cu;
    // 0x198240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x44EBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44EBC8u, 0x19823Cu, 0x198244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198244u;
label_198244:
    // 0x198244: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x198244u;
    {
        const bool branch_taken_0x198244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198244u;
        // 0x198248: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198244) {
            ctx->pc = 0x1982B0u;
            goto label_1982b0;
        }
    }
    ctx->pc = 0x19824Cu;
    // 0x19824c: 0x8c436b08  lw          $v1, 0x6B08($v0)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27400)));
    // 0x198250: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x198250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x198254: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x198254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198258: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x198258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x19825c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x19825cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x198260: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x198260u;
    {
        const bool branch_taken_0x198260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198260u;
        // 0x198264: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198260) {
            ctx->pc = 0x198344u;
            goto label_198344;
        }
    }
    ctx->pc = 0x198268u;
    // 0x198268: 0x8c63009c  lw          $v1, 0x9C($v1)
    ctx->pc = 0x198268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 156)));
    // 0x19826c: 0x50600036  beql        $v1, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x19826Cu;
    {
        const bool branch_taken_0x19826c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19826c) {
            ctx->pc = 0x198270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19826Cu;
            // 0x198270: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198348u;
            goto label_198348;
        }
    }
    ctx->pc = 0x198274u;
    // 0x198274: 0x8c6200d8  lw          $v0, 0xD8($v1)
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 216)));
    // 0x198278: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x198278u;
    {
        const bool branch_taken_0x198278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198278u;
        // 0x19827c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198278) {
            ctx->pc = 0x198340u;
            goto label_198340;
        }
    }
    ctx->pc = 0x198280u;
    // 0x198280: 0x8c6600e8  lw          $a2, 0xE8($v1)
    ctx->pc = 0x198280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 232)));
    // 0x198284: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x198284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x198288: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19828c: 0x0  nop
    ctx->pc = 0x19828cu;
    // NOP
label_198290:
    // 0x198290: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x198290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x198294: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x198294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x198298: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x198298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x19829c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x19829cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1982a0: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1982A0u;
    {
        const bool branch_taken_0x1982a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A0u;
        // 0x1982a4: 0xe3880b  movn        $s1, $a3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a0) {
            ctx->pc = 0x198290u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198290;
        }
    }
    ctx->pc = 0x1982A8u;
    // 0x1982a8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1982A8u;
    {
        const bool branch_taken_0x1982a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982A8u;
        // 0x1982ac: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982a8) {
            ctx->pc = 0x198344u;
            goto label_198344;
        }
    }
    ctx->pc = 0x1982B0u;
label_1982b0:
    // 0x1982b0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1982b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1982b4: 0x10c00023  beqz        $a2, . + 4 + (0x23 << 2)
    ctx->pc = 0x1982B4u;
    {
        const bool branch_taken_0x1982b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982B4u;
        // 0x1982b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982b4) {
            ctx->pc = 0x198344u;
            goto label_198344;
        }
    }
    ctx->pc = 0x1982BCu;
    // 0x1982bc: 0x8cc50054  lw          $a1, 0x54($a2)
    ctx->pc = 0x1982bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
    // 0x1982c0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1982C0u;
    {
        const bool branch_taken_0x1982c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1982C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982C0u;
        // 0x1982c4: 0x3c030059  lui         $v1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982c0) {
            ctx->pc = 0x1982D0u;
            goto label_1982d0;
        }
    }
    ctx->pc = 0x1982C8u;
label_1982c8:
    // 0x1982c8: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1982C8u;
    {
        const bool branch_taken_0x1982c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982C8u;
        // 0x1982cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982c8) {
            ctx->pc = 0x198344u;
            goto label_198344;
        }
    }
    ctx->pc = 0x1982D0u;
label_1982d0:
    // 0x1982d0: 0x8c627000  lw          $v0, 0x7000($v1)
    ctx->pc = 0x1982d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28672)));
    // 0x1982d4: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1982d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1982d8: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1982dc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1982dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1982e0: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1982E0u;
    {
        const bool branch_taken_0x1982e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1982e0) {
            ctx->pc = 0x1982E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1982E0u;
            // 0x1982e4: 0x8ce47000  lw          $a0, 0x7000($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198300u;
            goto label_198300;
        }
    }
    ctx->pc = 0x1982E8u;
    // 0x1982e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1982e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1982ec: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1982ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1982f0: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1982F0u;
    {
        const bool branch_taken_0x1982f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1982f0) {
            ctx->pc = 0x1982F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1982F0u;
            // 0x1982f4: 0x8ce47000  lw          $a0, 0x7000($a3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198300u;
            goto label_198300;
        }
    }
    ctx->pc = 0x1982F8u;
    // 0x1982f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1982F8u;
    {
        const bool branch_taken_0x1982f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1982F8u;
        // 0x1982fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982f8) {
            ctx->pc = 0x19830Cu;
            goto label_19830c;
        }
    }
    ctx->pc = 0x198300u;
label_198300:
    // 0x198300: 0x94a50004  lhu         $a1, 0x4($a1)
    ctx->pc = 0x198300u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x198304: 0xc11d5b0  jal         func_4756C0
    ctx->pc = 0x198304u;
    SET_GPR_U32(ctx, 31, 0x19830Cu);
    ctx->pc = 0x198308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198304u;
    // 0x198308: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4756C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4756C0u, 0x198304u, 0x19830Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19830Cu;
label_19830c:
    // 0x19830c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19830cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198314: 0x5860000b  blezl       $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x198314u;
    {
        const bool branch_taken_0x198314 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x198314) {
            ctx->pc = 0x198318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198314u;
            // 0x198318: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198344u;
            goto label_198344;
        }
    }
    ctx->pc = 0x19831Cu;
    // 0x19831c: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x19831cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x198320: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x198320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198324: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_198328:
    // 0x198328: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x19832c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x19832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x198330: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x198334: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x198334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x198338: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x198338u;
    {
        const bool branch_taken_0x198338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x19833Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198338u;
        // 0x19833c: 0xc2880b  movn        $s1, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198338) {
            ctx->pc = 0x198328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198328;
        }
    }
    ctx->pc = 0x198340u;
label_198340:
    // 0x198340: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x198340u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_198344:
    // 0x198344: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x198344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_198348:
    // 0x198348: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x198348u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19834c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19834cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198350: 0x3e00008  jr          $ra
    ctx->pc = 0x198350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198350u;
        // 0x198354: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x198358u;
}
