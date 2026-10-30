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

// Function: sub_004349F8
// Address: 0x4349f8 - 0x4358f0
void sub_004349F8_0x4349f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004349F8_0x4349f8");
#endif

    switch (ctx->pc) {
        case 0x434a40u: goto label_434a40;
        case 0x434aa8u: goto label_434aa8;
        case 0x434b00u: goto label_434b00;
        case 0x434b80u: goto label_434b80;
        case 0x434bb8u: goto label_434bb8;
        case 0x434be0u: goto label_434be0;
        case 0x434d00u: goto label_434d00;
        case 0x434d44u: goto label_434d44;
        case 0x434de4u: goto label_434de4;
        case 0x434e04u: goto label_434e04;
        case 0x434e34u: goto label_434e34;
        case 0x434e44u: goto label_434e44;
        case 0x434e5cu: goto label_434e5c;
        case 0x434e68u: goto label_434e68;
        case 0x434e74u: goto label_434e74;
        case 0x434f00u: goto label_434f00;
        case 0x434f20u: goto label_434f20;
        case 0x434f5cu: goto label_434f5c;
        case 0x434f94u: goto label_434f94;
        case 0x434fb0u: goto label_434fb0;
        case 0x434fb4u: goto label_434fb4;
        case 0x434fe8u: goto label_434fe8;
        case 0x435000u: goto label_435000;
        case 0x43504cu: goto label_43504c;
        case 0x4350e0u: goto label_4350e0;
        case 0x435110u: goto label_435110;
        case 0x435128u: goto label_435128;
        case 0x435164u: goto label_435164;
        case 0x435174u: goto label_435174;
        case 0x435188u: goto label_435188;
        case 0x435194u: goto label_435194;
        case 0x4351a4u: goto label_4351a4;
        case 0x4351acu: goto label_4351ac;
        case 0x4351b0u: goto label_4351b0;
        case 0x4351c8u: goto label_4351c8;
        case 0x4351d0u: goto label_4351d0;
        case 0x4351dcu: goto label_4351dc;
        case 0x4351fcu: goto label_4351fc;
        case 0x435220u: goto label_435220;
        case 0x43522cu: goto label_43522c;
        case 0x43523cu: goto label_43523c;
        case 0x43524cu: goto label_43524c;
        case 0x435320u: goto label_435320;
        case 0x43532cu: goto label_43532c;
        case 0x43533cu: goto label_43533c;
        case 0x435354u: goto label_435354;
        case 0x435368u: goto label_435368;
        case 0x4353ccu: goto label_4353cc;
        case 0x4353f4u: goto label_4353f4;
        case 0x43540cu: goto label_43540c;
        case 0x435424u: goto label_435424;
        case 0x435470u: goto label_435470;
        case 0x43547cu: goto label_43547c;
        case 0x435488u: goto label_435488;
        case 0x43551cu: goto label_43551c;
        case 0x435534u: goto label_435534;
        case 0x43553cu: goto label_43553c;
        case 0x435544u: goto label_435544;
        case 0x435558u: goto label_435558;
        case 0x435564u: goto label_435564;
        case 0x435570u: goto label_435570;
        case 0x43557cu: goto label_43557c;
        case 0x4355a8u: goto label_4355a8;
        case 0x4355b0u: goto label_4355b0;
        case 0x4355bcu: goto label_4355bc;
        case 0x4355fcu: goto label_4355fc;
        case 0x435620u: goto label_435620;
        case 0x435654u: goto label_435654;
        case 0x435668u: goto label_435668;
        case 0x435674u: goto label_435674;
        case 0x435680u: goto label_435680;
        case 0x43568cu: goto label_43568c;
        case 0x43569cu: goto label_43569c;
        case 0x4356bcu: goto label_4356bc;
        case 0x4356d0u: goto label_4356d0;
        case 0x4356e0u: goto label_4356e0;
        case 0x43578cu: goto label_43578c;
        case 0x4357a0u: goto label_4357a0;
        case 0x4357b0u: goto label_4357b0;
        case 0x4357c4u: goto label_4357c4;
        case 0x4357dcu: goto label_4357dc;
        case 0x4357f4u: goto label_4357f4;
        case 0x43580cu: goto label_43580c;
        case 0x435820u: goto label_435820;
        case 0x435838u: goto label_435838;
        case 0x43586cu: goto label_43586c;
        case 0x435878u: goto label_435878;
        case 0x435884u: goto label_435884;
        case 0x435890u: goto label_435890;
        case 0x43589cu: goto label_43589c;
        case 0x4358c0u: goto label_4358c0;
        default: break;
    }

    ctx->pc = 0x4349f8u;

    // 0x4349f8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x4349f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x4349fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x4349fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434a00: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x434a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x434a04: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x434a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x434a08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x434a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434a0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x434a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x434a10: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x434a10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434a14: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x434a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x434a18: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x434a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434a1c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x434a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x434a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434a24: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x434a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x434a28: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x434a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x434a2c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x434a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x434a30: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x434a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x434a34: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x434a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x434a38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x434a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x434a3c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x434a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_434a40:
    // 0x434a40: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x434a40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434a44: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x434a44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x434a48: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x434A48u;
    {
        const bool branch_taken_0x434a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A48u;
        // 0x434a4c: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a48) {
            ctx->pc = 0x434A94u;
            goto label_434a94;
        }
    }
    ctx->pc = 0x434A50u;
    // 0x434a50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x434a50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x434a54: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x434a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x434a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x434a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x434a5c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x434a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x434a60: 0x800008  jr          $a0
    ctx->pc = 0x434A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x434A68u: goto label_434a68;
            case 0x434A70u: goto label_434a70;
            case 0x434A88u: goto label_434a88;
            case 0x434A90u: goto label_434a90;
            case 0x434CACu: goto label_434cac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x434A60u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x434A68u;
label_434a68:
    // 0x434a68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x434a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434a6c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x434a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_434a70:
    // 0x434a70: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434a70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434a74: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x434a74u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434a78: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x434A78u;
    {
        const bool branch_taken_0x434a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434a78) {
            ctx->pc = 0x434A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434A78u;
            // 0x434a7c: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434A94u;
            goto label_434a94;
        }
    }
    ctx->pc = 0x434A80u;
    // 0x434a80: 0x10000386  b           . + 4 + (0x386 << 2)
    ctx->pc = 0x434A80u;
    {
        const bool branch_taken_0x434a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A80u;
        // 0x434a84: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a80) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434A88u;
label_434a88:
    // 0x434a88: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x434A88u;
    {
        const bool branch_taken_0x434a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A88u;
        // 0x434a8c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a88) {
            ctx->pc = 0x434A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434a40;
        }
    }
    ctx->pc = 0x434A90u;
label_434a90:
    // 0x434a90: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x434a90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_434a94:
    // 0x434a94: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x434a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x434a98: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x434A98u;
    {
        const bool branch_taken_0x434a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x434A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434A98u;
        // 0x434a9c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434a98) {
            ctx->pc = 0x434AC8u;
            goto label_434ac8;
        }
    }
    ctx->pc = 0x434AA0u;
    // 0x434aa0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x434aa0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434aa4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x434aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_434aa8:
    // 0x434aa8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434aac: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x434aacu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434ab0: 0x0  nop
    ctx->pc = 0x434ab0u;
    // NOP
    // 0x434ab4: 0x0  nop
    ctx->pc = 0x434ab4u;
    // NOP
    // 0x434ab8: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x434AB8u;
    {
        const bool branch_taken_0x434ab8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x434ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434AB8u;
        // 0x434abc: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ab8) {
            ctx->pc = 0x434AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434aa8;
        }
    }
    ctx->pc = 0x434AC0u;
    // 0x434ac0: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x434AC0u;
    {
        const bool branch_taken_0x434ac0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x434AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434AC0u;
        // 0x434ac4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ac0) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434AC8u;
label_434ac8:
    // 0x434ac8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x434ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x434acc: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x434accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x434ad0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x434ad0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x434ad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x434ad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434ad8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x434ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x434adc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x434adcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434ae0: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x434ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x434ae4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x434AE4u;
    {
        const bool branch_taken_0x434ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434AE4u;
        // 0x434ae8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ae4) {
            ctx->pc = 0x434B58u;
            goto label_434b58;
        }
    }
    ctx->pc = 0x434AECu;
    // 0x434aec: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x434aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x434af0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x434AF0u;
    {
        const bool branch_taken_0x434af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434AF0u;
        // 0x434af4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434af0) {
            ctx->pc = 0x434B5Cu;
            goto label_434b5c;
        }
    }
    ctx->pc = 0x434AF8u;
    // 0x434af8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x434af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x434afc: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x434afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_434b00:
    // 0x434b00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x434B00u;
    {
        const bool branch_taken_0x434b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B00u;
        // 0x434b04: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b00) {
            ctx->pc = 0x434B1Cu;
            goto label_434b1c;
        }
    }
    ctx->pc = 0x434B08u;
    // 0x434b08: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x434b08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x434b0c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x434b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x434b10: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x434b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x434b14: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x434B14u;
    {
        const bool branch_taken_0x434b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B14u;
        // 0x434b18: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b14) {
            ctx->pc = 0x434B38u;
            goto label_434b38;
        }
    }
    ctx->pc = 0x434B1Cu;
label_434b1c:
    // 0x434b1c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x434b1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x434b20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434B20u;
    {
        const bool branch_taken_0x434b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B20u;
        // 0x434b24: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b20) {
            ctx->pc = 0x434B38u;
            goto label_434b38;
        }
    }
    ctx->pc = 0x434B28u;
    // 0x434b28: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x434b28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x434b2c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x434b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x434b30: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x434b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x434b34: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x434b34u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_434b38:
    // 0x434b38: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434b38u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434b3c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434b3cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434b40: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x434b40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x434b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x434B44u;
    {
        const bool branch_taken_0x434b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B44u;
        // 0x434b48: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b44) {
            ctx->pc = 0x434B58u;
            goto label_434b58;
        }
    }
    ctx->pc = 0x434B4Cu;
    // 0x434b4c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x434b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x434b50: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x434B50u;
    {
        const bool branch_taken_0x434b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B50u;
        // 0x434b54: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b50) {
            ctx->pc = 0x434B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434b00;
        }
    }
    ctx->pc = 0x434B58u;
