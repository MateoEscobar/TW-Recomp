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

// Function: sub_00435928
// Address: 0x435928 - 0x435b38
void sub_00435928_0x435928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435928_0x435928");
#endif

    switch (ctx->pc) {
        case 0x435978u: goto label_435978;
        case 0x435a24u: goto label_435a24;
        case 0x435a34u: goto label_435a34;
        case 0x435a48u: goto label_435a48;
        case 0x435a88u: goto label_435a88;
        default: break;
    }

    ctx->pc = 0x435928u;

    // 0x435928: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x435928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x43592c: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x43592cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x435930: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x435930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x435934: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x435934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x435938: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x435938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x43593c: 0x3c170059  lui         $s7, 0x59
    ctx->pc = 0x43593cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)89 << 16));
    // 0x435940: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x435940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x435944: 0x26e5c531  addiu       $a1, $s7, -0x3ACF
    ctx->pc = 0x435944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952241));
    // 0x435948: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x435948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x43594c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x43594cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435950: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x435950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x435954: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x435954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435958: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x435958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x43595c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x43595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x435960: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x435960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x435964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x435964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x435968: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x435968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x43596c: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x43596cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x435970: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x435970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x435974: 0x0  nop
    ctx->pc = 0x435974u;
    // NOP
label_435978:
    // 0x435978: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x435978u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x43597c: 0x2251821  addu        $v1, $s1, $a1
    ctx->pc = 0x43597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x435980: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x435980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x435984: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x435984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x435988: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x435988u;
    {
        const bool branch_taken_0x435988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x43598Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435988u;
        // 0x43598c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435988) {
            ctx->pc = 0x435978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435978;
        }
    }
    ctx->pc = 0x435990u;
    // 0x435990: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x435990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x435994: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x435994u;
    {
        const bool branch_taken_0x435994 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x435998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435994u;
        // 0x435998: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435994) {
            ctx->pc = 0x4359ACu;
            goto label_4359ac;
        }
    }
    ctx->pc = 0x43599Cu;
    // 0x43599c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x43599cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4359a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4359a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4359a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4359A4u;
    {
        const bool branch_taken_0x4359a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4359A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359A4u;
        // 0x4359a8: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4359a4) {
            ctx->pc = 0x4359B8u;
            goto label_4359b8;
        }
    }
    ctx->pc = 0x4359ACu;
label_4359ac:
    // 0x4359ac: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4359ACu;
    {
        const bool branch_taken_0x4359ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4359ac) {
            ctx->pc = 0x4359BCu;
            goto label_4359bc;
        }
    }
    ctx->pc = 0x4359B4u;
    // 0x4359b4: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x4359b4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_4359b8:
    // 0x4359b8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4359b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4359bc:
    // 0x4359bc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4359BCu;
    {
        const bool branch_taken_0x4359bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4359C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359BCu;
        // 0x4359c0: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4359bc) {
            ctx->pc = 0x4359CCu;
            goto label_4359cc;
        }
    }
    ctx->pc = 0x4359C4u;
    // 0x4359c4: 0x1662000c  bne         $s3, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4359C4u;
    {
        const bool branch_taken_0x4359c4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x4359c4) {
            ctx->pc = 0x4359F8u;
            goto label_4359f8;
        }
    }
    ctx->pc = 0x4359CCu;
label_4359cc:
    // 0x4359cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x4359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4359d0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4359D0u;
    {
        const bool branch_taken_0x4359d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4359D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359D0u;
        // 0x4359d4: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4359d0) {
            ctx->pc = 0x4359F8u;
            goto label_4359f8;
        }
    }
    ctx->pc = 0x4359D8u;
    // 0x4359d8: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x4359d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4359dc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4359DCu;
    {
        const bool branch_taken_0x4359dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4359E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359DCu;
        // 0x4359e0: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4359dc) {
            ctx->pc = 0x4359ECu;
            goto label_4359ec;
        }
    }
    ctx->pc = 0x4359E4u;
    // 0x4359e4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4359E4u;
    {
        const bool branch_taken_0x4359e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4359e4) {
            ctx->pc = 0x4359F8u;
            goto label_4359f8;
        }
    }
    ctx->pc = 0x4359ECu;
