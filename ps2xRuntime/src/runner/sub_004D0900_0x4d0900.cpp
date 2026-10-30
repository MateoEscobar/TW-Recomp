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

// Function: sub_004D0900
// Address: 0x4d0900 - 0x4d0df0
void sub_004D0900_0x4d0900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D0900_0x4d0900");
#endif

    switch (ctx->pc) {
        case 0x4d09a8u: goto label_4d09a8;
        case 0x4d0b20u: goto label_4d0b20;
        case 0x4d0bb0u: goto label_4d0bb0;
        case 0x4d0bccu: goto label_4d0bcc;
        case 0x4d0be8u: goto label_4d0be8;
        case 0x4d0c60u: goto label_4d0c60;
        case 0x4d0d30u: goto label_4d0d30;
        default: break;
    }

    ctx->pc = 0x4d0900u;

    // 0x4d0900: 0x27bdbf10  addiu       $sp, $sp, -0x40F0
    ctx->pc = 0x4d0900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294950672));
    // 0x4d0904: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x4d0904u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0908: 0xafa64084  sw          $a2, 0x4084($sp)
    ctx->pc = 0x4d0908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16516), GPR_U32(ctx, 6));
    // 0x4d090c: 0xffb240a0  sd          $s2, 0x40A0($sp)
    ctx->pc = 0x4d090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16544), GPR_U64(ctx, 18));
    // 0x4d0910: 0xffb740c8  sd          $s7, 0x40C8($sp)
    ctx->pc = 0x4d0910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16584), GPR_U64(ctx, 23));
    // 0x4d0914: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4d0914u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0918: 0xffbe40d0  sd          $fp, 0x40D0($sp)
    ctx->pc = 0x4d0918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16592), GPR_U64(ctx, 30));
    // 0x4d091c: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x4d091cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0920: 0xe7b440e0  swc1        $f20, 0x40E0($sp)
    ctx->pc = 0x4d0920u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16608), bits); }
    // 0x4d0924: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x4d0924u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0928: 0xffb04090  sd          $s0, 0x4090($sp)
    ctx->pc = 0x4d0928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16528), GPR_U64(ctx, 16));
    // 0x4d092c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4d092cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x4d0930: 0xffb14098  sd          $s1, 0x4098($sp)
    ctx->pc = 0x4d0930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16536), GPR_U64(ctx, 17));
    // 0x4d0934: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4d0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4d0938: 0xffb340a8  sd          $s3, 0x40A8($sp)
    ctx->pc = 0x4d0938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16552), GPR_U64(ctx, 19));
    // 0x4d093c: 0xffb440b0  sd          $s4, 0x40B0($sp)
    ctx->pc = 0x4d093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16560), GPR_U64(ctx, 20));
    // 0x4d0940: 0xffb540b8  sd          $s5, 0x40B8($sp)
    ctx->pc = 0x4d0940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16568), GPR_U64(ctx, 21));
    // 0x4d0944: 0xffb640c0  sd          $s6, 0x40C0($sp)
    ctx->pc = 0x4d0944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16576), GPR_U64(ctx, 22));
    // 0x4d0948: 0xffbf40d8  sd          $ra, 0x40D8($sp)
    ctx->pc = 0x4d0948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16600), GPR_U64(ctx, 31));
    // 0x4d094c: 0xafa54080  sw          $a1, 0x4080($sp)
    ctx->pc = 0x4d094cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16512), GPR_U32(ctx, 5));
    // 0x4d0950: 0xafa74088  sw          $a3, 0x4088($sp)
    ctx->pc = 0x4d0950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16520), GPR_U32(ctx, 7));
    // 0x4d0954: 0xafa9408c  sw          $t1, 0x408C($sp)
    ctx->pc = 0x4d0954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16524), GPR_U32(ctx, 9));
    // 0x4d0958: 0xafaa007c  sw          $t2, 0x7C($sp)
    ctx->pc = 0x4d0958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 10));
    // 0x4d095c: 0xafaa0074  sw          $t2, 0x74($sp)
    ctx->pc = 0x4d095cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 10));
    // 0x4d0960: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4d0960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x4d0964: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D0964u;
    {
        const bool branch_taken_0x4d0964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0964u;
        // 0x4d0968: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0964) {
            ctx->pc = 0x4D0988u;
            goto label_4d0988;
        }
    }
    ctx->pc = 0x4D096Cu;
    // 0x4d096c: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x4d096cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x4d0970: 0x25430004  addiu       $v1, $t2, 0x4
    ctx->pc = 0x4d0970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x4d0974: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x4d0974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x4d0978: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x4d0978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x4d097c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x4d097cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x4d0980: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x4d0980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
    // 0x4d0984: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x4d0984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_4d0988:
    // 0x4d0988: 0x8fa44080  lw          $a0, 0x4080($sp)
    ctx->pc = 0x4d0988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16512)));
    // 0x4d098c: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x4d098cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4d0990: 0x1080009b  beqz        $a0, . + 4 + (0x9B << 2)
    ctx->pc = 0x4D0990u;
    {
        const bool branch_taken_0x4d0990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0990u;
        // 0x4d0994: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0990) {
            ctx->pc = 0x4D0C00u;
            goto label_4d0c00;
        }
    }
    ctx->pc = 0x4D0998u;
    // 0x4d0998: 0x3c111fff  lui         $s1, 0x1FFF
    ctx->pc = 0x4d0998u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8191 << 16));
    // 0x4d099c: 0x3c16efff  lui         $s6, 0xEFFF
    ctx->pc = 0x4d099cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)61439 << 16));
    // 0x4d09a0: 0x3631ffff  ori         $s1, $s1, 0xFFFF
    ctx->pc = 0x4d09a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65535);
    // 0x4d09a4: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x4d09a4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
