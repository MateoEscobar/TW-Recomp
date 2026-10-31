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

// Function: sub_00475898
// Address: 0x475898 - 0x475b20
void sub_00475898_0x475898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00475898_0x475898");
#endif

    switch (ctx->pc) {
        case 0x4758f0u: goto label_4758f0;
        case 0x475904u: goto label_475904;
        case 0x475940u: goto label_475940;
        case 0x475954u: goto label_475954;
        case 0x47595cu: goto label_47595c;
        case 0x475970u: goto label_475970;
        case 0x4759a0u: goto label_4759a0;
        case 0x4759b8u: goto label_4759b8;
        case 0x475a38u: goto label_475a38;
        case 0x475a4cu: goto label_475a4c;
        case 0x475a60u: goto label_475a60;
        case 0x475ae0u: goto label_475ae0;
        default: break;
    }

    ctx->pc = 0x475898u;

    // 0x475898: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x475898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x47589c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x47589cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x4758a0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x4758a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x4758a4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x4758a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x4758a8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x4758a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x4758ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x4758acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x4758b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x4758b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x4758b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4758b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4758b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x4758b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x4758bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4758bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4758c0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x4758c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x4758c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4758c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4758c8: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x4758C8u;
    {
        const bool branch_taken_0x4758c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4758CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4758C8u;
        // 0x4758cc: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4758c8) {
            ctx->pc = 0x475AF0u;
            goto label_475af0;
        }
    }
    ctx->pc = 0x4758D0u;
    // 0x4758d0: 0x8f828910  lw          $v0, -0x76F0($gp)
    ctx->pc = 0x4758d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936848)));
    // 0x4758d4: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x4758d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4758d8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4758d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x4758dc: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x4758dcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4758e0: 0x8ed30000  lw          $s3, 0x0($s6)
    ctx->pc = 0x4758e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x4758e4: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x4758E4u;
    {
        const bool branch_taken_0x4758e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4758E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4758E4u;
        // 0x4758e8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4758e4) {
            ctx->pc = 0x475924u;
            goto label_475924;
        }
    }
    ctx->pc = 0x4758ECu;
    // 0x4758ec: 0x26d10004  addiu       $s1, $s6, 0x4
    ctx->pc = 0x4758ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_4758f0:
    // 0x4758f0: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x4758f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x4758f4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4758f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4758f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x4758f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x4758fc: 0xc11d5a4  jal         func_475690
    ctx->pc = 0x4758FCu;
    SET_GPR_U32(ctx, 31, 0x475904u);
    ctx->pc = 0x475900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4758FCu;
    // 0x475900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x475690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x475690u, 0x4758FCu, 0x475904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475904u;
label_475904:
    // 0x475904: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x475904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x475908: 0x268501dc  addiu       $a1, $s4, 0x1DC
    ctx->pc = 0x475908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 476));
    // 0x47590c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475910: 0x253202b  sltu        $a0, $s2, $s3
    ctx->pc = 0x475910u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x475914: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x475914u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x475918: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x475918u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47591c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x47591Cu;
    {
        const bool branch_taken_0x47591c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x475920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47591Cu;
        // 0x475920: 0xa2a021  addu        $s4, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47591c) {
            ctx->pc = 0x4758F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4758f0;
        }
    }
    ctx->pc = 0x475924u;
label_475924:
    // 0x475924: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x475924u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
    // 0x475928: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x475928u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47592c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x47592cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475930: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x475930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x475934: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x475934u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x475938: 0xc11ef26  jal         func_47BC98
    ctx->pc = 0x475938u;
    SET_GPR_U32(ctx, 31, 0x475940u);
    ctx->pc = 0x47593Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475938u;
    // 0x47593c: 0x2408000a  addiu       $t0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BC98u, 0x475938u, 0x475940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475940u;
label_475940:
    // 0x475940: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x475940u;
    {
        const bool branch_taken_0x475940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475940u;
        // 0x475944: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475940) {
            ctx->pc = 0x47595Cu;
            goto label_47595c;
        }
    }
    ctx->pc = 0x475948u;
    // 0x475948: 0x27858540  addiu       $a1, $gp, -0x7AC0
    ctx->pc = 0x475948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935872));
    // 0x47594c: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x47594Cu;
    SET_GPR_U32(ctx, 31, 0x475954u);
    ctx->pc = 0x475950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47594Cu;
    // 0x475950: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x47594Cu, 0x475954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475954u;