label_434b58:
    // 0x434b58: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x434b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_434b5c:
    // 0x434b5c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x434B5Cu;
    {
        const bool branch_taken_0x434b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x434B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B5Cu;
        // 0x434b60: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b5c) {
            ctx->pc = 0x434C7Cu;
            goto label_434c7c;
        }
    }
    ctx->pc = 0x434B64u;
    // 0x434b64: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434b64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434b68: 0x16800040  bnez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x434B68u;
    {
        const bool branch_taken_0x434b68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x434B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B68u;
        // 0x434b6c: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b68) {
            ctx->pc = 0x434C6Cu;
            goto label_434c6c;
        }
    }
    ctx->pc = 0x434B70u;
    // 0x434b70: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x434b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x434b74: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x434B74u;
    {
        const bool branch_taken_0x434b74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x434b74) {
            ctx->pc = 0x434B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434B74u;
            // 0x434b78: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434B9Cu;
            goto label_434b9c;
        }
    }
    ctx->pc = 0x434B7Cu;
    // 0x434b7c: 0x0  nop
    ctx->pc = 0x434b7cu;
    // NOP
label_434b80:
    // 0x434b80: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434b80u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434b84: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434b84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434b88: 0x0  nop
    ctx->pc = 0x434b88u;
    // NOP
    // 0x434b8c: 0x0  nop
    ctx->pc = 0x434b8cu;
    // NOP
    // 0x434b90: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x434B90u;
    {
        const bool branch_taken_0x434b90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x434B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434B90u;
        // 0x434b94: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434b90) {
            ctx->pc = 0x434B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434b80;
        }
    }
    ctx->pc = 0x434B98u;
    // 0x434b98: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x434b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_434b9c:
    // 0x434b9c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x434b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x434ba0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x434BA0u;
    {
        const bool branch_taken_0x434ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BA0u;
        // 0x434ba4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ba0) {
            ctx->pc = 0x434C80u;
            goto label_434c80;
        }
    }
    ctx->pc = 0x434BA8u;
    // 0x434ba8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x434ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434bac: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x434bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x434bb0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434bb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434bb4: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x434bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_434bb8:
    // 0x434bb8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x434bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x434bbc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x434BBCu;
    {
        const bool branch_taken_0x434bbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BBCu;
        // 0x434bc0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434bbc) {
            ctx->pc = 0x434C64u;
            goto label_434c64;
        }
    }
    ctx->pc = 0x434BC4u;
    // 0x434bc4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x434bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x434bc8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x434bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x434bcc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x434BCCu;
    {
        const bool branch_taken_0x434bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BCCu;
        // 0x434bd0: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434bcc) {
            ctx->pc = 0x434C1Cu;
            goto label_434c1c;
        }
    }
    ctx->pc = 0x434BD4u;
    // 0x434bd4: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x434bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x434bd8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x434bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x434bdc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x434bdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_434be0:
    // 0x434be0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x434be0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x434be4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434BE4u;
    {
        const bool branch_taken_0x434be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BE4u;
        // 0x434be8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434be4) {
            ctx->pc = 0x434BFCu;
            goto label_434bfc;
        }
    }
    ctx->pc = 0x434BECu;
    // 0x434bec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x434becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x434bf0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x434bf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x434bf4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x434BF4u;
    {
        const bool branch_taken_0x434bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434BF4u;
        // 0x434bf8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434bf4) {
            ctx->pc = 0x434C10u;
            goto label_434c10;
        }
    }
    ctx->pc = 0x434BFCu;
label_434bfc:
    // 0x434bfc: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x434bfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x434c00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x434C00u;
    {
        const bool branch_taken_0x434c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C00u;
        // 0x434c04: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c00) {
            ctx->pc = 0x434C10u;
            goto label_434c10;
        }
    }
    ctx->pc = 0x434C08u;
    // 0x434c08: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x434c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x434c0c: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x434c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_434c10:
    // 0x434c10: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x434c10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x434c14: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x434C14u;
    {
        const bool branch_taken_0x434c14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x434C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C14u;
        // 0x434c18: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c14) {
            ctx->pc = 0x434BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434be0;
        }
    }
    ctx->pc = 0x434C1Cu;
label_434c1c:
    // 0x434c1c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x434c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434c20: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x434c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x434c24: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x434C24u;
    {
        const bool branch_taken_0x434c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C24u;
        // 0x434c28: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c24) {
            ctx->pc = 0x434C48u;
            goto label_434c48;
        }
    }
    ctx->pc = 0x434C2Cu;
    // 0x434c2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x434c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x434c30: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x434c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x434c34: 0x800013  mtlo        $a0
    ctx->pc = 0x434c34u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x434c38: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x434c38u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x434c3c: 0x1812  mflo        $v1
    ctx->pc = 0x434c3cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x434c40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x434C40u;
    {
        const bool branch_taken_0x434c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C40u;
        // 0x434c44: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c40) {
            ctx->pc = 0x434C60u;
            goto label_434c60;
        }
    }
    ctx->pc = 0x434C48u;
label_434c48:
    // 0x434c48: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x434c48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x434c4c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x434C4Cu;
    {
        const bool branch_taken_0x434c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C4Cu;
        // 0x434c50: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c4c) {
            ctx->pc = 0x434C60u;
            goto label_434c60;
        }
    }
    ctx->pc = 0x434C54u;
    // 0x434c54: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x434c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x434c58: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x434c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x434c5c: 0x82902d  daddu       $s2, $a0, $v0
    ctx->pc = 0x434c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_434c60:
    // 0x434c60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x434c60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_434c64:
    // 0x434c64: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x434c64u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434c68: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434c68u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_434c6c:
    // 0x434c6c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x434c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x434c70: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x434c70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x434c74: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x434C74u;
    {
        const bool branch_taken_0x434c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C74u;
        // 0x434c78: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c74) {
            ctx->pc = 0x434BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434bb8;
        }
    }
    ctx->pc = 0x434C7Cu;
label_434c7c:
    // 0x434c7c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x434c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_434c80:
    // 0x434c80: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x434C80u;
    {
        const bool branch_taken_0x434c80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x434C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434C80u;
        // 0x434c84: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434c80) {
            ctx->pc = 0x434C94u;
            goto label_434c94;
        }
    }
    ctx->pc = 0x434C88u;
    // 0x434c88: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x434c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x434c8c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x434C8Cu;
    {
        const bool branch_taken_0x434c8c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x434c8c) {
            ctx->pc = 0x434DACu;
            goto label_434dac;
        }
    }
    ctx->pc = 0x434C94u;
label_434c94:
    // 0x434c94: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x434C94u;
    {
        const bool branch_taken_0x434c94 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x434c94) {
            ctx->pc = 0x434C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434C94u;
            // 0x434c98: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434CB4u;
            goto label_434cb4;
        }
    }
    ctx->pc = 0x434C9Cu;
    // 0x434c9c: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x434C9Cu;
    {
        const bool branch_taken_0x434c9c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x434c9c) {
            ctx->pc = 0x434CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434C9Cu;
            // 0x434ca0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434CB4u;
            goto label_434cb4;
        }
    }
    ctx->pc = 0x434CA4u;
    // 0x434ca4: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x434CA4u;
    {
        const bool branch_taken_0x434ca4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x434ca4) {
            ctx->pc = 0x434CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434CA4u;
            // 0x434ca8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434CB4u;
            goto label_434cb4;
        }
    }
    ctx->pc = 0x434CACu;
label_434cac:
    // 0x434cac: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x434CACu;
    {
        const bool branch_taken_0x434cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CACu;
        // 0x434cb0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434cac) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434CB4u;
label_434cb4:
    // 0x434cb4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434cb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434cb8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x434cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x434cbc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434cbcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434cc0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434CC0u;
    {
        const bool branch_taken_0x434cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x434CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CC0u;
        // 0x434cc4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434cc0) {
            ctx->pc = 0x434CD8u;
            goto label_434cd8;
        }
    }
    ctx->pc = 0x434CC8u;
    // 0x434cc8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x434cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x434ccc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x434CCCu;
    {
        const bool branch_taken_0x434ccc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x434CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CCCu;
        // 0x434cd0: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ccc) {
            ctx->pc = 0x434CE4u;
            goto label_434ce4;
        }
    }
    ctx->pc = 0x434CD4u;
    // 0x434cd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x434cd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_434cd8:
    // 0x434cd8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434cd8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434cdc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434cdcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434ce0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x434ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_434ce4:
    // 0x434ce4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x434ce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x434ce8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x434CE8u;
    {
        const bool branch_taken_0x434ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434CE8u;
        // 0x434cec: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ce8) {
            ctx->pc = 0x434DA8u;
            goto label_434da8;
        }
    }
    ctx->pc = 0x434CF0u;
    // 0x434cf0: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x434CF0u;
    {
        const bool branch_taken_0x434cf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x434cf0) {
            ctx->pc = 0x434CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434CF0u;
            // 0x434cf4: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434D1Cu;
            goto label_434d1c;
        }
    }
    ctx->pc = 0x434CF8u;
    // 0x434cf8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434cf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434cfc: 0x0  nop
    ctx->pc = 0x434cfcu;
    // NOP