label_4d09a8:
    // 0x4d09a8: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x4d09a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d09ac: 0x2ce2001d  sltiu       $v0, $a3, 0x1D
    ctx->pc = 0x4d09acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x4d09b0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D09B0u;
    {
        const bool branch_taken_0x4d09b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D09B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D09B0u;
        // 0x4d09b4: 0x8fa30074  lw          $v1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d09b0) {
            ctx->pc = 0x4D09D4u;
            goto label_4d09d4;
        }
    }
    ctx->pc = 0x4D09B8u;
    // 0x4d09b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x4d09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d09bc: 0x24e3ffe3  addiu       $v1, $a3, -0x1D
    ctx->pc = 0x4d09bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967267));
    // 0x4d09c0: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x4d09c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x4d09c4: 0x22742  srl         $a0, $v0, 29
    ctx->pc = 0x4d09c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x4d09c8: 0x513024  and         $a2, $v0, $s1
    ctx->pc = 0x4d09c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d09cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x4D09CCu;
    {
        const bool branch_taken_0x4d09cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D09D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D09CCu;
        // 0x4d09d0: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d09cc) {
            ctx->pc = 0x4D0A08u;
            goto label_4d0a08;
        }
    }
    ctx->pc = 0x4D09D4u;
label_4d09d4:
    // 0x4d09d4: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x4d09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x4d09d8: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x4d09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4d09dc: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x4d09dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d09e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d09e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d09e4: 0x24e50003  addiu       $a1, $a3, 0x3
    ctx->pc = 0x4d09e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x4d09e8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4d09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d09ec: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x4d09ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x4d09f0: 0x822006  srlv        $a0, $v0, $a0
    ctx->pc = 0x4d09f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d09f4: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x4d09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x4d09f8: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x4d09f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x4d09fc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x4d09fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x4d0a00: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d0a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4d0a04: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4d0a04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