label_475954:
    // 0x475954: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x475954u;
    {
        const bool branch_taken_0x475954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x475954) {
            ctx->pc = 0x475958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475954u;
            // 0x475958: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475964u;
            goto label_475964;
        }
    }
    ctx->pc = 0x47595Cu;
label_47595c:
    // 0x47595c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x47595Cu;
    {
        const bool branch_taken_0x47595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47595Cu;
        // 0x475960: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47595c) {
            ctx->pc = 0x475AF4u;
            goto label_475af4;
        }
    }
    ctx->pc = 0x475964u;
label_475964:
    // 0x475964: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x475964u;
    {
        const bool branch_taken_0x475964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475964u;
        // 0x475968: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475964) {
            ctx->pc = 0x475AF0u;
            goto label_475af0;
        }
    }
    ctx->pc = 0x47596Cu;
    // 0x47596c: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x47596cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_475970:
    // 0x475970: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475974: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x475974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x475978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x475978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47597c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x47597cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x475980: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x475980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x475984: 0x26300018  addiu       $s0, $s1, 0x18
    ctx->pc = 0x475984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x475988: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x475988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x47598c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x47598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475990: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x475990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x475994: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x475994u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475998: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475998u;
    SET_GPR_U32(ctx, 31, 0x4759A0u);
    ctx->pc = 0x47599Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475998u;
    // 0x47599c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475998u, 0x4759A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4759A0u;
label_4759a0:
    // 0x4759a0: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4759A0u;
    {
        const bool branch_taken_0x4759a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4759A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4759A0u;
        // 0x4759a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4759a0) {
            ctx->pc = 0x47595Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47595c;
        }
    }
    ctx->pc = 0x4759A8u;
    // 0x4759a8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4759a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4759ac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x4759acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4759b0: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x4759b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x4759b4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4759b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_4759b8:
    // 0x4759b8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x4759b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x4759bc: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x4759bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x4759c0: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x4759c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x4759c4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x4759c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4759c8: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x4759C8u;
    {
        const bool branch_taken_0x4759c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4759CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4759C8u;
        // 0x4759cc: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4759c8) {
            ctx->pc = 0x475A20u;
            goto label_475a20;
        }
    }
    ctx->pc = 0x4759D0u;
    // 0x4759d0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x4759d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4759d4: 0x2442eaa0  addiu       $v0, $v0, -0x1560
    ctx->pc = 0x4759d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961824));
    // 0x4759d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4759d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4759dc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x4759dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4759e0: 0x800008  jr          $a0
    ctx->pc = 0x4759E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4759E8u: goto label_4759e8;
            case 0x4759F8u: goto label_4759f8;
            case 0x475A1Cu: goto label_475a1c;
            case 0x475A20u: goto label_475a20;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4759E0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x4759E8u;
label_4759e8:
    // 0x4759e8: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x4759e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4759ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4759ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x4759f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4759F0u;
    {
        const bool branch_taken_0x4759f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4759F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4759F0u;
        // 0x4759f4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4759f0) {
            ctx->pc = 0x475A20u;
            goto label_475a20;
        }
    }
    ctx->pc = 0x4759F8u;
label_4759f8:
    // 0x4759f8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x4759f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x4759fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x4759fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475a00: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x475a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x475a04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x475a04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475a08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x475a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x475a0c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x475a0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x475a10: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x475a10u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x475a14: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x475A14u;
    {
        const bool branch_taken_0x475a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475A14u;
        // 0x475a18: 0x24c6000c  addiu       $a2, $a2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a14) {
            ctx->pc = 0x475A20u;
            goto label_475a20;
        }
    }
    ctx->pc = 0x475A1Cu;
label_475a1c:
    // 0x475a1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x475a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475a20:
    // 0x475a20: 0x5100ffe5  beql        $t0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x475A20u;
    {
        const bool branch_taken_0x475a20 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x475a20) {
            ctx->pc = 0x475A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475A20u;
            // 0x475a24: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4759B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4759b8;
        }
    }
    ctx->pc = 0x475A28u;
    // 0x475a28: 0xafa90004  sw          $t1, 0x4($sp)
    ctx->pc = 0x475a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 9));
    // 0x475a2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x475a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475a30: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475A30u;
    SET_GPR_U32(ctx, 31, 0x475A38u);
    ctx->pc = 0x475A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475A30u;
    // 0x475a34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475A30u, 0x475A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475A38u;