label_434d00:
    // 0x434d00: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434d00u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434d04: 0x0  nop
    ctx->pc = 0x434d04u;
    // NOP
    // 0x434d08: 0x0  nop
    ctx->pc = 0x434d08u;
    // NOP
    // 0x434d0c: 0x0  nop
    ctx->pc = 0x434d0cu;
    // NOP
    // 0x434d10: 0x5082fffb  beql        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x434D10u;
    {
        const bool branch_taken_0x434d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x434d10) {
            ctx->pc = 0x434D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434D10u;
            // 0x434d14: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434d00;
        }
    }
    ctx->pc = 0x434D18u;
    // 0x434d18: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x434d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_434d1c:
    // 0x434d1c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x434d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x434d20: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x434D20u;
    {
        const bool branch_taken_0x434d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D20u;
        // 0x434d24: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d20) {
            ctx->pc = 0x434DA0u;
            goto label_434da0;
        }
    }
    ctx->pc = 0x434D28u;
    // 0x434d28: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x434d28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434d2c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x434d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x434d30: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434d34: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434d34u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434d38: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x434d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x434d3c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x434D3Cu;
    {
        const bool branch_taken_0x434d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D3Cu;
        // 0x434d40: 0x2a71023  subu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d3c) {
            ctx->pc = 0x434D7Cu;
            goto label_434d7c;
        }
    }
    ctx->pc = 0x434D44u;
label_434d44:
    // 0x434d44: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x434d44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x434d48: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x434D48u;
    {
        const bool branch_taken_0x434d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D48u;
        // 0x434d4c: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d48) {
            ctx->pc = 0x434D78u;
            goto label_434d78;
        }
    }
    ctx->pc = 0x434D50u;
    // 0x434d50: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x434d50u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x434d54: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x434d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x434d58: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x434d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x434d5c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x434d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x434d60: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x434d60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x434d64: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x434d64u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x434d68: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x434d68u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x434d6c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x434d6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x434d70: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x434D70u;
    {
        const bool branch_taken_0x434d70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x434D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D70u;
        // 0x434d74: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d70) {
            ctx->pc = 0x434D44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434d44;
        }
    }
    ctx->pc = 0x434D78u;
label_434d78:
    // 0x434d78: 0x2a71023  subu        $v0, $s5, $a3
    ctx->pc = 0x434d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_434d7c:
    // 0x434d7c: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x434d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x434d80: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x434d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x434d84: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x434d84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434d88: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x434d88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x434d8c: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x434d8cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x434d90: 0x7182f  dsubu       $v1, $zero, $a3
    ctx->pc = 0x434d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
    // 0x434d94: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x434d94u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x434d98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x434D98u;
    {
        const bool branch_taken_0x434d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434D98u;
        // 0x434d9c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434d98) {
            ctx->pc = 0x434DACu;
            goto label_434dac;
        }
    }
    ctx->pc = 0x434DA0u;
label_434da0:
    // 0x434da0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x434DA0u;
    {
        const bool branch_taken_0x434da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434DA0u;
        // 0x434da4: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434da0) {
            ctx->pc = 0x434DACu;
            goto label_434dac;
        }
    }
    ctx->pc = 0x434DA8u;
label_434da8:
    // 0x434da8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x434da8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_434dac:
    // 0x434dac: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x434DACu;
    {
        const bool branch_taken_0x434dac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x434DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434DACu;
        // 0x434db0: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434dac) {
            ctx->pc = 0x434DC0u;
            goto label_434dc0;
        }
    }
    ctx->pc = 0x434DB4u;
    // 0x434db4: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x434db4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x434db8: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x434DB8u;
    {
        const bool branch_taken_0x434db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434DB8u;
        // 0x434dbc: 0xa6a80a  movz        $s5, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434db8) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434DC0u;
label_434dc0:
    // 0x434dc0: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x434dc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x434dc4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x434dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x434dc8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x434dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x434dcc: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x434dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x434dd0: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x434dd0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x434dd4: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x434dd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x434dd8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x434dd8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x434ddc: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x434DDCu;
    SET_GPR_U32(ctx, 31, 0x434DE4u);
    ctx->pc = 0x434DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434DDCu;
    // 0x434de0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x434DDCu, 0x434DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434DE4u;
label_434de4:
    // 0x434de4: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x434de4u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x434de8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x434de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x434dec: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x434DECu;
    {
        const bool branch_taken_0x434dec = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x434DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434DECu;
        // 0x434df0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434dec) {
            ctx->pc = 0x434E08u;
            goto label_434e08;
        }
    }
    ctx->pc = 0x434DF4u;
    // 0x434df4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x434df4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x434df8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x434df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x434dfc: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x434DFCu;
    SET_GPR_U32(ctx, 31, 0x434E04u);
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x434DFCu, 0x434E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E04u;
label_434e04:
    // 0x434e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434e08:
    // 0x434e08: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x434e08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x434e0c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x434E0Cu;
    {
        const bool branch_taken_0x434e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E0Cu;
        // 0x434e10: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e0c) {
            ctx->pc = 0x434E78u;
            goto label_434e78;
        }
    }
    ctx->pc = 0x434E14u;
    // 0x434e14: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x434e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x434e18: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x434e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x434e1c: 0x2463d1b0  addiu       $v1, $v1, -0x2E50
    ctx->pc = 0x434e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955440));
    // 0x434e20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x434e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x434e24: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x434e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x434e28: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x434e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434e2c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x434E2Cu;
    SET_GPR_U32(ctx, 31, 0x434E34u);
    ctx->pc = 0x434E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434E2Cu;
    // 0x434e30: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x434E2Cu, 0x434E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E34u;
label_434e34:
    // 0x434e34: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x434E34u;
    {
        const bool branch_taken_0x434e34 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x434E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E34u;
        // 0x434e38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e34) {
            ctx->pc = 0x434E4Cu;
            goto label_434e4c;
        }
    }
    ctx->pc = 0x434E3Cu;
    // 0x434e3c: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x434E3Cu;
    SET_GPR_U32(ctx, 31, 0x434E44u);
    ctx->pc = 0x434E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434E3Cu;
    // 0x434e40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x434E3Cu, 0x434E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E44u;
label_434e44:
    // 0x434e44: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x434E44u;
    {
        const bool branch_taken_0x434e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E44u;
        // 0x434e48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e44) {
            ctx->pc = 0x434E6Cu;
            goto label_434e6c;
        }
    }
    ctx->pc = 0x434E4Cu;
label_434e4c:
    // 0x434e4c: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x434e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x434e50: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x434e50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x434e54: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x434E54u;
    SET_GPR_U32(ctx, 31, 0x434E5Cu);
    ctx->pc = 0x434E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434E54u;
    // 0x434e58: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x434E54u, 0x434E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E5Cu;
label_434e5c:
    // 0x434e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x434e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434e60: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x434E60u;
    SET_GPR_U32(ctx, 31, 0x434E68u);
    ctx->pc = 0x434E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434E60u;
    // 0x434e64: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x434E60u, 0x434E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E68u;
label_434e68:
    // 0x434e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_434e6c:
    // 0x434e6c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x434E6Cu;
    SET_GPR_U32(ctx, 31, 0x434E74u);
    ctx->pc = 0x434E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434E6Cu;
    // 0x434e70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x434E6Cu, 0x434E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434E74u;
label_434e74:
    // 0x434e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x434e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434e78:
    // 0x434e78: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x434e78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x434e7c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x434E7Cu;
    {
        const bool branch_taken_0x434e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E7Cu;
        // 0x434e80: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e7c) {
            ctx->pc = 0x434F64u;
            goto label_434f64;
        }
    }
    ctx->pc = 0x434E84u;
    // 0x434e84: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x434e84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434e88: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x434E88u;
    {
        const bool branch_taken_0x434e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E88u;
        // 0x434e8c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e88) {
            ctx->pc = 0x4358A0u;
            goto label_4358a0;
        }
    }
    ctx->pc = 0x434E90u;
    // 0x434e90: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x434E90u;
    {
        const bool branch_taken_0x434e90 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x434E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E90u;
        // 0x434e94: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e90) {
            ctx->pc = 0x434F28u;
            goto label_434f28;
        }
    }
    ctx->pc = 0x434E98u;
    // 0x434e98: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x434E98u;
    {
        const bool branch_taken_0x434e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x434E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434E98u;
        // 0x434e9c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434e98) {
            ctx->pc = 0x434EC0u;
            goto label_434ec0;
        }
    }
    ctx->pc = 0x434EA0u;
    // 0x434ea0: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x434ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x434ea4: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x434ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x434ea8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x434ea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434eac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x434eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x434eb0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x434eb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x434eb4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x434eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x434eb8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x434EB8u;
    {
        const bool branch_taken_0x434eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434EB8u;
        // 0x434ebc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434eb8) {
            ctx->pc = 0x434F18u;
            goto label_434f18;
        }
    }
    ctx->pc = 0x434EC0u;
label_434ec0:
    // 0x434ec0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x434ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x434ec4: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x434ec4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x434ec8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x434ec8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434ecc: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x434eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x434ed0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x434ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x434ed4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x434ED4u;
    {
        const bool branch_taken_0x434ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434ED4u;
        // 0x434ed8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434ed4) {
            ctx->pc = 0x434F68u;
            goto label_434f68;
        }
    }
    ctx->pc = 0x434EDCu;
    // 0x434edc: 0x3c100059  lui         $s0, 0x59
    ctx->pc = 0x434edcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)89 << 16));
    // 0x434ee0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x434ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x434ee4: 0x2610d1b0  addiu       $s0, $s0, -0x2E50
    ctx->pc = 0x434ee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955440));
    // 0x434ee8: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x434ee8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x434eec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x434eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x434ef0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x434ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434ef4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x434ef4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x434ef8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x434EF8u;
    SET_GPR_U32(ctx, 31, 0x434F00u);
    ctx->pc = 0x434EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434EF8u;
    // 0x434efc: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x434EF8u, 0x434F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434F00u;
label_434f00:
    // 0x434f00: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x434f00u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434f04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x434f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434f08: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x434f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x434f0c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x434f0cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x434f10: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x434f10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x434f14: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x434f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_434f18:
    // 0x434f18: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x434F18u;
    SET_GPR_U32(ctx, 31, 0x434F20u);
    ctx->pc = 0x434F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434F18u;
    // 0x434f1c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x434F18u, 0x434F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434F20u;