label_4d0a08:
    // 0x4d0a08: 0xd61824  and         $v1, $a2, $s6
    ctx->pc = 0x4d0a08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 22));
    // 0x4d0a0c: 0x30c2001f  andi        $v0, $a2, 0x1F
    ctx->pc = 0x4d0a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x4d0a10: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x4d0a10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x4d0a14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d0a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d0a18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4d0a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d0a1c: 0x0  nop
    ctx->pc = 0x4d0a1cu;
    // NOP
    // 0x4d0a20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4d0a20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4d0a24: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4d0a24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4d0a28: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4d0a28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4d0a2c: 0x24633e50  addiu       $v1, $v1, 0x3E50
    ctx->pc = 0x4d0a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15952));
    // 0x4d0a30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d0a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d0a34: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4d0a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0a38: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x4d0a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4d0a3c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D0A3Cu;
    {
        const bool branch_taken_0x4d0a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0A3Cu;
        // 0x4d0a40: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0a3c) {
            ctx->pc = 0x4D0A48u;
            goto label_4d0a48;
        }
    }
    ctx->pc = 0x4D0A44u;
    // 0x4d0a44: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4d0a44u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4d0a48:
    // 0x4d0a48: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x4d0a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d0a4c: 0x2ce2001d  sltiu       $v0, $a3, 0x1D
    ctx->pc = 0x4d0a4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x4d0a50: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D0A50u;
    {
        const bool branch_taken_0x4d0a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0A50u;
        // 0x4d0a54: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0a50) {
            ctx->pc = 0x4D0A74u;
            goto label_4d0a74;
        }
    }
    ctx->pc = 0x4D0A58u;
    // 0x4d0a58: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x4d0a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d0a5c: 0x24e3ffe3  addiu       $v1, $a3, -0x1D
    ctx->pc = 0x4d0a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967267));
    // 0x4d0a60: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x4d0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x4d0a64: 0x22742  srl         $a0, $v0, 29
    ctx->pc = 0x4d0a64u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
    // 0x4d0a68: 0x513024  and         $a2, $v0, $s1
    ctx->pc = 0x4d0a68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x4d0a6c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x4D0A6Cu;
    {
        const bool branch_taken_0x4d0a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0A6Cu;
        // 0x4d0a70: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0a6c) {
            ctx->pc = 0x4D0AACu;
            goto label_4d0aac;
        }
    }
    ctx->pc = 0x4D0A74u;
label_4d0a74:
    // 0x4d0a74: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x4d0a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4d0a78: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x4d0a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x4d0a7c: 0xa72023  subu        $a0, $a1, $a3
    ctx->pc = 0x4d0a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x4d0a80: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x4d0a80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d0a84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4d0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x4d0a88: 0x24e50003  addiu       $a1, $a3, 0x3
    ctx->pc = 0x4d0a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x4d0a8c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x4d0a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x4d0a90: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x4d0a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x4d0a94: 0x822006  srlv        $a0, $v0, $a0
    ctx->pc = 0x4d0a94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x4d0a98: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x4d0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x4d0a9c: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x4d0a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x4d0aa0: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x4d0aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x4d0aa4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4d0aa4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x4d0aa8: 0xd13024  and         $a2, $a2, $s1
    ctx->pc = 0x4d0aa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 17));
label_4d0aac:
    // 0x4d0aac: 0xd61824  and         $v1, $a2, $s6
    ctx->pc = 0x4d0aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 22));
    // 0x4d0ab0: 0x30c2001f  andi        $v0, $a2, 0x1F
    ctx->pc = 0x4d0ab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x4d0ab4: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x4d0ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x4d0ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d0abc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4d0abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4d0ac0: 0x0  nop
    ctx->pc = 0x4d0ac0u;
    // NOP
    // 0x4d0ac4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4d0ac4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4d0ac8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x4d0ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x4d0acc: 0x3c030053  lui         $v1, 0x53
    ctx->pc = 0x4d0accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)83 << 16));
    // 0x4d0ad0: 0x24633e50  addiu       $v1, $v1, 0x3E50
    ctx->pc = 0x4d0ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15952));
    // 0x4d0ad4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4d0ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d0ad8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4d0ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0adc: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x4d0adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x4d0ae0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x4D0AE0u;
    {
        const bool branch_taken_0x4d0ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0AE0u;
        // 0x4d0ae4: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0ae0) {
            ctx->pc = 0x4D0AECu;
            goto label_4d0aec;
        }
    }
    ctx->pc = 0x4D0AE8u;
    // 0x4d0ae8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x4d0ae8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_4d0aec:
    // 0x4d0aec: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x4d0aecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x4d0af0: 0x25150001  addiu       $s5, $t0, 0x1
    ctx->pc = 0x4d0af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4d0af4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4d0af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0af8: 0x27aa0070  addiu       $t2, $sp, 0x70
    ctx->pc = 0x4d0af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4d0afc: 0x8fa54084  lw          $a1, 0x4084($sp)
    ctx->pc = 0x4d0afcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16516)));
    // 0x4d0b00: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x4d0b00u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x4d0b04: 0x12e00024  beqz        $s7, . + 4 + (0x24 << 2)
    ctx->pc = 0x4D0B04u;
    {
        const bool branch_taken_0x4d0b04 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0B04u;
        // 0x4d0b08: 0x30b30001  andi        $s3, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0b04) {
            ctx->pc = 0x4D0B98u;
            goto label_4d0b98;
        }
    }
    ctx->pc = 0x4D0B0Cu;
    // 0x4d0b0c: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4d0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4d0b10: 0x8fa80074  lw          $t0, 0x74($sp)
    ctx->pc = 0x4d0b10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x4d0b14: 0x244c3a50  addiu       $t4, $v0, 0x3A50
    ctx->pc = 0x4d0b14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 14928));
    // 0x4d0b18: 0x240b0008  addiu       $t3, $zero, 0x8
    ctx->pc = 0x4d0b18u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4d0b1c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x4d0b1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4d0b20:
    // 0x4d0b20: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x4d0b20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x4d0b24: 0x2ce20008  sltiu       $v0, $a3, 0x8
    ctx->pc = 0x4d0b24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x4d0b28: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D0B28u;
    {
        const bool branch_taken_0x4d0b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4d0b28) {
            ctx->pc = 0x4D0B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4D0B28u;
            // 0x4d0b2c: 0x8d020000  lw          $v0, 0x0($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4D0B4Cu;
            goto label_4d0b4c;
        }
    }
    ctx->pc = 0x4D0B30u;
    // 0x4d0b30: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x4d0b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d0b34: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x4d0b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4d0b38: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x4d0b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x4d0b3c: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x4d0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x4d0b40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4d0b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4d0b44: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4D0B44u;
    {
        const bool branch_taken_0x4d0b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0B44u;
        // 0x4d0b48: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0b44) {
            ctx->pc = 0x4D0B74u;
            goto label_4d0b74;
        }
    }
    ctx->pc = 0x4D0B4Cu;
