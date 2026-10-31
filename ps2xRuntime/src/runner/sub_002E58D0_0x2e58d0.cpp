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

// Function: sub_002E58D0
// Address: 0x2e58d0 - 0x2e5a00
void sub_002E58D0_0x2e58d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E58D0_0x2e58d0");
#endif

    switch (ctx->pc) {
        case 0x2e5908u: goto label_2e5908;
        case 0x2e5944u: goto label_2e5944;
        case 0x2e5954u: goto label_2e5954;
        case 0x2e5960u: goto label_2e5960;
        case 0x2e5974u: goto label_2e5974;
        case 0x2e5994u: goto label_2e5994;
        default: break;
    }

    ctx->pc = 0x2e58d0u;

    // 0x2e58d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e58d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e58d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e58d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e58d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e58d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e58dc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e58dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e58e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e58e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e58e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e58e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e58e8: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x2e58e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2e58ec: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x2E58ECu;
    {
        const bool branch_taken_0x2e58ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E58F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E58ECu;
        // 0x2e58f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e58ec) {
            ctx->pc = 0x2E59E4u;
            goto label_2e59e4;
        }
    }
    ctx->pc = 0x2E58F4u;
    // 0x2e58f4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2e58f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2e58f8: 0x5222003b  beql        $s1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2E58F8u;
    {
        const bool branch_taken_0x2e58f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e58f8) {
            ctx->pc = 0x2E58FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E58F8u;
            // 0x2e58fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E5900u;
    // 0x2e5900: 0xc1059c6  jal         func_416718
    ctx->pc = 0x2E5900u;
    SET_GPR_U32(ctx, 31, 0x2E5908u);
    ctx->pc = 0x2E5904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5900u;
    // 0x2e5904: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x416718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x416718u, 0x2E5900u, 0x2E5908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5908u;
label_2e5908:
    // 0x2e5908: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2e5908u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e590c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E590Cu;
    {
        const bool branch_taken_0x2e590c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E5910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E590Cu;
        // 0x2e5910: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e590c) {
            ctx->pc = 0x2E591Cu;
            goto label_2e591c;
        }
    }
    ctx->pc = 0x2E5914u;
    // 0x2e5914: 0x52400034  beql        $s2, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x2E5914u;
    {
        const bool branch_taken_0x2e5914 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5914) {
            ctx->pc = 0x2E5918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5914u;
            // 0x2e5918: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E591Cu;
label_2e591c:
    // 0x2e591c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2e591cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2e5920: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x2e5920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    // 0x2e5924: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x2e5924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6EBD30u));
    // 0x2e5928: 0x5483002f  bnel        $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x2E5928u;
    {
        const bool branch_taken_0x2e5928 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5928) {
            ctx->pc = 0x2E592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5928u;
            // 0x2e592c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E5930u;
    // 0x2e5930: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E5930u;
    {
        const bool branch_taken_0x2e5930 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e5930) {
            ctx->pc = 0x2E594Cu;
            goto label_2e594c;
        }
    }
    ctx->pc = 0x2E5938u;
    // 0x2e5938: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2e5938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e593c: 0xc1058b4  jal         func_4162D0
    ctx->pc = 0x2E593Cu;
    SET_GPR_U32(ctx, 31, 0x2E5944u);
    ctx->pc = 0x2E5940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E593Cu;
    // 0x2e5940: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4162D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4162D0u, 0x2E593Cu, 0x2E5944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5944u;
label_2e5944:
    // 0x2e5944: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2E5944u;
    {
        const bool branch_taken_0x2e5944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5944) {
            ctx->pc = 0x2E5948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5944u;
            // 0x2e5948: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E594Cu;
label_2e594c:
    // 0x2e594c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2E594Cu;
    SET_GPR_U32(ctx, 31, 0x2E5954u);
    ctx->pc = 0x2E5950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E594Cu;
    // 0x2e5950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E594Cu, 0x2E5954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5954u;
label_2e5954:
    // 0x2e5954: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x2e5954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2e5958: 0xc104a86  jal         func_412A18
    ctx->pc = 0x2E5958u;
    SET_GPR_U32(ctx, 31, 0x2E5960u);
    ctx->pc = 0x2E595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E5958u;
    // 0x2e595c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x2E5958u, 0x2E5960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5960u;
label_2e5960:
    // 0x2e5960: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e5960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e5964: 0x54430020  bnel        $v0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2E5964u;
    {
        const bool branch_taken_0x2e5964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e5964) {
            ctx->pc = 0x2E5968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E5964u;
            // 0x2e5968: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E596Cu;
    // 0x2e596c: 0xc10587a  jal         func_4161E8
    ctx->pc = 0x2E596Cu;
    SET_GPR_U32(ctx, 31, 0x2E5974u);
    ctx->pc = 0x2E5970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E596Cu;
    // 0x2e5970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2E596Cu, 0x2E5974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5974u;
label_2e5974:
    // 0x2e5974: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2e5974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2e5978: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x2e5978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x2e597c: 0x24634b00  addiu       $v1, $v1, 0x4B00
    ctx->pc = 0x2e597cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19200));
    // 0x2e5980: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2e5980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e5984: 0x84c50092  lh          $a1, 0x92($a2)
    ctx->pc = 0x2e5984u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 146)));
    // 0x2e5988: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2e5988u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2e598c: 0xc0cdb26  jal         func_336C98
    ctx->pc = 0x2E598Cu;
    SET_GPR_U32(ctx, 31, 0x2E5994u);
    ctx->pc = 0x2E5990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E598Cu;
    // 0x2e5990: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336C98u, 0x2E598Cu, 0x2E5994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E5994u;