label_434f20:
    // 0x434f20: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x434F20u;
    {
        const bool branch_taken_0x434f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F20u;
        // 0x434f24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f20) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434F28u;
label_434f28:
    // 0x434f28: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x434f28u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x434f2c: 0x28e2ffea  slti        $v0, $a3, -0x16
    ctx->pc = 0x434f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x434f30: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x434F30u;
    {
        const bool branch_taken_0x434f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F30u;
        // 0x434f34: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f30) {
            ctx->pc = 0x434F68u;
            goto label_434f68;
        }
    }
    ctx->pc = 0x434F38u;
    // 0x434f38: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x434f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x434f3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x434f3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x434f40: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x434f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x434f44: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x434f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x434f48: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x434f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x434f4c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x434f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x434f50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x434f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434f54: 0xc10b000  jal         func_42C000
    ctx->pc = 0x434F54u;
    SET_GPR_U32(ctx, 31, 0x434F5Cu);
    ctx->pc = 0x434F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434F54u;
    // 0x434f58: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x434F54u, 0x434F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434F5Cu;
label_434f5c:
    // 0x434f5c: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x434F5Cu;
    {
        const bool branch_taken_0x434f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F5Cu;
        // 0x434f60: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f5c) {
            ctx->pc = 0x43589Cu;
            goto label_43589c;
        }
    }
    ctx->pc = 0x434F64u;
label_434f64:
    // 0x434f64: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x434f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_434f68:
    // 0x434f68: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x434f68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x434f6c: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x434F6Cu;
    {
        const bool branch_taken_0x434f6c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x434F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F6Cu;
        // 0x434f70: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f6c) {
            ctx->pc = 0x4350B0u;
            goto label_4350b0;
        }
    }
    ctx->pc = 0x434F74u;
    // 0x434f74: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x434F74u;
    {
        const bool branch_taken_0x434f74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x434F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434F74u;
        // 0x434f78: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434f74) {
            ctx->pc = 0x434F98u;
            goto label_434f98;
        }
    }
    ctx->pc = 0x434F7Cu;
    // 0x434f7c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x434f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x434f80: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x434f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x434f84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x434f84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x434f88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x434f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x434f8c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x434F8Cu;
    SET_GPR_U32(ctx, 31, 0x434F94u);
    ctx->pc = 0x434F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434F8Cu;
    // 0x434f90: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x434F8Cu, 0x434F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x434F94u;
label_434f94:
    // 0x434f94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x434f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_434f98:
    // 0x434f98: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x434f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x434f9c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x434f9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x434fa0: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
    ctx->pc = 0x434FA0u;
    {
        const bool branch_taken_0x434fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x434FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FA0u;
        // 0x434fa4: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fa0) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x434FA8u;
    // 0x434fa8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x434FA8u;
    {
        const bool branch_taken_0x434fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x434fa8) {
            ctx->pc = 0x434FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434FA8u;
            // 0x434fac: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x434FD0u;
            goto label_434fd0;
        }
    }
    ctx->pc = 0x434FB0u;
label_434fb0:
    // 0x434fb0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x434fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_434fb4:
    // 0x434fb4: 0x3c030059  lui         $v1, 0x59
    ctx->pc = 0x434fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)89 << 16));
    // 0x434fb8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x434fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x434fbc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x434fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x434fc0: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x434FC0u;
    {
        const bool branch_taken_0x434fc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FC0u;
        // 0x434fc4: 0xdc71d198  ld          $s1, -0x2E68($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294955416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fc0) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x434FC8u;
    // 0x434fc8: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x434FC8u;
    {
        const bool branch_taken_0x434fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x434FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FC8u;
        // 0x434fcc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fc8) {
            ctx->pc = 0x4358A0u;
            goto label_4358a0;
        }
    }
    ctx->pc = 0x434FD0u;
label_434fd0:
    // 0x434fd0: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x434FD0u;
    {
        const bool branch_taken_0x434fd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x434FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FD0u;
        // 0x434fd4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fd0) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x434FD8u;
    // 0x434fd8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x434fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x434fdc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x434FDCu;
    {
        const bool branch_taken_0x434fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x434FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x434FDCu;
        // 0x434fe0: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x434fdc) {
            ctx->pc = 0x435018u;
            goto label_435018;
        }
    }
    ctx->pc = 0x434FE4u;
    // 0x434fe4: 0x26d2d278  addiu       $s2, $s6, -0x2D88
    ctx->pc = 0x434fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955640));
label_434fe8:
    // 0x434fe8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x434fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x434fec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x434FECu;
    {
        const bool branch_taken_0x434fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x434fec) {
            ctx->pc = 0x434FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x434FECu;
            // 0x434ff0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435008u;
            goto label_435008;
        }
    }
    ctx->pc = 0x434FF4u;
    // 0x434ff4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x434ff4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x434ff8: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x434FF8u;
    SET_GPR_U32(ctx, 31, 0x435000u);
    ctx->pc = 0x434FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x434FF8u;
    // 0x434ffc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x434FF8u, 0x435000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435000u;
label_435000:
    // 0x435000: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x435000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435004: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x435004u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_435008:
    // 0x435008: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x435008u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x43500c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x43500cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x435010: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x435010u;
    {
        const bool branch_taken_0x435010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435010u;
        // 0x435014: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435010) {
            ctx->pc = 0x434FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434fe8;
        }
    }
    ctx->pc = 0x435018u;
label_435018:
    // 0x435018: 0x26c4d278  addiu       $a0, $s6, -0x2D88
    ctx->pc = 0x435018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955640));
    // 0x43501c: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x43501cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x435020: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x435020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x435024: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x435024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x435028: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x435028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x43502c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x43502cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x435030: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x435030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435034: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x435034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x435038: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x435038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x43503c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x43503cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x435040: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x435040u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x435044: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x435044u;
    SET_GPR_U32(ctx, 31, 0x43504Cu);
    ctx->pc = 0x435048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435044u;
    // 0x435048: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x435044u, 0x43504Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43504Cu;
label_43504c:
    // 0x43504c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43504cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435050: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x435050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x435054: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x435054u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x435058: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x435058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x43505c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x43505cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x435060: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x435060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x435064: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x435064u;
    {
        const bool branch_taken_0x435064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435064u;
        // 0x435068: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435064) {
            ctx->pc = 0x434FB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434fb4;
        }
    }
    ctx->pc = 0x43506Cu;
    // 0x43506c: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x43506cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x435070: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x435070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x435074: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x435074u;
    {
        const bool branch_taken_0x435074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435074u;
        // 0x435078: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435074) {
            ctx->pc = 0x43509Cu;
            goto label_43509c;
        }
    }
    ctx->pc = 0x43507Cu;
    // 0x43507c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x43507cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x435080: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x435080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x435084: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x435084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x435088: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x435088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x43508c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x43508cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x435090: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x435090u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x435094: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x435094u;
    {
        const bool branch_taken_0x435094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435094u;
        // 0x435098: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435094) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x43509Cu;
label_43509c:
    // 0x43509c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x43509cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x4350a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4350a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4350a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4350a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4350a8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4350A8u;
    {
        const bool branch_taken_0x4350a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350A8u;
        // 0x4350ac: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350a8) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x4350B0u;
label_4350b0:
    // 0x4350b0: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x4350B0u;
    {
        const bool branch_taken_0x4350b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x4350B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350B0u;
        // 0x4350b4: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350b0) {
            ctx->pc = 0x4351E8u;
            goto label_4351e8;
        }
    }
    ctx->pc = 0x4350B8u;
    // 0x4350b8: 0x108023  negu        $s0, $s0
    ctx->pc = 0x4350b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x4350bc: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x4350bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x4350c0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4350C0u;
    {
        const bool branch_taken_0x4350c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350C0u;
        // 0x4350c4: 0x3c020059  lui         $v0, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350c0) {
            ctx->pc = 0x4350E4u;
            goto label_4350e4;
        }
    }
    ctx->pc = 0x4350C8u;
    // 0x4350c8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x4350c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x4350cc: 0x2442d1b0  addiu       $v0, $v0, -0x2E50
    ctx->pc = 0x4350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955440));
    // 0x4350d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4350d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4350d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4350d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4350d8: 0xc10b000  jal         func_42C000
    ctx->pc = 0x4350D8u;
    SET_GPR_U32(ctx, 31, 0x4350E0u);
    ctx->pc = 0x4350DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4350D8u;
    // 0x4350dc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C000u, 0x4350D8u, 0x4350E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4350E0u;
label_4350e0:
    // 0x4350e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4350e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4350e4:
    // 0x4350e4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x4350e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x4350e8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x4350e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x4350ec: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x4350ECu;
    {
        const bool branch_taken_0x4350ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350ECu;
        // 0x4350f0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350ec) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x4350F4u;
    // 0x4350f4: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x4350f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x4350f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x4350F8u;
    {
        const bool branch_taken_0x4350f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4350FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4350F8u;
        // 0x4350fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4350f8) {
            ctx->pc = 0x4351ACu;
            goto label_4351ac;
        }
    }
    ctx->pc = 0x435100u;
    // 0x435100: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x435100u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x435104: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x435104u;
    {
        const bool branch_taken_0x435104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435104u;
        // 0x435108: 0x3c160059  lui         $s6, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435104) {
            ctx->pc = 0x435140u;
            goto label_435140;
        }
    }
    ctx->pc = 0x43510Cu;
    // 0x43510c: 0x26d2d2a0  addiu       $s2, $s6, -0x2D60
    ctx->pc = 0x43510cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955680));
label_435110:
    // 0x435110: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x435110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x435114: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x435114u;
    {
        const bool branch_taken_0x435114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x435114) {
            ctx->pc = 0x435118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435114u;
            // 0x435118: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435130u;
            goto label_435130;
        }
    }
    ctx->pc = 0x43511Cu;
    // 0x43511c: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x43511cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x435120: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x435120u;
    SET_GPR_U32(ctx, 31, 0x435128u);
    ctx->pc = 0x435124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435120u;
    // 0x435124: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x435120u, 0x435128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435128u;