label_4d0b4c:
    // 0x4d0b4c: 0x1671823  subu        $v1, $t3, $a3
    ctx->pc = 0x4d0b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4d0b50: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x4d0b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4d0b54: 0x24e50018  addiu       $a1, $a3, 0x18
    ctx->pc = 0x4d0b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 24));
    // 0x4d0b58: 0x621806  srlv        $v1, $v0, $v1
    ctx->pc = 0x4d0b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x4d0b5c: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x4d0b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x4d0b60: 0xe21004  sllv        $v0, $v0, $a3
    ctx->pc = 0x4d0b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 7) & 0x1F));
    // 0x4d0b64: 0xafa30070  sw          $v1, 0x70($sp)
    ctx->pc = 0x4d0b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 3));
    // 0x4d0b68: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4d0b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4d0b6c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x4d0b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x4d0b70: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4d0b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4d0b74:
    // 0x4d0b74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4d0b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4d0b78: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x4d0b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x4d0b7c: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x4d0b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x4d0b80: 0xd7182b  sltu        $v1, $a2, $s7
    ctx->pc = 0x4d0b80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x4d0b84: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4d0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0b88: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x4d0b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x4d0b8c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4D0B8Cu;
    {
        const bool branch_taken_0x4d0b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0B8Cu;
        // 0x4d0b90: 0x25290004  addiu       $t1, $t1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0b8c) {
            ctx->pc = 0x4D0B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0b20;
        }
    }
    ctx->pc = 0x4D0B94u;
    // 0x4d0b94: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x4d0b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
label_4d0b98:
    // 0x4d0b98: 0x8fa840f0  lw          $t0, 0x40F0($sp)
    ctx->pc = 0x4d0b98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16624)));
    // 0x4d0b9c: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x4d0b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4d0ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ba4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4d0ba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0ba8: 0xc134168  jal         func_4D05A0
    ctx->pc = 0x4D0BA8u;
    SET_GPR_U32(ctx, 31, 0x4D0BB0u);
    ctx->pc = 0x4D0BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0BA8u;
    // 0x4d0bac: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D05A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D05A0u, 0x4D0BA8u, 0x4D0BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0BB0u;
label_4d0bb0:
    // 0x4d0bb0: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x4D0BB0u;
    {
        const bool branch_taken_0x4d0bb0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0BB0u;
        // 0x4d0bb4: 0x8fa74088  lw          $a3, 0x4088($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0bb0) {
            ctx->pc = 0x4D0BD4u;
            goto label_4d0bd4;
        }
    }
    ctx->pc = 0x4D0BB8u;
    // 0x4d0bb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0bbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4d0bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d0bc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d0bc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0bc4: 0xc134d12  jal         func_4D3448
    ctx->pc = 0x4D0BC4u;
    SET_GPR_U32(ctx, 31, 0x4D0BCCu);
    ctx->pc = 0x4D0BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0BC4u;
    // 0x4d0bc8: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D3448u, 0x4D0BC4u, 0x4D0BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0BCCu;