label_475a38:
    // 0x475a38: 0x1040ffc8  beqz        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x475A38u;
    {
        const bool branch_taken_0x475a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475A38u;
        // 0x475a3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a38) {
            ctx->pc = 0x47595Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47595c;
        }
    }
    ctx->pc = 0x475A40u;
    // 0x475a40: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x475a40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475a44: 0xc11fbba  jal         func_47EEE8
    ctx->pc = 0x475A44u;
    SET_GPR_U32(ctx, 31, 0x475A4Cu);
    ctx->pc = 0x475A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475A44u;
    // 0x475a48: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47EEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47EEE8u, 0x475A44u, 0x475A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475A4Cu;
label_475a4c:
    // 0x475a4c: 0x1040ffc3  beqz        $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x475A4Cu;
    {
        const bool branch_taken_0x475a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475A4Cu;
        // 0x475a50: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a4c) {
            ctx->pc = 0x47595Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_47595c;
        }
    }
    ctx->pc = 0x475A54u;
    // 0x475a54: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x475a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475a58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x475a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475a5c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_475a60:
    // 0x475a60: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x475a60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x475a64: 0x21702  srl         $v0, $v0, 28
    ctx->pc = 0x475a64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 28));
    // 0x475a68: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x475a68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x475a6c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x475a6cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x475a70: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x475A70u;
    {
        const bool branch_taken_0x475a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475A70u;
        // 0x475a74: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a70) {
            ctx->pc = 0x475AC4u;
            goto label_475ac4;
        }
    }
    ctx->pc = 0x475A78u;
    // 0x475a78: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x475a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x475a7c: 0x2442eac0  addiu       $v0, $v0, -0x1540
    ctx->pc = 0x475a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961856));
    // 0x475a80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475a84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x475a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x475a88: 0x800008  jr          $a0
    ctx->pc = 0x475A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x475A90u: goto label_475a90;
            case 0x475AA0u: goto label_475aa0;
            case 0x475AC0u: goto label_475ac0;
            case 0x475AC4u: goto label_475ac4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475A88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x475A90u;
label_475a90:
    // 0x475a90: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x475a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x475a94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475a94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x475a98: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x475A98u;
    {
        const bool branch_taken_0x475a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475A98u;
        // 0x475a9c: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475a98) {
            ctx->pc = 0x475AC4u;
            goto label_475ac4;
        }
    }
    ctx->pc = 0x475AA0u;
label_475aa0:
    // 0x475aa0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x475aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x475aa4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x475aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x475aa8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x475aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x475aac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x475aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x475ab0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x475ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x475ab4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x475ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x475ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x475AB8u;
    {
        const bool branch_taken_0x475ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x475ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475AB8u;
        // 0x475abc: 0x24a5000c  addiu       $a1, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ab8) {
            ctx->pc = 0x475AC4u;
            goto label_475ac4;
        }
    }
    ctx->pc = 0x475AC0u;
label_475ac0:
    // 0x475ac0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x475ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_475ac4:
    // 0x475ac4: 0x50e0ffe6  beql        $a3, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x475AC4u;
    {
        const bool branch_taken_0x475ac4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x475ac4) {
            ctx->pc = 0x475AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x475AC4u;
            // 0x475ac8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x475A60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475a60;
        }
    }
    ctx->pc = 0x475ACCu;
    // 0x475acc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x475accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x475ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x475ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x475ad4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x475ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x475ad8: 0xc10f644  jal         func_43D910
    ctx->pc = 0x475AD8u;
    SET_GPR_U32(ctx, 31, 0x475AE0u);
    ctx->pc = 0x475ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x475AD8u;
    // 0x475adc: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x475AD8u, 0x475AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x475AE0u;
label_475ae0:
    // 0x475ae0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x475ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x475ae4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x475ae4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x475ae8: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x475AE8u;
    {
        const bool branch_taken_0x475ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x475AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475AE8u;
        // 0x475aec: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x475ae8) {
            ctx->pc = 0x475970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_475970;
        }
    }
    ctx->pc = 0x475AF0u;
label_475af0:
    // 0x475af0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x475af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_475af4:
    // 0x475af4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x475af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x475af8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x475af8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x475afc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x475afcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x475b00: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x475b00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x475b04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x475b04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x475b08: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x475b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x475b0c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x475b0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x475b10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x475b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x475b14: 0x3e00008  jr          $ra
    ctx->pc = 0x475B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x475B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x475B14u;
        // 0x475b18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x475B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x475B1Cu;
    // 0x475b1c: 0x0  nop
    ctx->pc = 0x475b1cu;
    // NOP
    ctx->pc = 0x475b20u;
}