label_435128:
    // 0x435128: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x435128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43512c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x43512cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_435130:
    // 0x435130: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x435130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x435134: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x435134u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x435138: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x435138u;
    {
        const bool branch_taken_0x435138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435138u;
        // 0x43513c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435138) {
            ctx->pc = 0x435110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435110;
        }
    }
    ctx->pc = 0x435140u;
label_435140:
    // 0x435140: 0x26c2d2a0  addiu       $v0, $s6, -0x2D60
    ctx->pc = 0x435140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294955680));
    // 0x435144: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x435144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x435148: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x435148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x43514c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43514cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435150: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x435150u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x435154: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x435154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x435158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43515c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43515Cu;
    SET_GPR_U32(ctx, 31, 0x435164u);
    ctx->pc = 0x435160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43515Cu;
    // 0x435160: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43515Cu, 0x435164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435164u;
label_435164:
    // 0x435164: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x435164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43516c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43516Cu;
    SET_GPR_U32(ctx, 31, 0x435174u);
    ctx->pc = 0x435170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43516Cu;
    // 0x435170: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43516Cu, 0x435174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435174u;
label_435174:
    // 0x435174: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x435174u;
    {
        const bool branch_taken_0x435174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x435178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435174u;
        // 0x435178: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435174) {
            ctx->pc = 0x4351E8u;
            goto label_4351e8;
        }
    }
    ctx->pc = 0x43517Cu;
    // 0x43517c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x43517cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435180: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x435180u;
    SET_GPR_U32(ctx, 31, 0x435188u);
    ctx->pc = 0x435184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435180u;
    // 0x435184: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x435180u, 0x435188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435188u;
label_435188:
    // 0x435188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x435188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43518c: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x43518Cu;
    SET_GPR_U32(ctx, 31, 0x435194u);
    ctx->pc = 0x435190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43518Cu;
    // 0x435190: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x43518Cu, 0x435194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435194u;
label_435194:
    // 0x435194: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x435194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435198: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43519c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43519Cu;
    SET_GPR_U32(ctx, 31, 0x4351A4u);
    ctx->pc = 0x4351A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43519Cu;
    // 0x4351a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43519Cu, 0x4351A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4351A4u;
label_4351a4:
    // 0x4351a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x4351A4u;
    {
        const bool branch_taken_0x4351a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4351A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351A4u;
        // 0x4351a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351a4) {
            ctx->pc = 0x4351E4u;
            goto label_4351e4;
        }
    }
    ctx->pc = 0x4351ACu;
label_4351ac:
    // 0x4351ac: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x4351acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_4351b0:
    // 0x4351b0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x4351b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x4351b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x4351b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4351b8: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x4351B8u;
    {
        const bool branch_taken_0x4351b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4351BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351B8u;
        // 0x4351bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351b8) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x4351C0u;
    // 0x4351c0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x4351C0u;
    {
        const bool branch_taken_0x4351c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351C0u;
        // 0x4351c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351c0) {
            ctx->pc = 0x4358A0u;
            goto label_4358a0;
        }
    }
    ctx->pc = 0x4351C8u;
label_4351c8:
    // 0x4351c8: 0xc10edcc  jal         func_43B730
    ctx->pc = 0x4351C8u;
    SET_GPR_U32(ctx, 31, 0x4351D0u);
    ctx->pc = 0x4351CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4351C8u;
    // 0x4351cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B730u, 0x4351C8u, 0x4351D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4351D0u;
label_4351d0:
    // 0x4351d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4351d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4351d4: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x4351D4u;
    SET_GPR_U32(ctx, 31, 0x4351DCu);
    ctx->pc = 0x4351D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4351D4u;
    // 0x4351d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x4351D4u, 0x4351DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4351DCu;
label_4351dc:
    // 0x4351dc: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x4351DCu;
    {
        const bool branch_taken_0x4351dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4351E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4351DCu;
        // 0x4351e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4351dc) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x4351E4u;
label_4351e4:
    // 0x4351e4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x4351e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_4351e8:
    // 0x4351e8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x4351e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4351ec: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x4351ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4351f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4351f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4351f4: 0xc10eb88  jal         func_43AE20
    ctx->pc = 0x4351F4u;
    SET_GPR_U32(ctx, 31, 0x4351FCu);
    ctx->pc = 0x4351F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4351F4u;
    // 0x4351f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AE20u, 0x4351F4u, 0x4351FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4351FCu;
label_4351fc:
    // 0x4351fc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x4351fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x435200: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x435200u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435204: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x435204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x435208: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x435208u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x43520c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x43520cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x435210: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x435210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x435214: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x435214u;
    {
        const bool branch_taken_0x435214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435214u;
        // 0x435218: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435214) {
            ctx->pc = 0x43568Cu;
            goto label_43568c;
        }
    }
    ctx->pc = 0x43521Cu;
    // 0x43521c: 0x0  nop
    ctx->pc = 0x43521cu;
    // NOP
label_435220:
    // 0x435220: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x435220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435224: 0xc10ecf8  jal         func_43B3E0
    ctx->pc = 0x435224u;
    SET_GPR_U32(ctx, 31, 0x43522Cu);
    ctx->pc = 0x435228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435224u;
    // 0x435228: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B3E0u, 0x435224u, 0x43522Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43522Cu;
label_43522c:
    // 0x43522c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x43522cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x435230: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x435230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x435234: 0xc10ed4e  jal         func_43B538
    ctx->pc = 0x435234u;
    SET_GPR_U32(ctx, 31, 0x43523Cu);
    ctx->pc = 0x435238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435234u;
    // 0x435238: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B538u, 0x435234u, 0x43523Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43523Cu;
label_43523c:
    // 0x43523c: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x43523Cu;
    {
        const bool branch_taken_0x43523c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x435240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43523Cu;
        // 0x435240: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43523c) {
            ctx->pc = 0x4352B8u;
            goto label_4352b8;
        }
    }
    ctx->pc = 0x435244u;
    // 0x435244: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x435244u;
    {
        const bool branch_taken_0x435244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x435244) {
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x43524Cu;
label_43524c:
    // 0x43524c: 0x14e0003f  bnez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x43524Cu;
    {
        const bool branch_taken_0x43524c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x435250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43524Cu;
        // 0x435250: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43524c) {
            ctx->pc = 0x43534Cu;
            goto label_43534c;
        }
    }
    ctx->pc = 0x435254u;
    // 0x435254: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x435254u;
    {
        const bool branch_taken_0x435254 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x435254) {
            ctx->pc = 0x4352A4u;
            goto label_4352a4;
        }
    }
    ctx->pc = 0x43525Cu;
    // 0x43525c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43525cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435260: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x435260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x435264: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x435264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x435268: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x435268u;
    {
        const bool branch_taken_0x435268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x43526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435268u;
        // 0x43526c: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435268) {
            ctx->pc = 0x4352FCu;
            goto label_4352fc;
        }
    }
    ctx->pc = 0x435270u;
    // 0x435270: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x435270u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x435274: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x435274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x435278: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x435278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x43527c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x43527cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435280: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x435280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x435284: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x435284u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x435288: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x435288u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x43528c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x435290: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x435290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x435294: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x435294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435298: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x435298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43529c: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x43529Cu;
    {
        const bool branch_taken_0x43529c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4352A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43529Cu;
        // 0x4352a0: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43529c) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x4352A4u;
label_4352a4:
    // 0x4352a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4352a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4352a8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x4352a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x4352ac: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4352acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4352b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4352B0u;
    {
        const bool branch_taken_0x4352b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4352b0) {
            ctx->pc = 0x4352FCu;
            goto label_4352fc;
        }
    }
    ctx->pc = 0x4352B8u;
label_4352b8:
    // 0x4352b8: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x4352b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x4352bc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x4352bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x4352c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4352c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4352c4: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x4352c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x4352c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4352c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4352cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4352ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4352d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4352d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4352d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4352d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4352d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x4352d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x4352dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x4352dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x4352e0: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x4352e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x4352e4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x4352e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x4352e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4352e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x4352ec: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x4352ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x4352f0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x4352f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x4352f4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x4352F4u;
    {
        const bool branch_taken_0x4352f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4352F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4352F4u;
        // 0x4352f8: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4352f4) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x4352FCu;
label_4352fc:
    // 0x4352fc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x4352fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x435300: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x435300u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x435304: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x435304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x435308: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x435308u;
    {
        const bool branch_taken_0x435308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435308u;
        // 0x43530c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435308) {
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x435310u;
    // 0x435310: 0x1680ffad  bnez        $s4, . + 4 + (-0x53 << 2)
    ctx->pc = 0x435310u;
    {
        const bool branch_taken_0x435310 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x435310) {
            ctx->pc = 0x4351C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4351c8;
        }
    }
    ctx->pc = 0x435318u;
    // 0x435318: 0xc10edcc  jal         func_43B730
    ctx->pc = 0x435318u;
    SET_GPR_U32(ctx, 31, 0x435320u);
    ctx->pc = 0x43531Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435318u;
    // 0x43531c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B730u, 0x435318u, 0x435320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435320u;
label_435320:
    // 0x435320: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x435320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435324: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x435324u;
    SET_GPR_U32(ctx, 31, 0x43532Cu);
    ctx->pc = 0x435328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435324u;
    // 0x435328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x435324u, 0x43532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43532Cu;
label_43532c:
    // 0x43532c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x43532cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435330: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x435330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435334: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x435334u;
    SET_GPR_U32(ctx, 31, 0x43533Cu);
    ctx->pc = 0x435338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435334u;
    // 0x435338: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x435334u, 0x43533Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43533Cu;
label_43533c:
    // 0x43533c: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x43533Cu;
    {
        const bool branch_taken_0x43533c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43533Cu;
        // 0x435340: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43533c) {
            ctx->pc = 0x4351ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4351ac;
        }
    }
    ctx->pc = 0x435344u;
    // 0x435344: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x435344u;
    {
        const bool branch_taken_0x435344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x435344) {
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x43534Cu;
label_43534c:
    // 0x43534c: 0xc10eec4  jal         func_43BB10
    ctx->pc = 0x43534Cu;
    SET_GPR_U32(ctx, 31, 0x435354u);
    ctx->pc = 0x435350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43534Cu;
    // 0x435350: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43BB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43BB10u, 0x43534Cu, 0x435354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435354u;
label_435354:
    // 0x435354: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x435354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435358: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x435358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x43535c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x43535cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x435360: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x435360u;
    SET_GPR_U32(ctx, 31, 0x435368u);
    ctx->pc = 0x435364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435360u;
    // 0x435364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x435360u, 0x435368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435368u;
label_435368:
    // 0x435368: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x435368u;
    {
        const bool branch_taken_0x435368 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x435368) {
            ctx->pc = 0x4353FCu;
            goto label_4353fc;
        }
    }
    ctx->pc = 0x435370u;
    // 0x435370: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x435370u;
    {
        const bool branch_taken_0x435370 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x435370) {
            ctx->pc = 0x435388u;
            goto label_435388;
        }
    }
    ctx->pc = 0x435378u;
    // 0x435378: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x435378u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x43537c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x43537cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x435380: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x435380u;
    {
        const bool branch_taken_0x435380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435380u;
        // 0x435384: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435380) {
            ctx->pc = 0x435428u;
            goto label_435428;
        }
    }
    ctx->pc = 0x435388u;