label_4d0bcc:
    // 0x4d0bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4D0BCCu;
    {
        const bool branch_taken_0x4d0bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0BCCu;
        // 0x4d0bd0: 0x8fa34080  lw          $v1, 0x4080($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0bcc) {
            ctx->pc = 0x4D0BECu;
            goto label_4d0bec;
        }
    }
    ctx->pc = 0x4D0BD4u;
label_4d0bd4:
    // 0x4d0bd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4d0bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0bd8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4d0bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x4d0bdc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4d0bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0be0: 0xc135bde  jal         func_4D6F78
    ctx->pc = 0x4D0BE0u;
    SET_GPR_U32(ctx, 31, 0x4D0BE8u);
    ctx->pc = 0x4D0BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4D0BE0u;
    // 0x4d0be4: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4D6F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D6F78u, 0x4D0BE0u, 0x4D0BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4D0BE8u;
label_4d0be8:
    // 0x4d0be8: 0x8fa34080  lw          $v1, 0x4080($sp)
    ctx->pc = 0x4d0be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16512)));
label_4d0bec:
    // 0x4d0bec: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x4d0becu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0bf0: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4d0bf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4d0bf4: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x4D0BF4u;
    {
        const bool branch_taken_0x4d0bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0BF4u;
        // 0x4d0bf8: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0bf4) {
            ctx->pc = 0x4D09A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d09a8;
        }
    }
    ctx->pc = 0x4D0BFCu;
    // 0x4d0bfc: 0x8fa44080  lw          $a0, 0x4080($sp)
    ctx->pc = 0x4d0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16512)));
label_4d0c00:
    // 0x4d0c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4d0c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4d0c04: 0x14820034  bne         $a0, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4D0C04u;
    {
        const bool branch_taken_0x4d0c04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x4D0C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0C04u;
        // 0x4d0c08: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0c04) {
            ctx->pc = 0x4D0CD8u;
            goto label_4d0cd8;
        }
    }
    ctx->pc = 0x4D0C0Cu;
    // 0x4d0c0c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x4d0c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4d0c10: 0x8fa9408c  lw          $t1, 0x408C($sp)
    ctx->pc = 0x4d0c10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16524)));
    // 0x4d0c14: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x4d0c14u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x4d0c18: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4d0c18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4d0c1c: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4d0c1cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4d0c20: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4d0c20u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x4d0c24: 0x71405389  pcpyld      $t2, $t2, $zero
    ctx->pc = 0x4d0c24u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x4d0c28: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x4d0c28u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
    // 0x4d0c2c: 0x354affff  ori         $t2, $t2, 0xFFFF
    ctx->pc = 0x4d0c2cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65535);
    // 0x4d0c30: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x4d0c30u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x4d0c34: 0x354a8000  ori         $t2, $t2, 0x8000
    ctx->pc = 0x4d0c34u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x4d0c38: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x4d0c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x4d0c3c: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x4d0c3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x4d0c40: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x4d0c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x4d0c44: 0x71004389  pcpyld      $t0, $t0, $zero
    ctx->pc = 0x4d0c44u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x4d0c48: 0x3408fffe  ori         $t0, $zero, 0xFFFE
    ctx->pc = 0x4d0c48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x4d0c4c: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x4d0c4cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x4d0c50: 0x35087fff  ori         $t0, $t0, 0x7FFF
    ctx->pc = 0x4d0c50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32767);
    // 0x4d0c54: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
    ctx->pc = 0x4D0C54u;
    {
        const bool branch_taken_0x4d0c54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0C54u;
        // 0x4d0c58: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0c54) {
            ctx->pc = 0x4D0DA4u;
            goto label_4d0da4;
        }
    }
    ctx->pc = 0x4D0C5Cu;
    // 0x4d0c5c: 0x0  nop
    ctx->pc = 0x4d0c5cu;
    // NOP