label_2e5994:
    // 0x2e5994: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E5994u;
    {
        const bool branch_taken_0x2e5994 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E5994u;
        // 0x2e5998: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e5994) {
            ctx->pc = 0x2E59BCu;
            goto label_2e59bc;
        }
    }
    ctx->pc = 0x2E599Cu;
    // 0x2e599c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2e599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e59a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e59a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e59a4: 0x0  nop
    ctx->pc = 0x2e59a4u;
    // NOP
    // 0x2e59a8: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2E59A8u;
    {
        const bool branch_taken_0x2e59a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e59a8) {
            ctx->pc = 0x2E59ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E59A8u;
            // 0x2e59ac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E59B0u;
    // 0x2e59b0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2e59b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e59b4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2E59B4u;
    {
        const bool branch_taken_0x2e59b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59B4u;
        // 0x2e59b8: 0xae110018  sw          $s1, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e59b4) {
            ctx->pc = 0x2E59E4u;
            goto label_2e59e4;
        }
    }
    ctx->pc = 0x2E59BCu;
label_2e59bc:
    // 0x2e59bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2e59bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2e59c0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E59C0u;
    {
        const bool branch_taken_0x2e59c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e59c0) {
            ctx->pc = 0x2E59C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E59C0u;
            // 0x2e59c4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E59C8u;
    // 0x2e59c8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2e59c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e59cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e59ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e59d0: 0x0  nop
    ctx->pc = 0x2e59d0u;
    // NOP
    // 0x2e59d4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E59D4u;
    {
        const bool branch_taken_0x2e59d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e59d4) {
            ctx->pc = 0x2E59D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E59D4u;
            // 0x2e59d8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E59E8u;
            goto label_2e59e8;
        }
    }
    ctx->pc = 0x2E59DCu;
    // 0x2e59dc: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2e59dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e59e0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x2e59e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_2e59e4:
    // 0x2e59e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e59e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2e59e8:
    // 0x2e59e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e59e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e59ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e59ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e59f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e59f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e59f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E59F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E59F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E59F4u;
        // 0x2e59f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E59F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E59FCu;
    // 0x2e59fc: 0x0  nop
    ctx->pc = 0x2e59fcu;
    // NOP
    ctx->pc = 0x2e5a00u;
}