label_435388:
    // 0x435388: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x435388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x43538c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x43538cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x435390: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x435390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x435394: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x435394u;
    {
        const bool branch_taken_0x435394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435394u;
        // 0x435398: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435394) {
            ctx->pc = 0x4353BCu;
            goto label_4353bc;
        }
    }
    ctx->pc = 0x43539Cu;
    // 0x43539c: 0x1222ff84  beq         $s1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x43539Cu;
    {
        const bool branch_taken_0x43539c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4353A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43539Cu;
        // 0x4353a0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43539c) {
            ctx->pc = 0x4351B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4351b0;
        }
    }
    ctx->pc = 0x4353A4u;
    // 0x4353a4: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x4353a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4353a8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4353a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4353ac: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x4353acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x4353b0: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x4353b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x4353b4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x4353B4u;
    {
        const bool branch_taken_0x4353b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4353b4) {
            ctx->pc = 0x435428u;
            goto label_435428;
        }
    }
    ctx->pc = 0x4353BCu;
label_4353bc:
    // 0x4353bc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x4353bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x4353c0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4353c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4353c4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4353C4u;
    SET_GPR_U32(ctx, 31, 0x4353CCu);
    ctx->pc = 0x4353C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4353C4u;
    // 0x4353c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4353C4u, 0x4353CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4353CCu;
label_4353cc:
    // 0x4353cc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4353CCu;
    {
        const bool branch_taken_0x4353cc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x4353D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4353CCu;
        // 0x4353d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4353cc) {
            ctx->pc = 0x4353E4u;
            goto label_4353e4;
        }
    }
    ctx->pc = 0x4353D4u;
    // 0x4353d4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x4353d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4353d8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x4353d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x4353dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4353DCu;
    {
        const bool branch_taken_0x4353dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4353dc) {
            ctx->pc = 0x43541Cu;
            goto label_43541c;
        }
    }
    ctx->pc = 0x4353E4u;
label_4353e4:
    // 0x4353e4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4353e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x4353e8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x4353e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x4353ec: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x4353ECu;
    SET_GPR_U32(ctx, 31, 0x4353F4u);
    ctx->pc = 0x4353F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4353ECu;
    // 0x4353f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x4353ECu, 0x4353F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4353F4u;
label_4353f4:
    // 0x4353f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4353F4u;
    {
        const bool branch_taken_0x4353f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4353F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4353F4u;
        // 0x4353f8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4353f4) {
            ctx->pc = 0x435418u;
            goto label_435418;
        }
    }
    ctx->pc = 0x4353FCu;
label_4353fc:
    // 0x4353fc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x4353fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x435400: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x435400u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x435404: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x435404u;
    SET_GPR_U32(ctx, 31, 0x43540Cu);
    ctx->pc = 0x435408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435404u;
    // 0x435408: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x435404u, 0x43540Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43540Cu;
label_43540c:
    // 0x43540c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43540cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435410: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x435410u;
    {
        const bool branch_taken_0x435410 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x435414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435410u;
        // 0x435414: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435410) {
            ctx->pc = 0x435428u;
            goto label_435428;
        }
    }
    ctx->pc = 0x435418u;
label_435418:
    // 0x435418: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x435418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43541c:
    // 0x43541c: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x43541Cu;
    SET_GPR_U32(ctx, 31, 0x435424u);
    ctx->pc = 0x435420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43541Cu;
    // 0x435420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x43541Cu, 0x435424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435424u;
label_435424:
    // 0x435424: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x435424u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_435428:
    // 0x435428: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x435428u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x43542c: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x43542cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x435430: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x435430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x435434: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x435434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x435438: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x435438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x43543c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x43543cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435440: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x435440u;
    {
        const bool branch_taken_0x435440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x435444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435440u;
        // 0x435444: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435440) {
            ctx->pc = 0x4354FCu;
            goto label_4354fc;
        }
    }
    ctx->pc = 0x435448u;
    // 0x435448: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x435448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x43544c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x43544cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435450: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x435450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x435454: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x435454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435458: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x435458u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x43545c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x43545cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x435460: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x435460u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x435464: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x435464u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x435468: 0xc10edcc  jal         func_43B730
    ctx->pc = 0x435468u;
    SET_GPR_U32(ctx, 31, 0x435470u);
    ctx->pc = 0x43546Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435468u;
    // 0x43546c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B730u, 0x435468u, 0x435470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435470u;
label_435470:
    // 0x435470: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x435470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435474: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x435474u;
    SET_GPR_U32(ctx, 31, 0x43547Cu);
    ctx->pc = 0x435478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435474u;
    // 0x435478: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x435474u, 0x43547Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43547Cu;
label_43547c:
    // 0x43547c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x43547cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435480: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x435480u;
    SET_GPR_U32(ctx, 31, 0x435488u);
    ctx->pc = 0x435484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435480u;
    // 0x435484: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x435480u, 0x435488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435488u;
label_435488:
    // 0x435488: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x435488u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43548c: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x43548cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x435490: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x435490u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x435494: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x435494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x435498: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x435498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x43549c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x43549cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4354a0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x4354A0u;
    {
        const bool branch_taken_0x4354a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4354A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354A0u;
        // 0x4354a4: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354a0) {
            ctx->pc = 0x4354E8u;
            goto label_4354e8;
        }
    }
    ctx->pc = 0x4354A8u;
    // 0x4354a8: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x4354a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x4354ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4354acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4354b0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4354b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4354b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4354b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4354b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4354b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4354bc: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x4354bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x4354c0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x4354c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x4354c4: 0x12c2feba  beq         $s6, $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x4354C4u;
    {
        const bool branch_taken_0x4354c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x4354C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354C4u;
        // 0x4354c8: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354c4) {
            ctx->pc = 0x434FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_434fb0;
        }
    }
    ctx->pc = 0x4354CCu;
    // 0x4354cc: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x4354ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x4354d0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x4354d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x4354d4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4354d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4354d8: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x4354d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x4354dc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x4354dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x4354e0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x4354E0u;
    {
        const bool branch_taken_0x4354e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4354E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354E0u;
        // 0x4354e4: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354e0) {
            ctx->pc = 0x43565Cu;
            goto label_43565c;
        }
    }
    ctx->pc = 0x4354E8u;
label_4354e8:
    // 0x4354e8: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x4354e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x4354ec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4354ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4354f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4354f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4354f4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x4354F4u;
    {
        const bool branch_taken_0x4354f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4354F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4354F4u;
        // 0x4354f8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4354f4) {
            ctx->pc = 0x435580u;
            goto label_435580;
        }
    }
    ctx->pc = 0x4354FCu;
label_4354fc:
    // 0x4354fc: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x4354fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x435500: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x435500u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x435504: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x435504u;
    {
        const bool branch_taken_0x435504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x435504) {
            ctx->pc = 0x43555Cu;
            goto label_43555c;
        }
    }
    ctx->pc = 0x43550Cu;
    // 0x43550c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x43550cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x435510: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x435510u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x435514: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x435514u;
    SET_GPR_U32(ctx, 31, 0x43551Cu);
    ctx->pc = 0x435518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435514u;
    // 0x435518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x435514u, 0x43551Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43551Cu;
label_43551c:
    // 0x43551c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x43551Cu;
    {
        const bool branch_taken_0x43551c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x43551c) {
            ctx->pc = 0x43555Cu;
            goto label_43555c;
        }
    }
    ctx->pc = 0x435524u;
    // 0x435524: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x435524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x435528: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x435528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x43552c: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x43552Cu;
    SET_GPR_U32(ctx, 31, 0x435534u);
    ctx->pc = 0x435530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43552Cu;
    // 0x435530: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x43552Cu, 0x435534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435534u;
label_435534:
    // 0x435534: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x435534u;
    SET_GPR_U32(ctx, 31, 0x43553Cu);
    ctx->pc = 0x435538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435534u;
    // 0x435538: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x435534u, 0x43553Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43553Cu;
label_43553c:
    // 0x43553c: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x43553Cu;
    SET_GPR_U32(ctx, 31, 0x435544u);
    ctx->pc = 0x435540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43553Cu;
    // 0x435540: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x43553Cu, 0x435544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435544u;
label_435544:
    // 0x435544: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x435544u;
    {
        const bool branch_taken_0x435544 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x435548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435544u;
        // 0x435548: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435544) {
            ctx->pc = 0x43555Cu;
            goto label_43555c;
        }
    }
    ctx->pc = 0x43554Cu;
    // 0x43554c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x43554cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435550: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x435550u;
    SET_GPR_U32(ctx, 31, 0x435558u);
    ctx->pc = 0x435554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435550u;
    // 0x435554: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x435550u, 0x435558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435558u;