label_4d0c60:
    // 0x4d0c60: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x4d0c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d0c64: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x4d0c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x4d0c68: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x4d0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0c6c: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x4d0c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d0c70: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x4d0c70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x4d0c74: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4d0c74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4d0c78: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x4d0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d0c7c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4d0c7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x4d0c80: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x4d0c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x4d0c84: 0x46001924  .word       0x46001924                   # cvt.w.s     $f4, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x4d0c88: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x4d0c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d0c8c: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4d0c8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x4d0c90: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0c90u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4d0c94: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x4d0c94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4d0c98: 0x70651c88  pextlw      $v1, $v1, $a1
    ctx->pc = 0x4d0c98u;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4d0c9c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d0ca0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4d0ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4d0ca4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0ca4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d0ca8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4d0ca8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4d0cac: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x4d0cacu;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4d0cb0: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x4d0cb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4d0cb4: 0x704810e8  pminw       $v0, $v0, $t0
    ctx->pc = 0x4d0cb4u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x4d0cb8: 0x704a10c8  pmaxw       $v0, $v0, $t2
    ctx->pc = 0x4d0cb8u;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x4d0cbc: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x4d0cbcu;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x4d0cc0: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x4d0cc0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x4d0cc4: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x4d0cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x4d0cc8: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x4D0CC8u;
    {
        const bool branch_taken_0x4d0cc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0CC8u;
        // 0x4d0ccc: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0cc8) {
            ctx->pc = 0x4D0C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0c60;
        }
    }
    ctx->pc = 0x4D0CD0u;
    // 0x4d0cd0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x4D0CD0u;
    {
        const bool branch_taken_0x4d0cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0CD0u;
        // 0x4d0cd4: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0cd0) {
            ctx->pc = 0x4D0DA8u;
            goto label_4d0da8;
        }
    }
    ctx->pc = 0x4D0CD8u;
label_4d0cd8:
    // 0x4d0cd8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x4d0cd8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4d0cdc: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x4d0cdcu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x4d0ce0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4d0ce0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4d0ce4: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x4d0ce4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x4d0ce8: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x4d0ce8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x4d0cec: 0x71605b89  pcpyld      $t3, $t3, $zero
    ctx->pc = 0x4d0cecu;
    SET_GPR_VEC(ctx, 11, PS2_PCPYLD(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x4d0cf0: 0x3c0b8000  lui         $t3, 0x8000
    ctx->pc = 0x4d0cf0u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32768 << 16));
    // 0x4d0cf4: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x4d0cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x4d0cf8: 0xb5c38  dsll        $t3, $t3, 16
    ctx->pc = 0x4d0cf8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << 16);
    // 0x4d0cfc: 0x356b8000  ori         $t3, $t3, 0x8000
    ctx->pc = 0x4d0cfcu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)32768);
    // 0x4d0d00: 0x340afffe  ori         $t2, $zero, 0xFFFE
    ctx->pc = 0x4d0d00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x4d0d04: 0xa57f8  dsll        $t2, $t2, 31
    ctx->pc = 0x4d0d04u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 31);
    // 0x4d0d08: 0x354a7fff  ori         $t2, $t2, 0x7FFF
    ctx->pc = 0x4d0d08u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32767);
    // 0x4d0d0c: 0x71405389  pcpyld      $t2, $t2, $zero
    ctx->pc = 0x4d0d0cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x4d0d10: 0x340afffe  ori         $t2, $zero, 0xFFFE
    ctx->pc = 0x4d0d10u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65534);
    // 0x4d0d14: 0xa57f8  dsll        $t2, $t2, 31
    ctx->pc = 0x4d0d14u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 31);
    // 0x4d0d18: 0x354a7fff  ori         $t2, $t2, 0x7FFF
    ctx->pc = 0x4d0d18u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32767);
    // 0x4d0d1c: 0x11000021  beqz        $t0, . + 4 + (0x21 << 2)
    ctx->pc = 0x4D0D1Cu;
    {
        const bool branch_taken_0x4d0d1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4D0D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0D1Cu;
        // 0x4d0d20: 0x8fa9408c  lw          $t1, 0x408C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0d1c) {
            ctx->pc = 0x4D0DA4u;
            goto label_4d0da4;
        }
    }
    ctx->pc = 0x4D0D24u;
    // 0x4d0d24: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x4d0d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x4d0d28: 0xe23021  addu        $a2, $a3, $v0
    ctx->pc = 0x4d0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x4d0d2c: 0x0  nop
    ctx->pc = 0x4d0d2cu;
    // NOP