label_4359ec:
    // 0x4359ec: 0x82510001  lb          $s1, 0x1($s2)
    ctx->pc = 0x4359ecu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x4359f0: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x4359f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4359f4: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x4359f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_4359f8:
    // 0x4359f8: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x4359F8u;
    {
        const bool branch_taken_0x4359f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4359F8u;
        // 0x4359fc: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4359f8) {
            ctx->pc = 0x435A14u;
            goto label_435a14;
        }
    }
    ctx->pc = 0x435A00u;
    // 0x435a00: 0x2413000a  addiu       $s3, $zero, 0xA
    ctx->pc = 0x435a00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x435a04: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x435a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x435a08: 0x3a220030  xori        $v0, $s1, 0x30
    ctx->pc = 0x435a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)48);
    // 0x435a0c: 0x62980a  movz        $s3, $v1, $v0
    ctx->pc = 0x435a0cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x435a10: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x435a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_435a14:
    // 0x435a14: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x435a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435a18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x435a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435a1c: 0xc10acae  jal         func_42B2B8
    ctx->pc = 0x435A1Cu;
    SET_GPR_U32(ctx, 31, 0x435A24u);
    ctx->pc = 0x435A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435A1Cu;
    // 0x435a20: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B2B8u, 0x435A1Cu, 0x435A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435A24u;
label_435a24:
    // 0x435a24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x435a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435a28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x435a28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435a2c: 0xc10f1c0  jal         func_43C700
    ctx->pc = 0x435A2Cu;
    SET_GPR_U32(ctx, 31, 0x435A34u);
    ctx->pc = 0x435A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435A2Cu;
    // 0x435a30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C700u, 0x435A2Cu, 0x435A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435A34u;
label_435a34:
    // 0x435a34: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x435a34u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x435a38: 0x16b03f  dsra32      $s6, $s6, 0
    ctx->pc = 0x435a38u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 0));
    // 0x435a3c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x435A3Cu;
    {
        const bool branch_taken_0x435a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435A3Cu;
        // 0x435a40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435a3c) {
            ctx->pc = 0x435A94u;
            goto label_435a94;
        }
    }
    ctx->pc = 0x435A44u;
    // 0x435a44: 0x0  nop
    ctx->pc = 0x435a44u;
    // NOP
label_435a48:
    // 0x435a48: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x435a48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x435a4c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x435A4Cu;
    {
        const bool branch_taken_0x435a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435a4c) {
            ctx->pc = 0x435ACCu;
            goto label_435acc;
        }
    }
    ctx->pc = 0x435A54u;
    // 0x435a54: 0x6800008  bltz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x435A54u;
    {
        const bool branch_taken_0x435a54 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x435A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435A54u;
        // 0x435a58: 0x2a4102b  sltu        $v0, $s5, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x435a54) {
            ctx->pc = 0x435A78u;
            goto label_435a78;
        }
    }
    ctx->pc = 0x435A5Cu;
    // 0x435a5c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x435A5Cu;
    {
        const bool branch_taken_0x435a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435a5c) {
            ctx->pc = 0x435A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435A5Cu;
            // 0x435a60: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435A8Cu;
            goto label_435a8c;
        }
    }
    ctx->pc = 0x435A64u;
    // 0x435a64: 0x14950006  bne         $a0, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x435A64u;
    {
        const bool branch_taken_0x435a64 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        ctx->pc = 0x435A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435A64u;
        // 0x435a68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435a64) {
            ctx->pc = 0x435A80u;
            goto label_435a80;
        }
    }
    ctx->pc = 0x435A6Cu;
    // 0x435a6c: 0x2d1102a  slt         $v0, $s6, $s1
    ctx->pc = 0x435a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x435a70: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x435A70u;
    {
        const bool branch_taken_0x435a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435a70) {
            ctx->pc = 0x435A80u;
            goto label_435a80;
        }
    }
    ctx->pc = 0x435A78u;
label_435a78:
    // 0x435a78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x435A78u;
    {
        const bool branch_taken_0x435a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435A78u;
        // 0x435a7c: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435a78) {
            ctx->pc = 0x435A8Cu;
            goto label_435a8c;
        }
    }
    ctx->pc = 0x435A80u;