label_435558:
    // 0x435558: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x435558u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_43555c:
    // 0x43555c: 0xc10edcc  jal         func_43B730
    ctx->pc = 0x43555Cu;
    SET_GPR_U32(ctx, 31, 0x435564u);
    ctx->pc = 0x435560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43555Cu;
    // 0x435560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B730u, 0x43555Cu, 0x435564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435564u;
label_435564:
    // 0x435564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x435564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435568: 0xc10af56  jal         func_42BD58
    ctx->pc = 0x435568u;
    SET_GPR_U32(ctx, 31, 0x435570u);
    ctx->pc = 0x43556Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435568u;
    // 0x43556c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BD58u, 0x435568u, 0x435570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435570u;
label_435570:
    // 0x435570: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x435570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435574: 0xc10af26  jal         func_42BC98
    ctx->pc = 0x435574u;
    SET_GPR_U32(ctx, 31, 0x43557Cu);
    ctx->pc = 0x435578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435574u;
    // 0x435578: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BC98u, 0x435574u, 0x43557Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43557Cu;
label_43557c:
    // 0x43557c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x43557cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_435580:
    // 0x435580: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x435580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x435584: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x435584u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x435588: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x435588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x43558c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x43558cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x435590: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x435590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x435594: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x435594u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x435598: 0x14520031  bne         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x435598u;
    {
        const bool branch_taken_0x435598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x43559Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435598u;
        // 0x43559c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435598) {
            ctx->pc = 0x435660u;
            goto label_435660;
        }
    }
    ctx->pc = 0x4355A0u;
    // 0x4355a0: 0xc10f16c  jal         func_43C5B0
    ctx->pc = 0x4355A0u;
    SET_GPR_U32(ctx, 31, 0x4355A8u);
    ctx->pc = 0x4355A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4355A0u;
    // 0x4355a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43C5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43C5B0u, 0x4355A0u, 0x4355A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4355A8u;
label_4355a8:
    // 0x4355a8: 0xc10ac4e  jal         func_42B138
    ctx->pc = 0x4355A8u;
    SET_GPR_U32(ctx, 31, 0x4355B0u);
    ctx->pc = 0x4355ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4355A8u;
    // 0x4355ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B138u, 0x4355A8u, 0x4355B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4355B0u;
label_4355b0:
    // 0x4355b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4355b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4355b4: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4355B4u;
    SET_GPR_U32(ctx, 31, 0x4355BCu);
    ctx->pc = 0x4355B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4355B4u;
    // 0x4355b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4355B4u, 0x4355BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4355BCu;
label_4355bc:
    // 0x4355bc: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x4355BCu;
    {
        const bool branch_taken_0x4355bc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4355C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355BCu;
        // 0x4355c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4355bc) {
            ctx->pc = 0x4355D8u;
            goto label_4355d8;
        }
    }
    ctx->pc = 0x4355C4u;
    // 0x4355c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4355c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4355c8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x4355c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x4355cc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x4355ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x4355d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x4355D0u;
    {
        const bool branch_taken_0x4355d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4355d0) {
            ctx->pc = 0x435630u;
            goto label_435630;
        }
    }
    ctx->pc = 0x4355D8u;
label_4355d8:
    // 0x4355d8: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x4355d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x4355dc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x4355dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x4355e0: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x4355e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x4355e4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x4355e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x4355e8: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x4355e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x4355ec: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x4355ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x4355f0: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x4355f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x4355f4: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x4355F4u;
    SET_GPR_U32(ctx, 31, 0x4355FCu);
    ctx->pc = 0x4355F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4355F4u;
    // 0x4355f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x4355F4u, 0x4355FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4355FCu;
label_4355fc:
    // 0x4355fc: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x4355FCu;
    {
        const bool branch_taken_0x4355fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x435600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4355FCu;
        // 0x435600: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4355fc) {
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x435604u;
    // 0x435604: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x435604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x435608: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x435608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x43560c: 0x34a5d6bf  ori         $a1, $a1, 0xD6BF
    ctx->pc = 0x43560cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54975);
    // 0x435610: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x435610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x435614: 0x34a52535  ori         $a1, $a1, 0x2535
    ctx->pc = 0x435614u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9525);
    // 0x435618: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x435618u;
    SET_GPR_U32(ctx, 31, 0x435620u);
    ctx->pc = 0x43561Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435618u;
    // 0x43561c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x435618u, 0x435620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435620u;
label_435620:
    // 0x435620: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x435620u;
    {
        const bool branch_taken_0x435620 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x435624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435620u;
        // 0x435624: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435620) {
            ctx->pc = 0x435860u;
            goto label_435860;
        }
    }
    ctx->pc = 0x435628u;
    // 0x435628: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x435628u;
    {
        const bool branch_taken_0x435628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x435628) {
            ctx->pc = 0x435660u;
            goto label_435660;
        }
    }
    ctx->pc = 0x435630u;
label_435630:
    // 0x435630: 0x3405ff3f  ori         $a1, $zero, 0xFF3F
    ctx->pc = 0x435630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65343);
    // 0x435634: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x435634u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x435638: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x435638u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x43563c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x43563cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x435640: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x435640u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x435644: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x435644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x435648: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x435648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x43564c: 0xc10b0a0  jal         func_42C280
    ctx->pc = 0x43564Cu;
    SET_GPR_U32(ctx, 31, 0x435654u);
    ctx->pc = 0x435650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43564Cu;
    // 0x435650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C280u, 0x43564Cu, 0x435654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435654u;
label_435654:
    // 0x435654: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x435654u;
    {
        const bool branch_taken_0x435654 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x435654) {
            ctx->pc = 0x435658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435654u;
            // 0x435658: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x43565Cu;
label_43565c:
    // 0x43565c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x43565cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_435660:
    // 0x435660: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435660u;
    SET_GPR_U32(ctx, 31, 0x435668u);
    ctx->pc = 0x435664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435660u;
    // 0x435664: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435660u, 0x435668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435668u;
label_435668:
    // 0x435668: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x435668u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x43566c: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x43566Cu;
    SET_GPR_U32(ctx, 31, 0x435674u);
    ctx->pc = 0x435670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43566Cu;
    // 0x435670: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x43566Cu, 0x435674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435674u;
label_435674:
    // 0x435674: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x435674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x435678: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435678u;
    SET_GPR_U32(ctx, 31, 0x435680u);
    ctx->pc = 0x43567Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435678u;
    // 0x43567c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435678u, 0x435680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435680u;
label_435680:
    // 0x435680: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x435680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x435684: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435684u;
    SET_GPR_U32(ctx, 31, 0x43568Cu);
    ctx->pc = 0x435688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435684u;
    // 0x435688: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435684u, 0x43568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43568Cu;
label_43568c:
    // 0x43568c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x43568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x435690: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x435690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x435694: 0xc10eb0e  jal         func_43AC38
    ctx->pc = 0x435694u;
    SET_GPR_U32(ctx, 31, 0x43569Cu);
    ctx->pc = 0x435698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435694u;
    // 0x435698: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43AC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43AC38u, 0x435694u, 0x43569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43569Cu;
label_43569c:
    // 0x43569c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x43569cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4356a0: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x4356a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x4356a4: 0x24e5000c  addiu       $a1, $a3, 0xC
    ctx->pc = 0x4356a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x4356a8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4356a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x4356ac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x4356acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x4356b0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x4356b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x4356b4: 0xc10c190  jal         func_430640
    ctx->pc = 0x4356B4u;
    SET_GPR_U32(ctx, 31, 0x4356BCu);
    ctx->pc = 0x4356B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4356B4u;
    // 0x4356b8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430640u, 0x4356B4u, 0x4356BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356BCu;
label_4356bc:
    // 0x4356bc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x4356bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x4356c0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4356c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4356c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356c8: 0xc10ee64  jal         func_43B990
    ctx->pc = 0x4356C8u;
    SET_GPR_U32(ctx, 31, 0x4356D0u);
    ctx->pc = 0x4356CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4356C8u;
    // 0x4356cc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B990u, 0x4356C8u, 0x4356D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356D0u;
label_4356d0:
    // 0x4356d0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4356d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x4356d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4356d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356d8: 0xc10ec28  jal         func_43B0A0
    ctx->pc = 0x4356D8u;
    SET_GPR_U32(ctx, 31, 0x4356E0u);
    ctx->pc = 0x4356DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4356D8u;
    // 0x4356dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B0A0u, 0x4356D8u, 0x4356E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4356E0u;
label_4356e0:
    // 0x4356e0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x4356e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x4356e4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x4356e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4356e8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4356E8u;
    {
        const bool branch_taken_0x4356e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4356ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4356E8u;
        // 0x4356ec: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4356e8) {
            ctx->pc = 0x435700u;
            goto label_435700;
        }
    }
    ctx->pc = 0x4356F0u;
    // 0x4356f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4356f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356f4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4356f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4356f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4356F8u;
    {
        const bool branch_taken_0x4356f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4356FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4356F8u;
        // 0x4356fc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4356f8) {
            ctx->pc = 0x435714u;
            goto label_435714;
        }
    }
    ctx->pc = 0x435700u;
label_435700:
    // 0x435700: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x435700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x435704: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x435704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435708: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x435708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43570c: 0x39023  negu        $s2, $v1
    ctx->pc = 0x43570cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x435710: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x435710u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_435714:
    // 0x435714: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x435714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435718: 0x4820002  bltzl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x435718u;
    {
        const bool branch_taken_0x435718 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x435718) {
            ctx->pc = 0x43571Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x435718u;
            // 0x43571c: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x435724u;
            goto label_435724;
        }
    }
    ctx->pc = 0x435720u;
    // 0x435720: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x435720u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_435724:
    // 0x435724: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x435724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x435728: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x435728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x43572c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x43572cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x435730: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x435730u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x435734: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x435734u;
    {
        const bool branch_taken_0x435734 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x435738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435734u;
        // 0x435738: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435734) {
            ctx->pc = 0x435744u;
            goto label_435744;
        }
    }
    ctx->pc = 0x43573Cu;
    // 0x43573c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x43573Cu;
    {
        const bool branch_taken_0x43573c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43573Cu;
        // 0x435740: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43573c) {
            ctx->pc = 0x43574Cu;
            goto label_43574c;
        }
    }
    ctx->pc = 0x435744u;