label_4d0d30:
    // 0x4d0d30: 0xc4e30004  lwc1        $f3, 0x4($a3)
    ctx->pc = 0x4d0d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x4d0d34: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x4d0d34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
    // 0x4d0d38: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x4d0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4d0d3c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x4d0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4d0d40: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x4d0d40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x4d0d44: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x4d0d44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x4d0d48: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x4d0d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x4d0d4c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x4d0d4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x4d0d50: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x4d0d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x4d0d54: 0x46001924  .word       0x46001924                   # cvt.w.s     $f4, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0d54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x4d0d58: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x4d0d58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x4d0d5c: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x4d0d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x4d0d60: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x4d0d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x4d0d64: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0d64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4d0d68: 0x44051800  mfc1        $a1, $f3
    ctx->pc = 0x4d0d68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x4d0d6c: 0x70651c88  pextlw      $v1, $v1, $a1
    ctx->pc = 0x4d0d6cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXTLW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x4d0d70: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0d70u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d0d74: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x4d0d74u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4d0d78: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4d0d78u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x4d0d7c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4d0d7cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4d0d80: 0x70441488  pextlw      $v0, $v0, $a0
    ctx->pc = 0x4d0d80u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x4d0d84: 0x70431488  pextlw      $v0, $v0, $v1
    ctx->pc = 0x4d0d84u;
    SET_GPR_VEC(ctx, 2, PS2_PEXTLW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x4d0d88: 0x704a10e8  pminw       $v0, $v0, $t2
    ctx->pc = 0x4d0d88u;
    SET_GPR_VEC(ctx, 2, PS2_PMINW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x4d0d8c: 0x704b10c8  pmaxw       $v0, $v0, $t3
    ctx->pc = 0x4d0d8cu;
    SET_GPR_VEC(ctx, 2, PS2_PMAXW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 11)));
    // 0x4d0d90: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x4d0d90u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x4d0d94: 0x70021ca9  por         $v1, $zero, $v0
    ctx->pc = 0x4d0d94u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x4d0d98: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x4d0d98u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x4d0d9c: 0x1500ffe4  bnez        $t0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x4D0D9Cu;
    {
        const bool branch_taken_0x4d0d9c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x4D0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0D9Cu;
        // 0x4d0da0: 0x25290008  addiu       $t1, $t1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4d0d9c) {
            ctx->pc = 0x4D0D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4d0d30;
        }
    }
    ctx->pc = 0x4D0DA4u;
label_4d0da4:
    // 0x4d0da4: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x4d0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_4d0da8:
    // 0x4d0da8: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x4d0da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x4d0dac: 0xdfb04090  ld          $s0, 0x4090($sp)
    ctx->pc = 0x4d0dacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16528)));
    // 0x4d0db0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4d0db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4d0db4: 0xdfb14098  ld          $s1, 0x4098($sp)
    ctx->pc = 0x4d0db4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16536)));
    // 0x4d0db8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4d0db8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4d0dbc: 0xdfb240a0  ld          $s2, 0x40A0($sp)
    ctx->pc = 0x4d0dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16544)));
    // 0x4d0dc0: 0xdfb340a8  ld          $s3, 0x40A8($sp)
    ctx->pc = 0x4d0dc0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16552)));
    // 0x4d0dc4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4d0dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x4d0dc8: 0xdfb440b0  ld          $s4, 0x40B0($sp)
    ctx->pc = 0x4d0dc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 16560)));
    // 0x4d0dcc: 0xdfb540b8  ld          $s5, 0x40B8($sp)
    ctx->pc = 0x4d0dccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 16568)));
    // 0x4d0dd0: 0xdfb640c0  ld          $s6, 0x40C0($sp)
    ctx->pc = 0x4d0dd0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 16576)));
    // 0x4d0dd4: 0xdfb740c8  ld          $s7, 0x40C8($sp)
    ctx->pc = 0x4d0dd4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 16584)));
    // 0x4d0dd8: 0xdfbe40d0  ld          $fp, 0x40D0($sp)
    ctx->pc = 0x4d0dd8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16592)));
    // 0x4d0ddc: 0xdfbf40d8  ld          $ra, 0x40D8($sp)
    ctx->pc = 0x4d0ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16600)));
    // 0x4d0de0: 0xc7b440e0  lwc1        $f20, 0x40E0($sp)
    ctx->pc = 0x4d0de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x4d0de4: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4d0de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x4d0de8: 0x3e00008  jr          $ra
    ctx->pc = 0x4D0DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D0DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4D0DE8u;
        // 0x4d0dec: 0x27bd40f0  addiu       $sp, $sp, 0x40F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16624));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4D0DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4D0DF0u;
}