label_435a80:
    // 0x435a80: 0xc10b602  jal         func_42D808
    ctx->pc = 0x435A80u;
    SET_GPR_U32(ctx, 31, 0x435A88u);
    ctx->pc = 0x435A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435A80u;
    // 0x435a84: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x435A80u, 0x435A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435A88u;
label_435a88:
    // 0x435a88: 0x222202d  daddu       $a0, $s1, $v0
    ctx->pc = 0x435a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
label_435a8c:
    // 0x435a8c: 0x82510000  lb          $s1, 0x0($s2)
    ctx->pc = 0x435a8cu;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x435a90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x435a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_435a94:
    // 0x435a94: 0x26e2c531  addiu       $v0, $s7, -0x3ACF
    ctx->pc = 0x435a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952241));
    // 0x435a98: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x435a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x435a9c: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x435a9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x435aa0: 0x30a30004  andi        $v1, $a1, 0x4
    ctx->pc = 0x435aa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x435aa4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x435AA4u;
    {
        const bool branch_taken_0x435aa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AA4u;
        // 0x435aa8: 0x30a20003  andi        $v0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x435aa4) {
            ctx->pc = 0x435AB4u;
            goto label_435ab4;
        }
    }
    ctx->pc = 0x435AACu;
    // 0x435aac: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x435AACu;
    {
        const bool branch_taken_0x435aac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AACu;
        // 0x435ab0: 0x2631ffd0  addiu       $s1, $s1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435aac) {
            ctx->pc = 0x435A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435a48;
        }
    }
    ctx->pc = 0x435AB4u;
label_435ab4:
    // 0x435ab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x435AB4u;
    {
        const bool branch_taken_0x435ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AB4u;
        // 0x435ab8: 0x2623ffa9  addiu       $v1, $s1, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435ab4) {
            ctx->pc = 0x435ACCu;
            goto label_435acc;
        }
    }
    ctx->pc = 0x435ABCu;
    // 0x435abc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x435abcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x435ac0: 0x2631ffc9  addiu       $s1, $s1, -0x37
    ctx->pc = 0x435ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967241));
    // 0x435ac4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x435AC4u;
    {
        const bool branch_taken_0x435ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AC4u;
        // 0x435ac8: 0x62880a  movz        $s1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435ac4) {
            ctx->pc = 0x435A48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435a48;
        }
    }
    ctx->pc = 0x435ACCu;
label_435acc:
    // 0x435acc: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x435ACCu;
    {
        const bool branch_taken_0x435acc = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x435AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435ACCu;
        // 0x435ad0: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435acc) {
            ctx->pc = 0x435AE8u;
            goto label_435ae8;
        }
    }
    ctx->pc = 0x435AD4u;
    // 0x435ad4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x435ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435ad8: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x435ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x435adc: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x435adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435ae0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x435AE0u;
    {
        const bool branch_taken_0x435ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AE0u;
        // 0x435ae4: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435ae0) {
            ctx->pc = 0x435AF0u;
            goto label_435af0;
        }
    }
    ctx->pc = 0x435AE8u;
label_435ae8:
    // 0x435ae8: 0x4102f  dsubu       $v0, $zero, $a0
    ctx->pc = 0x435ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) - GPR_U64(ctx, 4));
    // 0x435aec: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x435aecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_435af0:
    // 0x435af0: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x435AF0u;
    {
        const bool branch_taken_0x435af0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x435AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435AF0u;
        // 0x435af4: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435af0) {
            ctx->pc = 0x435B04u;
            goto label_435b04;
        }
    }
    ctx->pc = 0x435AF8u;
    // 0x435af8: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x435af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x435afc: 0x74100a  movz        $v0, $v1, $s4
    ctx->pc = 0x435afcu;
    if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x435b00: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x435b00u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_435b04:
    // 0x435b04: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x435b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x435b08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x435b08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435b0c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x435b0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x435b10: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x435b10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x435b14: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x435b14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x435b18: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x435b18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x435b1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x435b1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x435b20: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x435b20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x435b24: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x435b24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x435b28: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x435b28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x435b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435b30: 0x3e00008  jr          $ra
    ctx->pc = 0x435B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435B30u;
        // 0x435b34: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435B38u;
}