label_435744:
    // 0x435744: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x435744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x435748: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x435748u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_43574c:
    // 0x43574c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x43574cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x435750: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x435750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x435754: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x435754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435758: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x435758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x43575c: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x43575cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x435760: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x435760u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x435764: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x435764u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x435768: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x435768u;
    {
        const bool branch_taken_0x435768 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x435768) {
            ctx->pc = 0x43577Cu;
            goto label_43577c;
        }
    }
    ctx->pc = 0x435770u;
    // 0x435770: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x435770u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x435774: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x435774u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x435778: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x435778u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_43577c:
    // 0x43577c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x43577Cu;
    {
        const bool branch_taken_0x43577c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x435780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43577Cu;
        // 0x435780: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43577c) {
            ctx->pc = 0x4357B0u;
            goto label_4357b0;
        }
    }
    ctx->pc = 0x435784u;
    // 0x435784: 0xc10ecb8  jal         func_43B2E0
    ctx->pc = 0x435784u;
    SET_GPR_U32(ctx, 31, 0x43578Cu);
    ctx->pc = 0x435788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435784u;
    // 0x435788: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B2E0u, 0x435784u, 0x43578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43578Cu;
label_43578c:
    // 0x43578c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x43578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x435790: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x435790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435794: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x435794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x435798: 0xc10ec36  jal         func_43B0D8
    ctx->pc = 0x435798u;
    SET_GPR_U32(ctx, 31, 0x4357A0u);
    ctx->pc = 0x43579Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435798u;
    // 0x43579c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B0D8u, 0x435798u, 0x4357A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357A0u;
label_4357a0:
    // 0x4357a0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4357a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4357a4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4357a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4357a8: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x4357A8u;
    SET_GPR_U32(ctx, 31, 0x4357B0u);
    ctx->pc = 0x4357ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4357A8u;
    // 0x4357ac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x4357A8u, 0x4357B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357B0u;
label_4357b0:
    // 0x4357b0: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x4357B0u;
    {
        const bool branch_taken_0x4357b0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x4357B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357B0u;
        // 0x4357b4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357b0) {
            ctx->pc = 0x4357C8u;
            goto label_4357c8;
        }
    }
    ctx->pc = 0x4357B8u;
    // 0x4357b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4357b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4357bc: 0xc10ecf8  jal         func_43B3E0
    ctx->pc = 0x4357BCu;
    SET_GPR_U32(ctx, 31, 0x4357C4u);
    ctx->pc = 0x4357C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4357BCu;
    // 0x4357c0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B3E0u, 0x4357BCu, 0x4357C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357C4u;
label_4357c4:
    // 0x4357c4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x4357c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_4357c8:
    // 0x4357c8: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x4357C8u;
    {
        const bool branch_taken_0x4357c8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x4357CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357C8u;
        // 0x4357cc: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357c8) {
            ctx->pc = 0x4357E0u;
            goto label_4357e0;
        }
    }
    ctx->pc = 0x4357D0u;
    // 0x4357d0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x4357d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4357d4: 0xc10ecb8  jal         func_43B2E0
    ctx->pc = 0x4357D4u;
    SET_GPR_U32(ctx, 31, 0x4357DCu);
    ctx->pc = 0x4357D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4357D4u;
    // 0x4357d8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B2E0u, 0x4357D4u, 0x4357DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357DCu;
label_4357dc:
    // 0x4357dc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4357dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_4357e0:
    // 0x4357e0: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4357E0u;
    {
        const bool branch_taken_0x4357e0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x4357E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357E0u;
        // 0x4357e4: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357e0) {
            ctx->pc = 0x4357F8u;
            goto label_4357f8;
        }
    }
    ctx->pc = 0x4357E8u;
    // 0x4357e8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4357e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4357ec: 0xc10ecf8  jal         func_43B3E0
    ctx->pc = 0x4357ECu;
    SET_GPR_U32(ctx, 31, 0x4357F4u);
    ctx->pc = 0x4357F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4357ECu;
    // 0x4357f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B3E0u, 0x4357ECu, 0x4357F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4357F4u;
label_4357f4:
    // 0x4357f4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x4357f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_4357f8:
    // 0x4357f8: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x4357F8u;
    {
        const bool branch_taken_0x4357f8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x4357FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4357F8u;
        // 0x4357fc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4357f8) {
            ctx->pc = 0x435810u;
            goto label_435810;
        }
    }
    ctx->pc = 0x435800u;
    // 0x435800: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x435800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435804: 0xc10ecf8  jal         func_43B3E0
    ctx->pc = 0x435804u;
    SET_GPR_U32(ctx, 31, 0x43580Cu);
    ctx->pc = 0x435808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435804u;
    // 0x435808: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B3E0u, 0x435804u, 0x43580Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43580Cu;
label_43580c:
    // 0x43580c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x43580cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_435810:
    // 0x435810: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x435810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x435814: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x435814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435818: 0xc10ed68  jal         func_43B5A0
    ctx->pc = 0x435818u;
    SET_GPR_U32(ctx, 31, 0x435820u);
    ctx->pc = 0x43581Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435818u;
    // 0x43581c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B5A0u, 0x435818u, 0x435820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435820u;
label_435820:
    // 0x435820: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x435820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x435824: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x435824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x435828: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x435828u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x43582c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43582cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435830: 0xc10ed4e  jal         func_43B538
    ctx->pc = 0x435830u;
    SET_GPR_U32(ctx, 31, 0x435838u);
    ctx->pc = 0x435834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435830u;
    // 0x435834: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43B538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B538u, 0x435830u, 0x435838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435838u;
label_435838:
    // 0x435838: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x435838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43583c: 0x4e1fe83  bgez        $a3, . + 4 + (-0x17D << 2)
    ctx->pc = 0x43583Cu;
    {
        const bool branch_taken_0x43583c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x43583c) {
            ctx->pc = 0x43524Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_43524c;
        }
    }
    ctx->pc = 0x435844u;
    // 0x435844: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x435844u;
    {
        const bool branch_taken_0x435844 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x435848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435844u;
        // 0x435848: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435844) {
            ctx->pc = 0x435864u;
            goto label_435864;
        }
    }
    ctx->pc = 0x43584Cu;
    // 0x43584c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x43584cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435850: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x435850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x435854: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x435854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x435858: 0x1040fe71  beqz        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x435858u;
    {
        const bool branch_taken_0x435858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43585Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435858u;
        // 0x43585c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435858) {
            ctx->pc = 0x435220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435220;
        }
    }
    ctx->pc = 0x435860u;
label_435860:
    // 0x435860: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x435860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_435864:
    // 0x435864: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435864u;
    SET_GPR_U32(ctx, 31, 0x43586Cu);
    ctx->pc = 0x435868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435864u;
    // 0x435868: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435864u, 0x43586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43586Cu;
label_43586c:
    // 0x43586c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x43586cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x435870: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435870u;
    SET_GPR_U32(ctx, 31, 0x435878u);
    ctx->pc = 0x435874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435870u;
    // 0x435874: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435870u, 0x435878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435878u;
label_435878:
    // 0x435878: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x435878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x43587c: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x43587Cu;
    SET_GPR_U32(ctx, 31, 0x435884u);
    ctx->pc = 0x435880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43587Cu;
    // 0x435880: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x43587Cu, 0x435884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435884u;
label_435884:
    // 0x435884: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x435884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x435888: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435888u;
    SET_GPR_U32(ctx, 31, 0x435890u);
    ctx->pc = 0x43588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435888u;
    // 0x43588c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435888u, 0x435890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435890u;
label_435890:
    // 0x435890: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x435890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x435894: 0xc10eb38  jal         func_43ACE0
    ctx->pc = 0x435894u;
    SET_GPR_U32(ctx, 31, 0x43589Cu);
    ctx->pc = 0x435898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435894u;
    // 0x435898: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43ACE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43ACE0u, 0x435894u, 0x43589Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43589Cu;
label_43589c:
    // 0x43589c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x43589cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_4358a0:
    // 0x4358a0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4358A0u;
    {
        const bool branch_taken_0x4358a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4358a0) {
            ctx->pc = 0x4358A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4358A0u;
            // 0x4358a4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4358A8u;
            goto label_4358a8;
        }
    }
    ctx->pc = 0x4358A8u;
label_4358a8:
    // 0x4358a8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x4358a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4358ac: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x4358ACu;
    {
        const bool branch_taken_0x4358ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4358B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4358ACu;
        // 0x4358b0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4358ac) {
            ctx->pc = 0x4358C0u;
            goto label_4358c0;
        }
    }
    ctx->pc = 0x4358B4u;
    // 0x4358b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4358b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4358b8: 0xc10af3c  jal         func_42BCF0
    ctx->pc = 0x4358B8u;
    SET_GPR_U32(ctx, 31, 0x4358C0u);
    ctx->pc = 0x4358BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4358B8u;
    // 0x4358bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42BCF0u, 0x4358B8u, 0x4358C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4358C0u;
label_4358c0:
    // 0x4358c0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x4358c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x4358c4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x4358c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4358c8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x4358c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4358cc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x4358ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4358d0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x4358d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4358d4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x4358d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4358d8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x4358d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4358dc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4358dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4358e0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x4358e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4358e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4358e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4358e8: 0x3e00008  jr          $ra
    ctx->pc = 0x4358E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4358ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4358E8u;
        // 0x4358ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4358E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4358F0u;
}
